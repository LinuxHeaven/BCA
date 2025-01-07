Public Class Form1
    Private Sub Button1_Click(sender As Object, e As EventArgs) Handles Button1.Click
        ' Dim arrFruit() As String = {"Apple", "Banana", "Cherry", "Date", "Elderberry"}
        Dim arrFruit(4) As String

        arrFruit(0) = "Apple"
        arrFruit(1) = "Banana"
        arrFruit(2) = "Cherry"
        arrFruit(3) = "Date"
        arrFruit(4) = "Elderberry"

        Dim i As Integer
        For i = 0 To 4
            MsgBox(arrFruit(i))
        Next

    End Sub
End Class
