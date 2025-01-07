Public Class Form1
    Private Sub btnGo_Click(sender As Object, e As EventArgs) Handles btnGo.Click
        Dim stFirstName As String

        stFirstName = InputBox("Enter your first name", "First Name")

        MsgBox("Hello " & stFirstName)

    End Sub

    Private Sub btnEnter_Click(sender As Object, e As EventArgs) Handles btnEnter.Click

        Dim stFirstName As String
        Dim stLastName As String
        Dim stGender As String
        Dim stOccupation As String

        stFirstName = txtFirstName.Text
        stLastName = txtLastName.Text
        stGender = txtGender.Text

        stOccupation = lstOccupation.SelectedItem

        MsgBox("Hello " & stFirstName & " " & stLastName & " Gender " & stGender & " " & stOccupation
               )

    End Sub

    Private Sub Form1_Load(sender As Object, e As EventArgs) Handles MyBase.Load

        lstOccupation.Items.Add("Engineer")
        lstOccupation.Items.Add("Actor")
        lstOccupation.Items.Add("Singer")

    End Sub
End Class
