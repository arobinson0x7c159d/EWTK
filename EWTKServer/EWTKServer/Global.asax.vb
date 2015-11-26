Imports System.Web.Optimization
Imports System.Runtime.InteropServices

Public Class MvcApplication
    Inherits System.Web.HttpApplication

    Declare Auto Function double_value Lib "FCC.dll" Alias "?double_value@@YGHH@Z" (ByVal input As Integer) As Integer

    Protected Sub Application_Start()
        AreaRegistration.RegisterAllAreas()
        FilterConfig.RegisterGlobalFilters(GlobalFilters.Filters)
        RouteConfig.RegisterRoutes(RouteTable.Routes)

        MsgBox(double_value(10).ToString())
    End Sub
End Class
