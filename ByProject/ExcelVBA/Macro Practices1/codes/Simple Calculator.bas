Attribute VB_Name = "Module3"
' Calculator

Public Block_1 As Integer
Public Block_2 As Integer
Public Block_Answer As Integer
Public Next_Value As Boolean
Public Same_Value As Boolean
Public Continue_Cal As Boolean
Public Add_Val As Boolean
Public Subtract_Val As Boolean
Public Divide_Val As Boolean
Public Multiply_Val As Boolean





Sub Butten_1()
    
If Continue_Cal = True Then
    
        If Same_Value = False Then
            Block_1 = Block_Answer
            Block_2 = 1
            Same_Value = True
         Else
            Block_1 = Block_Answer
            Block_2 = Block_2 & 1
        End If

   Else
    If Next_Value = False Then
        If Same_Value = False Then
                    Block_1 = 1
                    Same_Value = True
                Else
                    Block_1 = Block_1 & 1
        End If
    Else
        If Same_Value = False Then
                    Block_2 = 1
                    Same_Value = True
                Else
                    Block_2 = Block_2 & 1
        End If
    End If
End If
End Sub

Sub Butten_2()

If Continue_Cal = True Then
    
        If Same_Value = False Then
            Block_1 = Block_Answer
            Block_2 = 2
            Same_Value = True
         Else
            Block_1 = Block_Answer
            Block_2 = Block_2 & 2
        End If

   Else
    If Next_Value = False Then
        If Same_Value = False Then
                    Block_1 = 2
                    Same_Value = True
                Else
                    Block_1 = Block_1 & 2
        End If
    Else
        If Same_Value = False Then
                    Block_2 = 2
                    Same_Value = True
                Else
                    Block_2 = Block_2 & 2
        End If
    End If
End If

End Sub
Sub Butten_3()

If Continue_Cal = True Then
    
        If Same_Value = False Then
            Block_1 = Block_Answer
            Block_2 = 3
            Same_Value = True
         Else
            Block_1 = Block_Answer
            Block_2 = Block_2 & 3
        End If

   Else
    If Next_Value = False Then
        If Same_Value = False Then
                    Block_1 = 3
                    Same_Value = True
                Else
                    Block_1 = Block_1 & 3
        End If
    Else
        If Same_Value = False Then
                    Block_2 = 3
                    Same_Value = True
                Else
                    Block_2 = Block_2 & 3
        End If
    End If
End If

End Sub
Sub Butten_4()

If Continue_Cal = True Then
    
        If Same_Value = False Then
            Block_1 = Block_Answer
            Block_2 = 4
            Same_Value = True
         Else
            Block_1 = Block_Answer
            Block_2 = Block_2 & 4
        End If

   Else
    If Next_Value = False Then
        If Same_Value = False Then
                    Block_1 = 4
                    Same_Value = True
                Else
                    Block_1 = Block_1 & 4
        End If
    Else
        If Same_Value = False Then
                    Block_2 = 4
                    Same_Value = True
                Else
                    Block_2 = Block_2 & 4
        End If
    End If
End If

End Sub
Sub Butten_5()

If Continue_Cal = True Then
    
        If Same_Value = False Then
            Block_1 = Block_Answer
            Block_2 = 5
            Same_Value = True
         Else
            Block_1 = Block_Answer
            Block_2 = Block_2 & 5
        End If

   Else
    If Next_Value = False Then
        If Same_Value = False Then
                    Block_1 = 5
                    Same_Value = True
                Else
                    Block_1 = Block_1 & 5
        End If
    Else
        If Same_Value = False Then
                    Block_2 = 5
                    Same_Value = True
                Else
                    Block_2 = Block_2 & 5
        End If
    End If
End If

End Sub
Sub Butten_6()

If Continue_Cal = True Then
    
        If Same_Value = False Then
            Block_1 = Block_Answer
            Block_2 = 6
            Same_Value = True
         Else
            Block_1 = Block_Answer
            Block_2 = Block_2 & 6
        End If

   Else
    If Next_Value = False Then
        If Same_Value = False Then
                    Block_1 = 6
                    Same_Value = True
                Else
                    Block_1 = Block_1 & 6
        End If
    Else
        If Same_Value = False Then
                    Block_2 = 6
                    Same_Value = True
                Else
                    Block_2 = Block_2 & 6
        End If
    End If
