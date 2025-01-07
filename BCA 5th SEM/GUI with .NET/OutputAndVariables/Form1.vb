Public Class Form1


    Private Sub btnGo_Click(sender As Object, e As EventArgs) Handles btnGo.Click

        MsgBox("Welcome")
        MsgBox("Hello")

        MessageBox.Show("Hello Messagebox")



    End Sub

    Private Sub btnVariable_Click(sender As Object, e As EventArgs) Handles btnVariable.Click

        Dim stname As String
        Dim stname2 As String

        stname = "str"
        stname2 = "str2"

        MsgBox("Hello " & stname & " " & stname2 & " Welcome")

        stname = "name"
        stname2 = "name2"

        MsgBox("Hello " & stname & " " & stname2 & " Welcome")

    End Sub

    Private Sub btnDataType_Click(sender As Object, e As EventArgs) Handles btnDataType.Click
        Dim stMake As String
        Dim stModel As String
        Dim iDoors As Integer
        Dim stColor As String
        Dim bTaxed As Boolean
        Dim iEngineSize As Integer
        Dim decPrice As Decimal
        Dim dtDateRegistered As Date

        stMake = "Toyota"
        stModel = "Camry"
        iDoors = 4
        stColor = "Red"
        bTaxed = True
        iEngineSize = 1200
        decPrice = 999.99
        dtDateRegistered = #10/25/2024#

        MsgBox("Make: " & stMake & vbNewLine & "Model: " & stModel & vbNewLine &
               "Doors: " & iDoors & vbNewLine & "Color: " & stColor & vbNewLine &
               "Taxed: " & bTaxed & vbNewLine & "Engine Size: " & iEngineSize & vbNewLine &
               "Price: " & decPrice & vbNewLine & "Date Registered: " & dtDateRegistered)


    End Sub

End Class
