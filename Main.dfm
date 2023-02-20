object Form1: TForm1
  Left = 0
  Top = 0
  Caption = 'Form1'
  ClientHeight = 336
  ClientWidth = 635
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object Button1: TButton
    Left = 136
    Top = 56
    Width = 75
    Height = 25
    Caption = 'Cheap'
    TabOrder = 0
    OnClick = Button1Click
  end
  object Button2: TButton
    Left = 136
    Top = 87
    Width = 75
    Height = 25
    Caption = 'Rich'
    TabOrder = 1
    OnClick = Button2Click
  end
  object Memo1: TMemo
    Left = 248
    Top = 58
    Width = 337
    Height = 239
    TabOrder = 2
  end
  object Button3: TButton
    Left = 136
    Top = 118
    Width = 75
    Height = 25
    Caption = 'Rich2'
    TabOrder = 3
    OnClick = Button3Click
  end
end