End If

End Sub
Sub Butten_7()

If Continue_Cal = True Then
    
        If Same_Value = False Then
            Block_1 = Block_Answer
            Block_2 = 7
            Same_Value = True
         Else
            Block_1 = Block_Answer
            Block_2 = Block_2 & 7
        End If

   Else
    If Next_Value = False Then
        If Same_Value = False Then
                    Block_1 = 7
                    Same_Value = True
                Else
                    Block_1 = Block_1 & 7
        End If
    Else
        If Same_Value = False Then
                    Block_2 = 7
                    Same_Value = True
                Else
                    Block_2 = Block_2 & 7
        End If
    End If
End If

End Sub
Sub Butten_8()

If Continue_Cal = True Then
    
        If Same_Value = False Then
            Block_1 = Block_Answer
            Block_2 = 8
            Same_Value = True
         Else
            Block_1 = Block_Answer
            Block_2 = Block_2 & 8
        End If

   Else
    If Next_Value = False Then
        If Same_Value = False Then
                    Block_1 = 8
                    Same_Value = True
                Else
                    Block_1 = Block_1 & 8
        End If
    Else
        If Same_Value = False Then
                    Block_2 = 8
                    Same_Value = True
                Else
                    Block_2 = Block_2 & 8
        End If
    End If
End If

End Sub
Sub Butten_9()

If Continue_Cal = True Then
    
        If Same_Value = False Then
            Block_1 = Block_Answer
            Block_2 = 9
            Same_Value = True
         Else
            Block_1 = Block_Answer
            Block_2 = Block_2 & 9
        End If

   Else
    If Next_Value = False Then
        If Same_Value = False Then
                    Block_1 = 9
                    Same_Value = True
                Else
                    Block_1 = Block_1 & 9
        End If
    Else
        If Same_Value = False Then
                    Block_2 = 9
                    Same_Value = True
                Else
                    Block_2 = Block_2 & 9
        End If
    End If
End If

End Sub
Sub Butten_10()

If Continue_Cal = True Then
    
        If Same_Value = False Then
            Block_1 = Block_Answer
            Block_2 = 0
            Same_Value = True
         Else
            Block_1 = Block_Answer
            Block_2 = Block_2 & 0
        End If

   Else
    If Next_Value = False Then
        If Same_Value = False Then
                    Block_1 = 0
                    Same_Value = True
                Else
                    Block_1 = Block_1 & 0
        End If
    Else
        If Same_Value = False Then
                    Block_2 = 0
                    Same_Value = True
                Else
                    Block_2 = Block_2 & 0
        End If
    End If
End If

End Sub


Sub Add()

    Next_Value = True
    Same_Value = False
    Add_Val = True
    
End Sub

Sub Subtract()

    Next_Value = True
    Same_Value = False
    Subtract_Val = True
    
End Sub

Sub Multiply()

    Next_Value = True
    Same_Value = False
    Multiply_Val = True
    
End Sub

Sub Divide()

    Next_Value = True
    Same_Value = False
    Divide_Val = True
    
End Sub


Sub Equal()
 
    If Add_Val = True Then
            Block_Answer = Block_1 + Block_2
        ElseIf Subtact_Val = True Then
            Block_Answer = Block_1 - Block_2
        ElseIf Divide_Val = True Then
            Block_Answer = Block_1 / Block_2
        ElseIf Multiply_Val = True Then
            Block_Answer = Block_1 * Block_2
    End If
    
Add_Val = False
Subtract_Val = False
Divide_Val = False
Multiply_Val = False
Next_Value = False
Same_Value = True
Continue_Cal = True

MsgBox ("Your Answer is: " & Block_Answer)
MsgBox ("Your Answer for block_1 is: " & Block_1)
MsgBox ("Your Answer for block_2 is: " & Block_2)
        
End Sub


Sub Clear()

Block_1 = 0
Block_2 = 0
Block_Answer = 0
Next_Value = False
Same_Value = False
Continue_Cal = False
Add_Val = False
Subtract_Val = False
Divide_Val = False
Multiply_Val = False

End Sub










