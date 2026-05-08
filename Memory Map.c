
Note: Não está Atualizado!

W(0-99)   			Entradas digitais (Sensores)
W(100-199)   		Saídas digitais (Saídas)
W(200-299)   		Estados/diagnóstico digitais
W(300-399)   		Comandos digitais HMI/broker


D(0-99) 			Valores de entrada / medições / progressos
D(100-199) 			Valores de saída / contadores / produção
D(200-299) 			Estados numéricos / FaultID / códigos
D(300-399) 			Parâmetros / setpoints

/---------Variavies Comunicação (Master -> FB(CNC))-------------/

ST_CNC_Cmd
	Start    BOOL
	Stop     BOOL
	Reset    BOOL
	Enable   BOOL

/--------- Variavies Comunicação (FB(CNC) -> Master)-------------/

ST_CNC_Sts
	Ready      BOOL
	Busy       BOOL
	Done       BOOL
	Fault      BOOL
	State      INT
	FaultID    UINT / INT
	Progress   INT
	Counter    INT



/--------- Variavies TimeOut CNC -------------/
ST_CNC_Par
	TimeoutFeed
	TimeoutMachining
	TimeoutExit


/--------- Variáveis internas de comunicação (Master <-> CNC) Instancias Structs --------------/

GB_Cmd     ST_CNC_Cmd
GB_Sts     ST_CNC_Sts
GB_Par     ST_CNC_Par

GL_Cmd     ST_CNC_Cmd
GL_Sts     ST_CNC_Sts
GL_Par     ST_CNC_Par

BB_Cmd     ST_CNC_Cmd
BB_Sts     ST_CNC_Sts
BB_Par     ST_CNC_Par

BL_Cmd     ST_CNC_Cmd
BL_Sts     ST_CNC_Sts
BL_Par     ST_CNC_Par


/--------- Variavies Globais --------------/

Entradas digitais:
GB_EntrySensor       %W0.00
GB_ExitSensor        %W0.01
GB_CenterBusy        %W0.02
GB_CenterError       %W0.03

GL_EntrySensor       %W1.00
GL_ExitSensor        %W1.01
GL_CenterBusy        %W1.02
GL_CenterError       %W1.03

BB_EntrySensor       %W2.00
BB_ExitSensor        %W2.01
BB_CenterBusy        %W2.02
BB_CenterError       %W2.03

BL_EntrySensor       %W3.00
BL_ExitSensor        %W3.01
BL_CenterBusy        %W3.02
BL_CenterError       %W3.03

StartMain_Button     %W90.00
StopMain_Button      %W90.01
EmergencyMain_Button %W90.02

Saídas digitais:
GB_CenterStart       %W100.00
GB_CenterReset       %W100.01
GB_CenterStop        %W100.02
GB_Emitter           %W100.03
GB_EntryConveyor     %W100.04
GB_ExitConveyor      %W100.05

GL_CenterStart       %W101.00
GL_CenterReset       %W101.01
GL_CenterStop        %W101.02
GL_Emitter           %W101.03
GL_EntryConveyor     %W101.04
GL_ExitConveyor      %W101.05

BB_CenterStart       %W102.00
BB_CenterReset       %W102.01
BB_CenterStop        %W102.02
BB_Emitter           %W102.03
BB_EntryConveyor     %W102.04
BB_ExitConveyor      %W102.05

BL_CenterStart       %W103.00
BL_CenterReset       %W103.01
BL_CenterStop        %W103.02
BL_Emitter           %W103.03
BL_EntryConveyor     %W103.04
BL_ExitConveyor      %W103.05

StackLight_Green     %W160.00
StackLight_Red		 %W160.01
StackLight_Yellow 	 %W160.02

Conveyor_0           %W170.00
Conveyor_1           %W170.01

Valores:
GB_Progress          %D0
GL_Progress          %D1
BB_Progress          %D2
BL_Progress          %D3

GB_Counter           %D100
GL_Counter           %D101
BB_Counter           %D102
BL_Counter           %D103