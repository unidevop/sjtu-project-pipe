USE [MeasureDB]
GO
/****** Object:  Table [dbo].[GPSMeasure]    Script Date: 08/09/2011 13:10:56 ******/
SET ANSI_NULLS ON
GO
SET QUOTED_IDENTIFIER ON
GO
CREATE TABLE [dbo].[GPSMeasure](
	[MeasureID] [numeric](19, 0) IDENTITY(1,1) NOT NULL,
	[PipeID] [numeric](19, 0) NULL,
	[ProjectPointID] [numeric](19, 0) NULL,
	[MeasureTime] [datetime] NULL,
	[X] [numeric](19, 6) NULL,
	[Y] [numeric](19, 6) NULL,
	[Z] [numeric](19, 6) NULL,
PRIMARY KEY CLUSTERED 
(
	[MeasureID] ASC
)WITH (IGNORE_DUP_KEY = OFF) ON [PRIMARY]
) ON [PRIMARY]
