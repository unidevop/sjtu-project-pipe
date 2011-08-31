USE [MeasureDB]
GO
/****** Object:  Table [dbo].[InclineMeasure]    Script Date: 08/09/2011 13:13:46 ******/
SET ANSI_NULLS ON
GO
SET QUOTED_IDENTIFIER ON
GO
CREATE TABLE [dbo].[InclineMeasure](
	[MeasureID] [numeric](19, 0) IDENTITY(1,1) NOT NULL,
	[PipeID] [numeric](19, 0) NULL,
	[ProjectPointID] [numeric](19, 0) NULL,
	[MeasureTime] [datetime] NULL,
	[Angle1] [numeric](19, 6) NULL,
	[Angle2] [numeric](19, 6) NULL,
PRIMARY KEY CLUSTERED 
(
	[MeasureID] ASC
)WITH (IGNORE_DUP_KEY = OFF) ON [PRIMARY]
) ON [PRIMARY]
