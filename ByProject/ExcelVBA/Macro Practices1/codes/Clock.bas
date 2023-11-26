Attribute VB_Name = "Clock"
'Countdown Clock
'Gobal Varibles

Public Set_Alarm_D As Date
Public Set_Alarm_T As Date
Public Set_Timer_1 As Date
Public Set_Timer_2 As Date
Public Set_Timer_Val_H As Variant
Public Set_Timer_Val_M As Variant
Public Timer_Start_Point As Date
Public Current_Alarm_D As Date
Public Current_Alarm_T As Date
Public Current_Time As Date
Public Alarm_Switch As Boolean
Public Timer_Switch As Boolean

Function Alarm_Clock()

'Alarm Clock running




Do Until Alarm_Switch = False
    Current_Alarm_D = Date
    Current_Alarm_T = Time()
    If Current_Alarm_D >= Set_Alarm_D And Current_Alarm_T >= Set_Alarm_T Then
            Alarm_Switch = False
            MsgBox (" The Alarm has stopped on " & Set_Alarm_D & " at " & Set_Alarm_T)
        Else
            Alarm_Switch = True
            
    End If
Loop
End Function

Function Timer_Clock()

'Timer Clock running



Do Until Timer_Switch = False
    Current_Time = Time()
    If Current_Time >= Set_Timer_2 Then
            Timer_Switch = False
            MsgBox (" The Alarm has stopped at: " & Set_Timer_2)
        Else
            Timer_Switch = True
    End If
Loop
End Function



Sub Switch_Alarm_Butten()

'Display message, if no Alarm is set.
'Toggles the Alarm on/off.

If Set_Alarm_T Or Set_Alarm_D <> 0 Then
        Alarm_Switch = True
        MsgBox ("Timer is turned on." & Chr(10) & "Ok, Lets Go.")
    ElseIf Alarm_Switch = True Then
        Msg_t = MsgBox("Alarm is on already.", vbCritical)
    
    Else
        Msg_A = MsgBox("Please Set Alarm frist.", vbCritical)
        
End If

End Sub



Sub Switch_Timer_Butten()

'Display message, if no Timer is set.
'Toggles the Timer on/off.



If Set_Timer_2 <> 0 Then
        Timer_Switch = True
        MsgBox ("Timer is turned on." & Chr(10) & "Ok, Lets Go.")
    ElseIf Timer_Switch = True Then
        Msg_t = MsgBox("Timer is on already.", vbCritical)
        
    Else
        Msg_t = MsgBox("Please Set Timer frist.", vbCritical)
        
End If

End Sub


Sub Set_Alarm_Butten()

'Set Alarm.

Dim Message_A

Set_Alarm_D = InputBox("Please enter the Alarm Date. " & Chr(10) & "Format: Date(Month/Day/Year)") 'Enter Date
Set_Alarm_D = CDate(Set_Alarm_D)

Set_Alarm_T = InputBox("Please enter the Alarm Time. " & Chr(10) & "Format:Time(Hours:Minutes AM/PM)") 'Enter Time
Set_Alarm_T = TimeValue(Set_Alarm_T)

Message_A = MsgBox("Do you want to start the Alarm now?", 3, "Yes or No")
If Message_A = 6 Then
        Call Switch_Alarm_Butten
   
    Else
        MsgBox ("Ok then,When your Ready.")
End If

Call Alarm_Clock

End Sub

Sub Set_Timer_Butten()

'Set Timer

Dim Message_T
Timer_Start_Point = Time()

Set_Timer_Val_H = InputBox("Please enter Hours for Timer.") ' Enter Hours.
Set_Timer_Val_M = InputBox("Please enter Minutes for Timer.") ' Enter Minutes.

Set_Timer_1 = TimeValue(Set_Timer_Val_H & ":" & Set_Timer_Val_M & ":0")
Set_Timer_2 = Set_Timer_1 + Timer_Start_Point

Message_T = MsgBox("Do you want to start the Timer now?", 3, "Yes or No")
If Message_T = 6 Then
        Call Switch_Timer_Butten
   
    Else
        MsgBox ("Ok then,When your Ready.")
End If

Call Timer_Clock
 

End Sub


Sub Clear_Butten()

'Clear data


Set_Alarm_D = 0
Set_Alarm_T = 0
Set_Timer_1 = 0
Set_Timer_2 = 0
Set_Timer_Val_H = 0
Set_Timer_Val_M = 0
Current_Alarm_D = 0
Current_Alarm_T = 0

Alarm_Switch = False
Timer_Switch = False
MsgBox ("Alarm and Timer turned off")

End Sub
