<Global.Microsoft.VisualBasic.CompilerServices.DesignerGenerated()>
Partial Class Form1
    Inherits System.Windows.Forms.Form

    'Form overrides dispose to clean up the component list.
    <System.Diagnostics.DebuggerNonUserCode()>
    Protected Overrides Sub Dispose(disposing As Boolean)
        Try
            If disposing AndAlso components IsNot Nothing Then
                components.Dispose()
            End If
        Finally
            MyBase.Dispose(disposing)
        End Try
    End Sub

    'Required by the Windows Form Designer
    Private components As System.ComponentModel.IContainer

    'NOTE: The following procedure is required by the Windows Form Designer
    'It can be modified using the Windows Form Designer.  
    'Do not modify it using the code editor.
    <System.Diagnostics.DebuggerStepThrough()>
    Private Sub InitializeComponent()
        btnGo = New Button()
        btnVariable = New Button()
        btnDataType = New Button()
        SuspendLayout()
        ' 
        ' btnGo
        ' 
        btnGo.Location = New Point(153, 12)
        btnGo.Name = "btnGo"
        btnGo.Size = New Size(161, 84)
        btnGo.TabIndex = 0
        btnGo.Text = "Go"
        btnGo.UseVisualStyleBackColor = True
        ' 
        ' btnVariable
        ' 
        btnVariable.Location = New Point(358, 12)
        btnVariable.Name = "btnVariable"
        btnVariable.Size = New Size(176, 84)
        btnVariable.TabIndex = 1
        btnVariable.Text = "Variable Declaration"
        btnVariable.UseVisualStyleBackColor = True
        ' 
        ' btnDataType
        ' 
        btnDataType.Location = New Point(609, 12)
        btnDataType.Name = "btnDataType"
        btnDataType.Size = New Size(140, 84)
        btnDataType.TabIndex = 2
        btnDataType.Text = "Data Type"
        btnDataType.UseVisualStyleBackColor = True
        ' 
        ' Form1
        ' 
        AutoScaleDimensions = New SizeF(7F, 15F)
        AutoScaleMode = AutoScaleMode.Font
        ClientSize = New Size(800, 450)
        Controls.Add(btnDataType)
        Controls.Add(btnVariable)
        Controls.Add(btnGo)
        Name = "Form1"
        Text = "Form1"
        ResumeLayout(False)
    End Sub

    Friend WithEvents btnGo As Button
    Friend WithEvents btnVariable As Button
    Friend WithEvents btnDataType As Button

End Class
