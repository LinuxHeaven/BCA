Public Class Form1
    Private Sub Button1_Click(sender As Object, e As EventArgs) Handles Button1.Click
        Dim Fruits(4) As String
        Dim Target As String
        Dim Found As Boolean

        Fruits(0) = "Apple"
        Fruits(1) = "Banana"
        Fruits(2) = "Cherry"
        Fruits(3) = "Elderberry"
        Fruits(4) = "Fig"

        Target = InputBox("Enter a fruit name: ")
        Found = False

        Dim i As Integer
        For i = 0 To 4
            If Fruits(i) = Target Then
                Found = True
                Exit For
            End If
        Next

        If Found = True Then
            MsgBox("Found at index " & i)
        Else
            MsgBox("Not found")
        End If

    End Sub
End Class
