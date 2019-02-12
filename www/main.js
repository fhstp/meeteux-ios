(window["webpackJsonp"] = window["webpackJsonp"] || []).push([["main"],{

/***/ "./src/$$_lazy_route_resource lazy recursive":
/*!**********************************************************!*\
  !*** ./src/$$_lazy_route_resource lazy namespace object ***!
  \**********************************************************/
/*! no static exports found */
/***/ (function(module, exports) {

function webpackEmptyAsyncContext(req) {
	// Here Promise.resolve().then() is used instead of new Promise() to prevent
	// uncaught exception popping up in devtools
	return Promise.resolve().then(function() {
		var e = new Error("Cannot find module '" + req + "'");
		e.code = 'MODULE_NOT_FOUND';
		throw e;
	});
}
webpackEmptyAsyncContext.keys = function() { return []; };
webpackEmptyAsyncContext.resolve = webpackEmptyAsyncContext;
module.exports = webpackEmptyAsyncContext;
webpackEmptyAsyncContext.id = "./src/$$_lazy_route_resource lazy recursive";

/***/ }),

/***/ "./src/app/WindowRef.ts":
/*!******************************!*\
  !*** ./src/app/WindowRef.ts ***!
  \******************************/
/*! exports provided: WindowRef */
/***/ (function(module, __webpack_exports__, __webpack_require__) {

"use strict";
__webpack_require__.r(__webpack_exports__);
/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, "WindowRef", function() { return WindowRef; });
/* harmony import */ var _angular_core__WEBPACK_IMPORTED_MODULE_0__ = __webpack_require__(/*! @angular/core */ "./node_modules/@angular/core/fesm5/core.js");
var __decorate = (undefined && undefined.__decorate) || function (decorators, target, key, desc) {
    var c = arguments.length, r = c < 3 ? target : desc === null ? desc = Object.getOwnPropertyDescriptor(target, key) : desc, d;
    if (typeof Reflect === "object" && typeof Reflect.decorate === "function") r = Reflect.decorate(decorators, target, key, desc);
    else for (var i = decorators.length - 1; i >= 0; i--) if (d = decorators[i]) r = (c < 3 ? d(r) : c > 3 ? d(target, key, r) : d(target, key)) || r;
    return c > 3 && r && Object.defineProperty(target, key, r), r;
};

function _window() {
    // return the global native browser window object
    return window;
}
var WindowRef = /** @class */ (function () {
    function WindowRef() {
    }
    Object.defineProperty(WindowRef.prototype, "nativeWindow", {
        get: function () {
            return _window();
        },
        enumerable: true,
        configurable: true
    });
    WindowRef = __decorate([
        Object(_angular_core__WEBPACK_IMPORTED_MODULE_0__["Injectable"])()
    ], WindowRef);
    return WindowRef;
}());



/***/ }),

/***/ "./src/app/app-routing.module.ts":
/*!***************************************!*\
  !*** ./src/app/app-routing.module.ts ***!
  \***************************************/
/*! exports provided: AppRoutingModule */
/***/ (function(module, __webpack_exports__, __webpack_require__) {

"use strict";
__webpack_require__.r(__webpack_exports__);
/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, "AppRoutingModule", function() { return AppRoutingModule; });
/* harmony import */ var _angular_core__WEBPACK_IMPORTED_MODULE_0__ = __webpack_require__(/*! @angular/core */ "./node_modules/@angular/core/fesm5/core.js");
/* harmony import */ var _angular_router__WEBPACK_IMPORTED_MODULE_1__ = __webpack_require__(/*! @angular/router */ "./node_modules/@angular/router/fesm5/router.js");
/* harmony import */ var _components_register_register_component__WEBPACK_IMPORTED_MODULE_2__ = __webpack_require__(/*! ./components/register/register.component */ "./src/app/components/register/register.component.ts");
/* harmony import */ var _components_login_login_component__WEBPACK_IMPORTED_MODULE_3__ = __webpack_require__(/*! ./components/login/login.component */ "./src/app/components/login/login.component.ts");
/* harmony import */ var _components_page_not_found_page_not_found_component__WEBPACK_IMPORTED_MODULE_4__ = __webpack_require__(/*! ./components/page-not-found/page-not-found.component */ "./src/app/components/page-not-found/page-not-found.component.ts");
/* harmony import */ var _components_main_view_main_view_component__WEBPACK_IMPORTED_MODULE_5__ = __webpack_require__(/*! ./components/main-view/main-view.component */ "./src/app/components/main-view/main-view.component.ts");
/* harmony import */ var _components_content_passive_content_passive_component__WEBPACK_IMPORTED_MODULE_6__ = __webpack_require__(/*! ./components/content-passive/content-passive.component */ "./src/app/components/content-passive/content-passive.component.ts");
/* harmony import */ var _components_content_interactive_content_interactive_component__WEBPACK_IMPORTED_MODULE_7__ = __webpack_require__(/*! ./components/content-interactive/content-interactive.component */ "./src/app/components/content-interactive/content-interactive.component.ts");
/* harmony import */ var _components_content_table_at_content_table_at_component__WEBPACK_IMPORTED_MODULE_8__ = __webpack_require__(/*! ./components/content-table-at/content-table-at.component */ "./src/app/components/content-table-at/content-table-at.component.ts");
/* harmony import */ var _components_content_table_on_content_table_on_component__WEBPACK_IMPORTED_MODULE_9__ = __webpack_require__(/*! ./components/content-table-on/content-table-on.component */ "./src/app/components/content-table-on/content-table-on.component.ts");
/* harmony import */ var _components_start_view_start_view_component__WEBPACK_IMPORTED_MODULE_10__ = __webpack_require__(/*! ./components/start-view/start-view.component */ "./src/app/components/start-view/start-view.component.ts");
/* harmony import */ var _components_change_credentials_change_credentials_component__WEBPACK_IMPORTED_MODULE_11__ = __webpack_require__(/*! ./components/change-credentials/change-credentials.component */ "./src/app/components/change-credentials/change-credentials.component.ts");
/* harmony import */ var _components_register_realuser_register_realuser_component__WEBPACK_IMPORTED_MODULE_12__ = __webpack_require__(/*! ./components/register-realuser/register-realuser.component */ "./src/app/components/register-realuser/register-realuser.component.ts");
/* harmony import */ var _components_language_start_language_start_component__WEBPACK_IMPORTED_MODULE_13__ = __webpack_require__(/*! ./components/language-start/language-start.component */ "./src/app/components/language-start/language-start.component.ts");
/* harmony import */ var _components_wappen_wappen_component__WEBPACK_IMPORTED_MODULE_14__ = __webpack_require__(/*! ./components/wappen/wappen.component */ "./src/app/components/wappen/wappen.component.ts");
/* harmony import */ var _components_about_about_component__WEBPACK_IMPORTED_MODULE_15__ = __webpack_require__(/*! ./components/about/about.component */ "./src/app/components/about/about.component.ts");
/* harmony import */ var _components_legal_legal_component__WEBPACK_IMPORTED_MODULE_16__ = __webpack_require__(/*! ./components/legal/legal.component */ "./src/app/components/legal/legal.component.ts");
/* harmony import */ var _components_education_quiz_education_quiz_component__WEBPACK_IMPORTED_MODULE_17__ = __webpack_require__(/*! ./components/education-quiz/education-quiz.component */ "./src/app/components/education-quiz/education-quiz.component.ts");
/* harmony import */ var _components_content_table_notify_at_content_table_notify_at_component__WEBPACK_IMPORTED_MODULE_18__ = __webpack_require__(/*! ./components/content-table-notify-at/content-table-notify-at.component */ "./src/app/components/content-table-notify-at/content-table-notify-at.component.ts");
/* harmony import */ var _components_content_table_notify_on_content_table_notify_on_component__WEBPACK_IMPORTED_MODULE_19__ = __webpack_require__(/*! ./components/content-table-notify-on/content-table-notify-on.component */ "./src/app/components/content-table-notify-on/content-table-notify-on.component.ts");
var __decorate = (undefined && undefined.__decorate) || function (decorators, target, key, desc) {
    var c = arguments.length, r = c < 3 ? target : desc === null ? desc = Object.getOwnPropertyDescriptor(target, key) : desc, d;
    if (typeof Reflect === "object" && typeof Reflect.decorate === "function") r = Reflect.decorate(decorators, target, key, desc);
    else for (var i = decorators.length - 1; i >= 0; i--) if (d = decorators[i]) r = (c < 3 ? d(r) : c > 3 ? d(target, key, r) : d(target, key)) || r;
    return c > 3 && r && Object.defineProperty(target, key, r), r;
};




















var routes = [
    { path: '', component: _components_start_view_start_view_component__WEBPACK_IMPORTED_MODULE_10__["StartViewComponent"] },
    { path: 'login', component: _components_login_login_component__WEBPACK_IMPORTED_MODULE_3__["LoginComponent"] },
    { path: 'mainview', component: _components_main_view_main_view_component__WEBPACK_IMPORTED_MODULE_5__["MainViewComponent"] },
    { path: 'register', component: _components_register_register_component__WEBPACK_IMPORTED_MODULE_2__["RegisterComponent"] },
    { path: 'registerRealUser', component: _components_register_realuser_register_realuser_component__WEBPACK_IMPORTED_MODULE_12__["RegisterRealuserComponent"] },
    { path: 'changeLanguageStart', component: _components_language_start_language_start_component__WEBPACK_IMPORTED_MODULE_13__["LanguageStartComponent"] },
    { path: 'changecred', component: _components_change_credentials_change_credentials_component__WEBPACK_IMPORTED_MODULE_11__["ChangeCredentialsComponent"] },
    { path: 'passive', component: _components_content_passive_content_passive_component__WEBPACK_IMPORTED_MODULE_6__["ContentPassiveComponent"] },
    { path: 'interactive', component: _components_content_interactive_content_interactive_component__WEBPACK_IMPORTED_MODULE_7__["ContentInteractiveComponent"] },
    { path: 'tableat', component: _components_content_table_at_content_table_at_component__WEBPACK_IMPORTED_MODULE_8__["ContentTableAtComponent"], runGuardsAndResolvers: 'always' },
    { path: 'tableon', component: _components_content_table_on_content_table_on_component__WEBPACK_IMPORTED_MODULE_9__["ContentTableOnComponent"] },
    { path: 'about', component: _components_about_about_component__WEBPACK_IMPORTED_MODULE_15__["AboutComponent"] },
    { path: 'legal', component: _components_legal_legal_component__WEBPACK_IMPORTED_MODULE_16__["LegalComponent"] },
    { path: 'educationQuiz', component: _components_education_quiz_education_quiz_component__WEBPACK_IMPORTED_MODULE_17__["EducationQuizComponent"] },
    { path: 'wappen', component: _components_wappen_wappen_component__WEBPACK_IMPORTED_MODULE_14__["WappenComponent"] },
    { path: 'tableNotifyAt', component: _components_content_table_notify_at_content_table_notify_at_component__WEBPACK_IMPORTED_MODULE_18__["ContentTableNotifyAtComponent"] },
    { path: 'tableNotifyOn', component: _components_content_table_notify_on_content_table_notify_on_component__WEBPACK_IMPORTED_MODULE_19__["ContentTableNotifyOnComponent"] },
    { path: '**', component: _components_page_not_found_page_not_found_component__WEBPACK_IMPORTED_MODULE_4__["PageNotFoundComponent"] }
    // don't touch this
];
var AppRoutingModule = /** @class */ (function () {
    function AppRoutingModule() {
    }
    AppRoutingModule = __decorate([
        Object(_angular_core__WEBPACK_IMPORTED_MODULE_0__["NgModule"])({
            imports: [
                _angular_router__WEBPACK_IMPORTED_MODULE_1__["RouterModule"].forRoot(routes, { onSameUrlNavigation: 'reload', enableTracing: false }) // <-- debugging purposes only)
            ],
            exports: [_angular_router__WEBPACK_IMPORTED_MODULE_1__["RouterModule"]]
        })
    ], AppRoutingModule);
    return AppRoutingModule;
}());



/***/ }),

/***/ "./src/app/app.component.css":
/*!***********************************!*\
  !*** ./src/app/app.component.css ***!
  \***********************************/
/*! no static exports found */
/***/ (function(module, exports) {

module.exports = "@font-face {\n  font-family: 'OpenSans';\n  src: url('OpenSans-Regular.ttf');\n}\n\n.example-fill-remaining-space\n{\n  flex: 1 1 auto;\n}\n\n::ng-deep snack-bar-container.success-snackbar{\n  background: darkgreen;\n}\n\n::ng-deep snack-bar-container.error-snackbar{\n  background: darkred;\n}\n\n.hiddenbutton{\n  display: none;\n}\n\n.apptoolbar{\n  width: 65px;\n  position: fixed;\n  right: 0;\n  top: 0;\n  z-index: 10;\n}\n\n.apptoolbar mat-icon{\n  font-size: 35px;\n  margin: 5px 0 0 -11px;\n  color:#ffffff;\n}\n\n.apptoolbar button{\n  float:right;\n  border: none;\n  outline: none;\n  height: 50px;\n  width: 50px;\n  background-color: #494949;\n  background-image: url('menu.svg');\n  background-position: center;\n  background-size: 35px;\n  background-repeat: no-repeat;\n  margin: 20px 20px 0px 0px;\n}\n\n#redirectTimelineLong,\n#redirectTimeline,\n#redirectStart{\n  float:left;\n  border: none;\n  outline: none;\n  height: 50px;\n  width: 50px;\n  background-color: #494949;\n  margin: 20px 20px 0px 20px;\n  background-image: url('back.svg');\n  background-position: center;\n  background-size: 50px;\n}\n\n#redirectTimelineLong{\n  width: 100px;\n  background-color: transparent;\n  background-position: 10%;\n  background-repeat: no-repeat;\n}\n\n.menuDiv{\n  position: fixed;\n  height: 100%;\n  width: 65%;\n  top: 0;\n  right: 0;\n  z-index: 9;\n  background-color: #494949; \n}\n\n.menuDiv ul{\n  list-style: none;\n  color: #ffffff;\n  font-family: 'OpenSans', Helvetica, Arial, Sans-Serif;\n  margin: 100px auto;\n}\n\n.menuDiv ul li{\n  margin: 20% 0;\n}\n\n.dismissMenuDiv{\n  position: fixed;\n  height: 100%;\n  width: 100%;\n  top: 0;\n  right: 0;\n  z-index: 8;\n  background-color: #333333;\n  opacity: 0.5;\n}\n\n/*# sourceMappingURL=data:application/json;base64,eyJ2ZXJzaW9uIjozLCJzb3VyY2VzIjpbInNyYy9hcHAvYXBwLmNvbXBvbmVudC5jc3MiXSwibmFtZXMiOltdLCJtYXBwaW5ncyI6IkFBQUE7RUFDRSx1QkFBdUI7RUFDdkIsZ0NBQXVEO0FBQ3pEOztBQUVBOztFQUVFLGNBQWM7QUFDaEI7O0FBRUE7RUFDRSxxQkFBcUI7QUFDdkI7O0FBRUE7RUFDRSxtQkFBbUI7QUFDckI7O0FBRUE7RUFDRSxhQUFhO0FBQ2Y7O0FBRUE7RUFDRSxXQUFXO0VBQ1gsZUFBZTtFQUNmLFFBQVE7RUFDUixNQUFNO0VBQ04sV0FBVztBQUNiOztBQUVBO0VBQ0UsZUFBZTtFQUNmLHFCQUFxQjtFQUNyQixhQUFhO0FBQ2Y7O0FBRUE7RUFDRSxXQUFXO0VBQ1gsWUFBWTtFQUNaLGFBQWE7RUFDYixZQUFZO0VBQ1osV0FBVztFQUNYLHlCQUF5QjtFQUN6QixpQ0FBOEM7RUFDOUMsMkJBQTJCO0VBQzNCLHFCQUFxQjtFQUNyQiw0QkFBNEI7RUFDNUIseUJBQXlCO0FBQzNCOztBQUVBOzs7RUFHRSxVQUFVO0VBQ1YsWUFBWTtFQUNaLGFBQWE7RUFDYixZQUFZO0VBQ1osV0FBVztFQUNYLHlCQUF5QjtFQUN6QiwwQkFBMEI7RUFDMUIsaUNBQThDO0VBQzlDLDJCQUEyQjtFQUMzQixxQkFBcUI7QUFDdkI7O0FBRUE7RUFDRSxZQUFZO0VBQ1osNkJBQTZCO0VBQzdCLHdCQUF3QjtFQUN4Qiw0QkFBNEI7QUFDOUI7O0FBRUE7RUFDRSxlQUFlO0VBQ2YsWUFBWTtFQUNaLFVBQVU7RUFDVixNQUFNO0VBQ04sUUFBUTtFQUNSLFVBQVU7RUFDVix5QkFBeUI7QUFDM0I7O0FBRUE7RUFDRSxnQkFBZ0I7RUFDaEIsY0FBYztFQUNkLHFEQUFxRDtFQUNyRCxrQkFBa0I7QUFDcEI7O0FBRUE7RUFDRSxhQUFhO0FBQ2Y7O0FBRUE7RUFDRSxlQUFlO0VBQ2YsWUFBWTtFQUNaLFdBQVc7RUFDWCxNQUFNO0VBQ04sUUFBUTtFQUNSLFVBQVU7RUFDVix5QkFBeUI7RUFDekIsWUFBWTtBQUNkIiwiZmlsZSI6InNyYy9hcHAvYXBwLmNvbXBvbmVudC5jc3MiLCJzb3VyY2VzQ29udGVudCI6WyJAZm9udC1mYWNlIHtcbiAgZm9udC1mYW1pbHk6ICdPcGVuU2Fucyc7XG4gIHNyYzogdXJsKFwiYXNzZXRzL2ZvbnRzL09wZW5fU2Fucy9PcGVuU2Fucy1SZWd1bGFyLnR0ZlwiKTtcbn1cblxuLmV4YW1wbGUtZmlsbC1yZW1haW5pbmctc3BhY2VcbntcbiAgZmxleDogMSAxIGF1dG87XG59XG5cbjo6bmctZGVlcCBzbmFjay1iYXItY29udGFpbmVyLnN1Y2Nlc3Mtc25hY2tiYXJ7XG4gIGJhY2tncm91bmQ6IGRhcmtncmVlbjtcbn1cblxuOjpuZy1kZWVwIHNuYWNrLWJhci1jb250YWluZXIuZXJyb3Itc25hY2tiYXJ7XG4gIGJhY2tncm91bmQ6IGRhcmtyZWQ7XG59XG5cbi5oaWRkZW5idXR0b257XG4gIGRpc3BsYXk6IG5vbmU7XG59XG5cbi5hcHB0b29sYmFye1xuICB3aWR0aDogNjVweDtcbiAgcG9zaXRpb246IGZpeGVkO1xuICByaWdodDogMDtcbiAgdG9wOiAwO1xuICB6LWluZGV4OiAxMDtcbn1cblxuLmFwcHRvb2xiYXIgbWF0LWljb257XG4gIGZvbnQtc2l6ZTogMzVweDtcbiAgbWFyZ2luOiA1cHggMCAwIC0xMXB4O1xuICBjb2xvcjojZmZmZmZmO1xufVxuXG4uYXBwdG9vbGJhciBidXR0b257XG4gIGZsb2F0OnJpZ2h0O1xuICBib3JkZXI6IG5vbmU7XG4gIG91dGxpbmU6IG5vbmU7XG4gIGhlaWdodDogNTBweDtcbiAgd2lkdGg6IDUwcHg7XG4gIGJhY2tncm91bmQtY29sb3I6ICM0OTQ5NDk7XG4gIGJhY2tncm91bmQtaW1hZ2U6IHVybChcImFzc2V0cy9pY29ucy9tZW51LnN2Z1wiKTtcbiAgYmFja2dyb3VuZC1wb3NpdGlvbjogY2VudGVyO1xuICBiYWNrZ3JvdW5kLXNpemU6IDM1cHg7XG4gIGJhY2tncm91bmQtcmVwZWF0OiBuby1yZXBlYXQ7XG4gIG1hcmdpbjogMjBweCAyMHB4IDBweCAwcHg7XG59XG5cbiNyZWRpcmVjdFRpbWVsaW5lTG9uZyxcbiNyZWRpcmVjdFRpbWVsaW5lLFxuI3JlZGlyZWN0U3RhcnR7XG4gIGZsb2F0OmxlZnQ7XG4gIGJvcmRlcjogbm9uZTtcbiAgb3V0bGluZTogbm9uZTtcbiAgaGVpZ2h0OiA1MHB4O1xuICB3aWR0aDogNTBweDtcbiAgYmFja2dyb3VuZC1jb2xvcjogIzQ5NDk0OTtcbiAgbWFyZ2luOiAyMHB4IDIwcHggMHB4IDIwcHg7XG4gIGJhY2tncm91bmQtaW1hZ2U6IHVybChcImFzc2V0cy9pY29ucy9iYWNrLnN2Z1wiKTtcbiAgYmFja2dyb3VuZC1wb3NpdGlvbjogY2VudGVyO1xuICBiYWNrZ3JvdW5kLXNpemU6IDUwcHg7XG59XG5cbiNyZWRpcmVjdFRpbWVsaW5lTG9uZ3tcbiAgd2lkdGg6IDEwMHB4O1xuICBiYWNrZ3JvdW5kLWNvbG9yOiB0cmFuc3BhcmVudDtcbiAgYmFja2dyb3VuZC1wb3NpdGlvbjogMTAlO1xuICBiYWNrZ3JvdW5kLXJlcGVhdDogbm8tcmVwZWF0O1xufVxuXG4ubWVudURpdntcbiAgcG9zaXRpb246IGZpeGVkO1xuICBoZWlnaHQ6IDEwMCU7XG4gIHdpZHRoOiA2NSU7XG4gIHRvcDogMDtcbiAgcmlnaHQ6IDA7XG4gIHotaW5kZXg6IDk7XG4gIGJhY2tncm91bmQtY29sb3I6ICM0OTQ5NDk7IFxufVxuXG4ubWVudURpdiB1bHtcbiAgbGlzdC1zdHlsZTogbm9uZTtcbiAgY29sb3I6ICNmZmZmZmY7XG4gIGZvbnQtZmFtaWx5OiAnT3BlblNhbnMnLCBIZWx2ZXRpY2EsIEFyaWFsLCBTYW5zLVNlcmlmO1xuICBtYXJnaW46IDEwMHB4IGF1dG87XG59XG5cbi5tZW51RGl2IHVsIGxpe1xuICBtYXJnaW46IDIwJSAwO1xufVxuXG4uZGlzbWlzc01lbnVEaXZ7XG4gIHBvc2l0aW9uOiBmaXhlZDtcbiAgaGVpZ2h0OiAxMDAlO1xuICB3aWR0aDogMTAwJTtcbiAgdG9wOiAwO1xuICByaWdodDogMDtcbiAgei1pbmRleDogODtcbiAgYmFja2dyb3VuZC1jb2xvcjogIzMzMzMzMztcbiAgb3BhY2l0eTogMC41O1xufVxuIl19 */"

/***/ }),

/***/ "./src/app/app.component.html":
/*!************************************!*\
  !*** ./src/app/app.component.html ***!
  \************************************/
/*! no static exports found */
/***/ (function(module, exports) {

module.exports = "<button id=\"redirectTimeline\" (click)=\"redirectToTimeline()\" *ngIf=\"router.url === '/registerRealUser'\"></button>\n<button id=\"redirectTimelineLong\" (click)=\"redirectToTimeline()\" *ngIf=\"router.url === '/passive' || router.url === '/interactive' || router.url === '/tableat' || router.url === '/tableNotifyAt'\"></button>\n<button id=\"redirectStart\" (click)=\"redirectToStart()\" *ngIf=\"router.url === '/register' || router.url === '/login' || router.url === '/testscroll' || router.url === '/changeLanguageStart'\"></button>\n\n<div class=\"apptoolbar\">\n  <button class=\"menubutton\" (click)=\"openMenu()\"  *ngIf=\"router.url === '/mainview'\"></button>\n</div>\n\n<div class=\"dismissMenuDiv\" *ngIf=\"menuOpen\" (click)=\"dismissMenu()\"></div>\n<div class=\"menuDiv\" *ngIf=\"menuOpen\">\n  <ul>\n    <li *ngIf=\"guest == 0\" (click)=\"userCredentials()\">{{ 'app.menuSettings' | translate }}</li>\n    <li *ngIf=\"guest == 1\" (click)=\"registerRealuserRouting()\">{{ 'app.menuSignup' | translate }}</li>\n    <li (click)=\"openAboutView()\">{{ 'app.menuAbout' | translate }}</li>\n    <li *ngIf=\"guest == 1 && languageService.getCurrentLanguageAsString() === 'en'\" (click)=\"useLanguage('de')\">DEUTSCH</li>\n    <li *ngIf=\"guest == 1 && languageService.getCurrentLanguageAsString() === 'de'\" (click)=\"useLanguage('en')\">ENGLISH</li>\n    <!--<li (click)=\"openLegalView()\">LEGAL DETAILS</li>-->\n    <li (click)=\"logoutUser()\">{{ 'app.menuLogout' | translate }}</li>\n  </ul>\n</div>\n\n<router-outlet></router-outlet>\n\n<button id=\"ghostButton\" class=\"hiddenbutton\" (click)=\"openDialog()\">Ghost</button>\n<button id=\"ghostButtonWifi\" class=\"hiddenbutton\" (click)=\"openNativeSetting()\">GhostSetting</button>\n<button id=\"ghostButtonBluetooth\" class=\"hiddenbutton\" (click)=\"openNativeSetting()\">GhostSetting</button>\n<button id=\"logout\" class=\"hiddenbutton\" (click)=\"logoutRouting()\">GhostLogout</button>\n"

/***/ }),

/***/ "./src/app/app.component.ts":
/*!**********************************!*\
  !*** ./src/app/app.component.ts ***!
  \**********************************/
/*! exports provided: AppComponent */
/***/ (function(module, __webpack_exports__, __webpack_require__) {

"use strict";
__webpack_require__.r(__webpack_exports__);
/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, "AppComponent", function() { return AppComponent; });
/* harmony import */ var _angular_core__WEBPACK_IMPORTED_MODULE_0__ = __webpack_require__(/*! @angular/core */ "./node_modules/@angular/core/fesm5/core.js");
/* harmony import */ var _store_actions_UserActions__WEBPACK_IMPORTED_MODULE_1__ = __webpack_require__(/*! ./store/actions/UserActions */ "./src/app/store/actions/UserActions.ts");
/* harmony import */ var _store_actions_LocationActions__WEBPACK_IMPORTED_MODULE_2__ = __webpack_require__(/*! ./store/actions/LocationActions */ "./src/app/store/actions/LocationActions.ts");
/* harmony import */ var _store_actions_StatusActions__WEBPACK_IMPORTED_MODULE_3__ = __webpack_require__(/*! ./store/actions/StatusActions */ "./src/app/store/actions/StatusActions.ts");
/* harmony import */ var _services_native_native_communication_service__WEBPACK_IMPORTED_MODULE_4__ = __webpack_require__(/*! ./services/native/native-communication.service */ "./src/app/services/native/native-communication.service.ts");
/* harmony import */ var _services_native_native_response_service__WEBPACK_IMPORTED_MODULE_5__ = __webpack_require__(/*! ./services/native/native-response.service */ "./src/app/services/native/native-response.service.ts");
/* harmony import */ var _WindowRef__WEBPACK_IMPORTED_MODULE_6__ = __webpack_require__(/*! ./WindowRef */ "./src/app/WindowRef.ts");
/* harmony import */ var _angular_material__WEBPACK_IMPORTED_MODULE_7__ = __webpack_require__(/*! @angular/material */ "./node_modules/@angular/material/esm5/material.es5.js");
/* harmony import */ var _components_alert_dialog_alert_dialog_component__WEBPACK_IMPORTED_MODULE_8__ = __webpack_require__(/*! ./components/alert-dialog/alert-dialog.component */ "./src/app/components/alert-dialog/alert-dialog.component.ts");
/* harmony import */ var _components_native_setting_dialog_native_setting_dialog_component__WEBPACK_IMPORTED_MODULE_9__ = __webpack_require__(/*! ./components/native-setting-dialog/native-setting-dialog.component */ "./src/app/components/native-setting-dialog/native-setting-dialog.component.ts");
/* harmony import */ var _services_alert_service__WEBPACK_IMPORTED_MODULE_10__ = __webpack_require__(/*! ./services/alert.service */ "./src/app/services/alert.service.ts");
/* harmony import */ var _angular_router__WEBPACK_IMPORTED_MODULE_11__ = __webpack_require__(/*! @angular/router */ "./node_modules/@angular/router/fesm5/router.js");
/* harmony import */ var _services_location_service__WEBPACK_IMPORTED_MODULE_12__ = __webpack_require__(/*! ./services/location.service */ "./src/app/services/location.service.ts");
/* harmony import */ var _services_transmission_service__WEBPACK_IMPORTED_MODULE_13__ = __webpack_require__(/*! ./services/transmission.service */ "./src/app/services/transmission.service.ts");
/* harmony import */ var _services_language_service__WEBPACK_IMPORTED_MODULE_14__ = __webpack_require__(/*! ./services/language.service */ "./src/app/services/language.service.ts");
/* harmony import */ var _config_LanguageTypes__WEBPACK_IMPORTED_MODULE_15__ = __webpack_require__(/*! ./config/LanguageTypes */ "./src/app/config/LanguageTypes.ts");
/* harmony import */ var _ngx_translate_core__WEBPACK_IMPORTED_MODULE_16__ = __webpack_require__(/*! @ngx-translate/core */ "./node_modules/@ngx-translate/core/fesm5/ngx-translate-core.js");
/* harmony import */ var _services_utility_service__WEBPACK_IMPORTED_MODULE_17__ = __webpack_require__(/*! ./services/utility.service */ "./src/app/services/utility.service.ts");
var __decorate = (undefined && undefined.__decorate) || function (decorators, target, key, desc) {
    var c = arguments.length, r = c < 3 ? target : desc === null ? desc = Object.getOwnPropertyDescriptor(target, key) : desc, d;
    if (typeof Reflect === "object" && typeof Reflect.decorate === "function") r = Reflect.decorate(decorators, target, key, desc);
    else for (var i = decorators.length - 1; i >= 0; i--) if (d = decorators[i]) r = (c < 3 ? d(r) : c > 3 ? d(target, key, r) : d(target, key)) || r;
    return c > 3 && r && Object.defineProperty(target, key, r), r;
};
var __metadata = (undefined && undefined.__metadata) || function (k, v) {
    if (typeof Reflect === "object" && typeof Reflect.metadata === "function") return Reflect.metadata(k, v);
};
var __param = (undefined && undefined.__param) || function (paramIndex, decorator) {
    return function (target, key) { decorator(target, key, paramIndex); }
};



















var AppComponent = /** @class */ (function () {
    function AppComponent(appStore, statusActions, userActions, locationActions, locationService, nativeCommunicationService, nativeResponseService, winRef, dialog, alertService, transmissionService, snackBar, router, translate, languageService, utilityService) {
        var _this = this;
        this.appStore = appStore;
        this.statusActions = statusActions;
        this.userActions = userActions;
        this.locationActions = locationActions;
        this.locationService = locationService;
        this.nativeCommunicationService = nativeCommunicationService;
        this.nativeResponseService = nativeResponseService;
        this.winRef = winRef;
        this.dialog = dialog;
        this.alertService = alertService;
        this.transmissionService = transmissionService;
        this.snackBar = snackBar;
        this.router = router;
        this.translate = translate;
        this.languageService = languageService;
        this.utilityService = utilityService;
        this.title = 'app';
        this.menuOpen = false;
        translate.setDefaultLang('en');
        this.language = 'en';
        this._unsubscribe = this.appStore.subscribe(function () {
            var state = _this.appStore.getState();
            var token = state.token;
            if (state.user !== undefined) {
                _this.guest = state.user.isGuest;
                // console.log('Guest '+state.user.isGuest);
            }
            var errorMessage = state.errorMessage;
            var successMessage = state.successMessage;
            if (_this.currentToken !== token && token !== undefined) {
                _this.nativeCommunicationService.sendToNative(token, 'saveToken');
                _this.currentToken = token;
            }
            if (errorMessage && errorMessage.code !== _this.currentError) {
                var config = new _angular_material__WEBPACK_IMPORTED_MODULE_7__["MatSnackBarConfig"]();
                config.duration = 3000;
                config.panelClass = ['error-snackbar'];
                _this.snackBar.open(errorMessage.message, 'OK', config);
                _this.currentError = errorMessage.code;
            }
            if (successMessage && successMessage.code !== _this.currentSuccess) {
                var config = new _angular_material__WEBPACK_IMPORTED_MODULE_7__["MatSnackBarConfig"]();
                config.duration = 3000;
                config.panelClass = ['success-snackbar'];
                _this.snackBar.open(successMessage.message, 'OK', config);
                _this.currentSuccess = successMessage.code;
            }
        });
        this.subscriptionLocationid = this.alertService.getMessageLocationid().subscribe(function (message) {
            _this.registerLocationmessage = message;
        });
        this.subscriptionNativeSettingCheckResult = this.alertService.getMessageNativeSettingCheck().subscribe(function (message) {
            _this.nativeSettingType = message.nativeSettingType;
        });
        this.subscriptionNativeBackbuttonTimelineResult = this.alertService.getMessageNativeBackbuttonTimeline().subscribe(function () {
            _this.redirectToTimeline();
        });
        this.subscriptionNativeBackbuttonStartResult = this.alertService.getMessageNativeBackbuttonStart().subscribe(function () {
            _this.redirectToStart();
        });
    }
    AppComponent.prototype.ngOnInit = function () {
        this.appStore.dispatch(this.locationActions.changeAtExhibitParentId(0));
        this.appStore.dispatch(this.locationActions.changeOnExhibit(false));
        this.requestCheckedPlatform();
        this.getTokenForAutoLogin();
    };
    AppComponent.prototype.openDialog = function () {
        var _this = this;
        var dialogConfig = new _angular_material__WEBPACK_IMPORTED_MODULE_7__["MatDialogConfig"]();
        dialogConfig.disableClose = true;
        dialogConfig.autoFocus = false;
        var dialogRef = this.dialog.open(_components_alert_dialog_alert_dialog_component__WEBPACK_IMPORTED_MODULE_8__["AlertDialogComponent"], { data: { number: this.registerLocationmessage.location },
            disableClose: true,
            autoFocus: false
        });
        this.subscriptionBack = dialogRef.afterClosed().subscribe(function (result) {
            var data = { result: result, location: _this.registerLocationmessage.location, resStatus: _this.registerLocationmessage.resStatus };
            _this.alertService.sendMessageResponse(data);
        });
    };
    AppComponent.prototype.openNativeSetting = function () {
        var _this = this;
        var dialogConfig = new _angular_material__WEBPACK_IMPORTED_MODULE_7__["MatDialogConfig"]();
        // console.log(this.nativeSettingType);
        dialogConfig.disableClose = true;
        dialogConfig.autoFocus = false;
        if (this.nativeSettingType === 'wifi') {
            console.log('openNativeSetting ' + this.nativeSettingType);
            var platformSpecificConfirm = void 0;
            if (this.nativeCommunicationService.checkPlatform() === 'Android') {
                platformSpecificConfirm = 'To the Settings';
            }
            else if (this.nativeCommunicationService.checkPlatform() === 'IOS') {
                platformSpecificConfirm = 'To the Settings';
            }
            else {
                platformSpecificConfirm = 'To the Settings';
            }
            var dialogRef = this.dialog.open(_components_native_setting_dialog_native_setting_dialog_component__WEBPACK_IMPORTED_MODULE_9__["NativeSettingDialogComponent"], { data: { settingtype: this.nativeSettingType, confirmDialogText: platformSpecificConfirm },
                disableClose: true,
                autoFocus: false
            });
            this.subscriptionBack = dialogRef.afterClosed().subscribe(function (result) {
                var data = { result: result };
                _this.alertService.sendMessageNativeWifiSettingCheckResult(data);
            });
        }
        else if (this.nativeSettingType === 'Bluetooth') {
            var platformSpecificConfirm = void 0;
            if (this.nativeCommunicationService.checkPlatform() === 'Android') {
                platformSpecificConfirm = 'Activate Bluetooth';
            }
            else if (this.nativeCommunicationService.checkPlatform() === 'IOS') {
                platformSpecificConfirm = 'To the Settings';
            }
            var dialogRef = this.dialog.open(_components_native_setting_dialog_native_setting_dialog_component__WEBPACK_IMPORTED_MODULE_9__["NativeSettingDialogComponent"], { data: { settingtype: this.nativeSettingType,
                    confirmDialogText: platformSpecificConfirm }, disableClose: true, autoFocus: false });
            this.subscriptionBack = dialogRef.afterClosed().subscribe(function (result) {
                var data = { result: result };
                _this.alertService.sendMessageNativeBluetoothSettingCheckResult(data);
            });
        }
    };
    AppComponent.prototype.ngOnDestroy = function () {
        this._unsubscribe();
        this.subscription.unsubscribe();
    };
    AppComponent.prototype.requestCheckedPlatform = function () {
        this.appStore.dispatch(this.userActions.changePlatform(this.nativeCommunicationService.checkPlatform()));
    };
    AppComponent.prototype.getTokenForAutoLogin = function () {
        var state = this.appStore.getState();
        var platform = state.platform;
        this.nativeCommunicationService.sendToNative('getToken', 'getToken');
        if (platform !== 'IOS' && platform !== 'Android') {
            var data = JSON.parse(localStorage.getItem('token'));
            // console.log('LOCAL STORAGE: ' + data.token);
            if (data) {
                this.nativeResponseService.autoLogin(data);
            }
        }
    };
    AppComponent.prototype.logoutUser = function () {
        this.dismissMenu();
        this.transmissionService.logout();
    };
    AppComponent.prototype.redirectToTimeline = function () {
        // const state = this.appStore.getState();
        // const id = state.currentLocation.id;
        // const data = {location: id};
        var _this = this;
        this.locationService.setToStartPoint();
        this.router.navigate(['/mainview']).then(function () {
            // this.alertService.setMessageLocationBackid('1007');
            // this.utilityService.triggerJumpTimeline(data);
            _this.nativeCommunicationService.sendToNative('success', 'redirectToTimeline');
        });
    };
    AppComponent.prototype.redirectToStart = function () {
        var _this = this;
        this.locationService.setToStartPoint();
        this.router.navigate(['']).then(function () {
            _this.nativeCommunicationService.sendToNative('redirectToStart', 'print');
        });
    };
    AppComponent.prototype.registerRealuserRouting = function () {
        var _this = this;
        this.dismissMenu();
        this.router.navigate(['registerRealUser']).then(function () {
            _this.nativeCommunicationService.sendToNative('Register as real user', 'print');
        });
    };
    AppComponent.prototype.logoutRouting = function () {
        var _this = this;
        this.dismissMenu();
        this.router.navigate(['']).then(function () {
            _this.nativeCommunicationService.sendToNative('User Logged out', 'print');
        });
    };
    AppComponent.prototype.useLanguage = function (language) {
        this.translate.use(language);
        if (language === 'de') {
            this.languageService.transmitChangeUserLanguage(_config_LanguageTypes__WEBPACK_IMPORTED_MODULE_15__["DE"]);
        }
        else {
            this.languageService.transmitChangeUserLanguage(_config_LanguageTypes__WEBPACK_IMPORTED_MODULE_15__["ENG"]);
        }
        this.language = language;
    };
    AppComponent.prototype.userCredentials = function () {
        var _this = this;
        this.dismissMenu();
        this.router.navigate(['changecred']).then(function () {
            _this.nativeCommunicationService.sendToNative('User Credentials', 'print');
        });
    };
    AppComponent.prototype.userCoA = function () {
        var _this = this;
        this.router.navigate(['wappen']).then(function () {
            _this.nativeCommunicationService.sendToNative('Coat of Arms', 'print');
        });
    };
    AppComponent.prototype.openAboutView = function () {
        var _this = this;
        this.dismissMenu();
        this.router.navigate(['about']).then(function () {
            _this.nativeCommunicationService.sendToNative('About', 'print');
        });
    };
    AppComponent.prototype.openLegalView = function () {
        var _this = this;
        this.dismissMenu();
        this.router.navigate(['legal']).then(function () {
            _this.nativeCommunicationService.sendToNative('Legal', 'print');
        });
    };
    AppComponent.prototype.dismissMenu = function () {
        this.menuOpen = false;
    };
    AppComponent.prototype.openMenu = function () {
        this.menuOpen ? this.menuOpen = false : this.menuOpen = true;
    };
    AppComponent = __decorate([
        Object(_angular_core__WEBPACK_IMPORTED_MODULE_0__["Component"])({
            selector: 'app-root',
            template: __webpack_require__(/*! ./app.component.html */ "./src/app/app.component.html"),
            styles: [__webpack_require__(/*! ./app.component.css */ "./src/app/app.component.css")]
        }),
        Object(_angular_core__WEBPACK_IMPORTED_MODULE_0__["Injectable"])(),
        __param(0, Object(_angular_core__WEBPACK_IMPORTED_MODULE_0__["Inject"])('AppStore')),
        __metadata("design:paramtypes", [Object, _store_actions_StatusActions__WEBPACK_IMPORTED_MODULE_3__["StatusActions"],
            _store_actions_UserActions__WEBPACK_IMPORTED_MODULE_1__["UserActions"],
            _store_actions_LocationActions__WEBPACK_IMPORTED_MODULE_2__["LocationActions"],
            _services_location_service__WEBPACK_IMPORTED_MODULE_12__["LocationService"],
            _services_native_native_communication_service__WEBPACK_IMPORTED_MODULE_4__["NativeCommunicationService"],
            _services_native_native_response_service__WEBPACK_IMPORTED_MODULE_5__["NativeResponseService"],
            _WindowRef__WEBPACK_IMPORTED_MODULE_6__["WindowRef"],
            _angular_material__WEBPACK_IMPORTED_MODULE_7__["MatDialog"],
            _services_alert_service__WEBPACK_IMPORTED_MODULE_10__["AlertService"],
            _services_transmission_service__WEBPACK_IMPORTED_MODULE_13__["TransmissionService"],
            _angular_material__WEBPACK_IMPORTED_MODULE_7__["MatSnackBar"],
            _angular_router__WEBPACK_IMPORTED_MODULE_11__["Router"],
            _ngx_translate_core__WEBPACK_IMPORTED_MODULE_16__["TranslateService"],
            _services_language_service__WEBPACK_IMPORTED_MODULE_14__["LanguageService"],
            _services_utility_service__WEBPACK_IMPORTED_MODULE_17__["UtilityService"]])
    ], AppComponent);
    return AppComponent;
}());



/***/ }),

/***/ "./src/app/app.module.ts":
/*!*******************************!*\
  !*** ./src/app/app.module.ts ***!
  \*******************************/
/*! exports provided: appStore, AppModule, HttpLoaderFactory */
/***/ (function(module, __webpack_exports__, __webpack_require__) {

"use strict";
__webpack_require__.r(__webpack_exports__);
/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, "appStore", function() { return appStore; });
/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, "AppModule", function() { return AppModule; });
/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, "HttpLoaderFactory", function() { return HttpLoaderFactory; });
/* harmony import */ var _angular_platform_browser__WEBPACK_IMPORTED_MODULE_0__ = __webpack_require__(/*! @angular/platform-browser */ "./node_modules/@angular/platform-browser/fesm5/platform-browser.js");
/* harmony import */ var _angular_core__WEBPACK_IMPORTED_MODULE_1__ = __webpack_require__(/*! @angular/core */ "./node_modules/@angular/core/fesm5/core.js");
/* harmony import */ var _angular_platform_browser_animations__WEBPACK_IMPORTED_MODULE_2__ = __webpack_require__(/*! @angular/platform-browser/animations */ "./node_modules/@angular/platform-browser/fesm5/animations.js");
/* harmony import */ var _angular_material__WEBPACK_IMPORTED_MODULE_3__ = __webpack_require__(/*! @angular/material */ "./node_modules/@angular/material/esm5/material.es5.js");
/* harmony import */ var ngx_socket_io__WEBPACK_IMPORTED_MODULE_4__ = __webpack_require__(/*! ngx-socket-io */ "./node_modules/ngx-socket-io/index.js");
/* harmony import */ var _services_god_god_socket_service__WEBPACK_IMPORTED_MODULE_5__ = __webpack_require__(/*! ./services/god/god-socket.service */ "./src/app/services/god/god-socket.service.ts");
/* harmony import */ var _services_exhibit_exhibit_socket_service__WEBPACK_IMPORTED_MODULE_6__ = __webpack_require__(/*! ./services/exhibit/exhibit-socket.service */ "./src/app/services/exhibit/exhibit-socket.service.ts");
/* harmony import */ var _services_utility_service__WEBPACK_IMPORTED_MODULE_7__ = __webpack_require__(/*! ./services/utility.service */ "./src/app/services/utility.service.ts");
/* harmony import */ var _services_native_native_response_service__WEBPACK_IMPORTED_MODULE_8__ = __webpack_require__(/*! ./services/native/native-response.service */ "./src/app/services/native/native-response.service.ts");
/* harmony import */ var _services_god_god_service__WEBPACK_IMPORTED_MODULE_9__ = __webpack_require__(/*! ./services/god/god.service */ "./src/app/services/god/god.service.ts");
/* harmony import */ var _services_exhibit_exhibit_service__WEBPACK_IMPORTED_MODULE_10__ = __webpack_require__(/*! ./services/exhibit/exhibit.service */ "./src/app/services/exhibit/exhibit.service.ts");
/* harmony import */ var _services_native_native_communication_service__WEBPACK_IMPORTED_MODULE_11__ = __webpack_require__(/*! ./services/native/native-communication.service */ "./src/app/services/native/native-communication.service.ts");
/* harmony import */ var _services_alert_service__WEBPACK_IMPORTED_MODULE_12__ = __webpack_require__(/*! ./services/alert.service */ "./src/app/services/alert.service.ts");
/* harmony import */ var _services_location_service__WEBPACK_IMPORTED_MODULE_13__ = __webpack_require__(/*! ./services/location.service */ "./src/app/services/location.service.ts");
/* harmony import */ var _services_transmission_service__WEBPACK_IMPORTED_MODULE_14__ = __webpack_require__(/*! ./services/transmission.service */ "./src/app/services/transmission.service.ts");
/* harmony import */ var _app_routing_module__WEBPACK_IMPORTED_MODULE_15__ = __webpack_require__(/*! ./app-routing.module */ "./src/app/app-routing.module.ts");
/* harmony import */ var _angular_router__WEBPACK_IMPORTED_MODULE_16__ = __webpack_require__(/*! @angular/router */ "./node_modules/@angular/router/fesm5/router.js");
/* harmony import */ var _angular_forms__WEBPACK_IMPORTED_MODULE_17__ = __webpack_require__(/*! @angular/forms */ "./node_modules/@angular/forms/fesm5/forms.js");
/* harmony import */ var _WindowRef__WEBPACK_IMPORTED_MODULE_18__ = __webpack_require__(/*! ./WindowRef */ "./src/app/WindowRef.ts");
/* harmony import */ var _app_component__WEBPACK_IMPORTED_MODULE_19__ = __webpack_require__(/*! ./app.component */ "./src/app/app.component.ts");
/* harmony import */ var _components_page_not_found_page_not_found_component__WEBPACK_IMPORTED_MODULE_20__ = __webpack_require__(/*! ./components/page-not-found/page-not-found.component */ "./src/app/components/page-not-found/page-not-found.component.ts");
/* harmony import */ var _components_register_register_component__WEBPACK_IMPORTED_MODULE_21__ = __webpack_require__(/*! ./components/register/register.component */ "./src/app/components/register/register.component.ts");
/* harmony import */ var _components_login_login_component__WEBPACK_IMPORTED_MODULE_22__ = __webpack_require__(/*! ./components/login/login.component */ "./src/app/components/login/login.component.ts");
/* harmony import */ var _components_main_view_main_view_component__WEBPACK_IMPORTED_MODULE_23__ = __webpack_require__(/*! ./components/main-view/main-view.component */ "./src/app/components/main-view/main-view.component.ts");
/* harmony import */ var _components_content_table_at_content_table_at_component__WEBPACK_IMPORTED_MODULE_24__ = __webpack_require__(/*! ./components/content-table-at/content-table-at.component */ "./src/app/components/content-table-at/content-table-at.component.ts");
/* harmony import */ var _components_content_table_on_content_table_on_component__WEBPACK_IMPORTED_MODULE_25__ = __webpack_require__(/*! ./components/content-table-on/content-table-on.component */ "./src/app/components/content-table-on/content-table-on.component.ts");
/* harmony import */ var _components_content_passive_content_passive_component__WEBPACK_IMPORTED_MODULE_26__ = __webpack_require__(/*! ./components/content-passive/content-passive.component */ "./src/app/components/content-passive/content-passive.component.ts");
/* harmony import */ var _components_content_interactive_content_interactive_component__WEBPACK_IMPORTED_MODULE_27__ = __webpack_require__(/*! ./components/content-interactive/content-interactive.component */ "./src/app/components/content-interactive/content-interactive.component.ts");
/* harmony import */ var _components_alert_dialog_alert_dialog_component__WEBPACK_IMPORTED_MODULE_28__ = __webpack_require__(/*! ./components/alert-dialog/alert-dialog.component */ "./src/app/components/alert-dialog/alert-dialog.component.ts");
/* harmony import */ var _components_native_setting_dialog_native_setting_dialog_component__WEBPACK_IMPORTED_MODULE_29__ = __webpack_require__(/*! ./components/native-setting-dialog/native-setting-dialog.component */ "./src/app/components/native-setting-dialog/native-setting-dialog.component.ts");
/* harmony import */ var _components_start_view_start_view_component__WEBPACK_IMPORTED_MODULE_30__ = __webpack_require__(/*! ./components/start-view/start-view.component */ "./src/app/components/start-view/start-view.component.ts");
/* harmony import */ var _components_change_credentials_change_credentials_component__WEBPACK_IMPORTED_MODULE_31__ = __webpack_require__(/*! ./components/change-credentials/change-credentials.component */ "./src/app/components/change-credentials/change-credentials.component.ts");
/* harmony import */ var _components_delete_dialog_delete_dialog_component__WEBPACK_IMPORTED_MODULE_32__ = __webpack_require__(/*! ./components/delete-dialog/delete-dialog.component */ "./src/app/components/delete-dialog/delete-dialog.component.ts");
/* harmony import */ var _components_register_realuser_register_realuser_component__WEBPACK_IMPORTED_MODULE_33__ = __webpack_require__(/*! ./components/register-realuser/register-realuser.component */ "./src/app/components/register-realuser/register-realuser.component.ts");
/* harmony import */ var _components_language_start_language_start_component__WEBPACK_IMPORTED_MODULE_34__ = __webpack_require__(/*! ./components/language-start/language-start.component */ "./src/app/components/language-start/language-start.component.ts");
/* harmony import */ var redux__WEBPACK_IMPORTED_MODULE_35__ = __webpack_require__(/*! redux */ "./node_modules/redux/es/redux.js");
/* harmony import */ var _store_reducers_rootReducer__WEBPACK_IMPORTED_MODULE_36__ = __webpack_require__(/*! ./store/reducers/rootReducer */ "./src/app/store/reducers/rootReducer.ts");
/* harmony import */ var _store_actions_LocationActions__WEBPACK_IMPORTED_MODULE_37__ = __webpack_require__(/*! ./store/actions/LocationActions */ "./src/app/store/actions/LocationActions.ts");
/* harmony import */ var _store_actions_UserActions__WEBPACK_IMPORTED_MODULE_38__ = __webpack_require__(/*! ./store/actions/UserActions */ "./src/app/store/actions/UserActions.ts");
/* harmony import */ var _store_actions_StatusActions__WEBPACK_IMPORTED_MODULE_39__ = __webpack_require__(/*! ./store/actions/StatusActions */ "./src/app/store/actions/StatusActions.ts");
/* harmony import */ var redux_logger__WEBPACK_IMPORTED_MODULE_40__ = __webpack_require__(/*! redux-logger */ "./node_modules/redux-logger/dist/redux-logger.js");
/* harmony import */ var redux_logger__WEBPACK_IMPORTED_MODULE_40___default = /*#__PURE__*/__webpack_require__.n(redux_logger__WEBPACK_IMPORTED_MODULE_40__);
/* harmony import */ var _ngx_translate_core__WEBPACK_IMPORTED_MODULE_41__ = __webpack_require__(/*! @ngx-translate/core */ "./node_modules/@ngx-translate/core/fesm5/ngx-translate-core.js");
/* harmony import */ var _ngx_translate_http_loader__WEBPACK_IMPORTED_MODULE_42__ = __webpack_require__(/*! @ngx-translate/http-loader */ "./node_modules/@ngx-translate/http-loader/fesm5/ngx-translate-http-loader.js");
/* harmony import */ var _angular_common_http__WEBPACK_IMPORTED_MODULE_43__ = __webpack_require__(/*! @angular/common/http */ "./node_modules/@angular/common/fesm5/http.js");
/* harmony import */ var _components_wappen_wappen_component__WEBPACK_IMPORTED_MODULE_44__ = __webpack_require__(/*! ./components/wappen/wappen.component */ "./src/app/components/wappen/wappen.component.ts");
/* harmony import */ var _components_about_about_component__WEBPACK_IMPORTED_MODULE_45__ = __webpack_require__(/*! ./components/about/about.component */ "./src/app/components/about/about.component.ts");
/* harmony import */ var _components_legal_legal_component__WEBPACK_IMPORTED_MODULE_46__ = __webpack_require__(/*! ./components/legal/legal.component */ "./src/app/components/legal/legal.component.ts");
/* harmony import */ var _components_education_quiz_education_quiz_component__WEBPACK_IMPORTED_MODULE_47__ = __webpack_require__(/*! ./components/education-quiz/education-quiz.component */ "./src/app/components/education-quiz/education-quiz.component.ts");
/* harmony import */ var _components_content_table_notify_at_content_table_notify_at_component__WEBPACK_IMPORTED_MODULE_48__ = __webpack_require__(/*! ./components/content-table-notify-at/content-table-notify-at.component */ "./src/app/components/content-table-notify-at/content-table-notify-at.component.ts");
/* harmony import */ var _components_content_table_notify_on_content_table_notify_on_component__WEBPACK_IMPORTED_MODULE_49__ = __webpack_require__(/*! ./components/content-table-notify-on/content-table-notify-on.component */ "./src/app/components/content-table-notify-on/content-table-notify-on.component.ts");
var __decorate = (undefined && undefined.__decorate) || function (decorators, target, key, desc) {
    var c = arguments.length, r = c < 3 ? target : desc === null ? desc = Object.getOwnPropertyDescriptor(target, key) : desc, d;
    if (typeof Reflect === "object" && typeof Reflect.decorate === "function") r = Reflect.decorate(decorators, target, key, desc);
    else for (var i = decorators.length - 1; i >= 0; i--) if (d = decorators[i]) r = (c < 3 ? d(r) : c > 3 ? d(target, key, r) : d(target, key)) || r;
    return c > 3 && r && Object.defineProperty(target, key, r), r;
};
var __metadata = (undefined && undefined.__metadata) || function (k, v) {
    if (typeof Reflect === "object" && typeof Reflect.metadata === "function") return Reflect.metadata(k, v);
};



// Material Design

// Services











// Routing


// Forms



// Components
















// Redux






// import ngx-translate and the http loader









var appStore = Object(redux__WEBPACK_IMPORTED_MODULE_35__["createStore"])(_store_reducers_rootReducer__WEBPACK_IMPORTED_MODULE_36__["rootReducer"], Object(redux__WEBPACK_IMPORTED_MODULE_35__["applyMiddleware"])(redux_logger__WEBPACK_IMPORTED_MODULE_40___default.a));
var AppModule = /** @class */ (function () {
    function AppModule(winRef, zone, nativeResponseService, nativeCommunicationService, router) {
        var _this = this;
        this.winRef = winRef;
        this.zone = zone;
        this.nativeResponseService = nativeResponseService;
        this.nativeCommunicationService = nativeCommunicationService;
        this.router = router;
        winRef.nativeWindow.angularComponentRef = {
            zone: this.zone,
            componentFn: function (message, value) { return _this.callFromOutside(message, value); },
            component: this
        };
    }
    AppModule.prototype.callFromOutside = function (message, value) {
        // console.log('calledFromOutside ' + message);
        this.nativeCommunicationService.sendToNative('calledFromOutside ' + message, 'print');
        switch (message) {
            case 'update_location': {
                this.nativeCommunicationService.sendToNative('Received Location Register ' + value.minor, 'print');
                this.nativeResponseService.timelineUpdate(value);
                break;
            }
            case 'send_device_infos': {
                this.nativeResponseService.odRegister(value);
                break;
            }
            case 'logout_success': {
                this.nativeResponseService.logoutSuccess();
                break;
            }
            case 'send_token': {
                this.nativeResponseService.autoLogin(value);
                break;
            }
            case 'send_wifi_ssid': {
                this.nativeResponseService.checkWifi(value);
                break;
            }
            case 'send_bluetooth_check': {
                this.nativeResponseService.checkBluetooth();
                break;
            }
            case 'back_button_pressed': {
                if (this.router.url === '/register' || this.router.url === '/login' || this.router.url === '/changeLanguageStart' ||
                    this.router.url === '/login') {
                    // this.nativeResponseService.redirectToStart();
                    var elm = document.getElementById('redirectStart');
                    elm.click();
                }
                else {
                    // this.nativeResponseService.redirectToTimeline();
                    var elm = document.getElementById('redirectTimeline');
                    elm.click();
                }
                break;
            }
            default: {
                break;
            }
        }
    };
    AppModule = __decorate([
        Object(_angular_core__WEBPACK_IMPORTED_MODULE_1__["NgModule"])({
            declarations: [
                _app_component__WEBPACK_IMPORTED_MODULE_19__["AppComponent"],
                _components_page_not_found_page_not_found_component__WEBPACK_IMPORTED_MODULE_20__["PageNotFoundComponent"],
                _components_register_register_component__WEBPACK_IMPORTED_MODULE_21__["RegisterComponent"],
                _components_main_view_main_view_component__WEBPACK_IMPORTED_MODULE_23__["MainViewComponent"],
                _components_content_table_at_content_table_at_component__WEBPACK_IMPORTED_MODULE_24__["ContentTableAtComponent"],
                _components_content_table_on_content_table_on_component__WEBPACK_IMPORTED_MODULE_25__["ContentTableOnComponent"],
                _components_content_passive_content_passive_component__WEBPACK_IMPORTED_MODULE_26__["ContentPassiveComponent"],
                _components_content_interactive_content_interactive_component__WEBPACK_IMPORTED_MODULE_27__["ContentInteractiveComponent"],
                _components_alert_dialog_alert_dialog_component__WEBPACK_IMPORTED_MODULE_28__["AlertDialogComponent"],
                _components_native_setting_dialog_native_setting_dialog_component__WEBPACK_IMPORTED_MODULE_29__["NativeSettingDialogComponent"],
                _components_login_login_component__WEBPACK_IMPORTED_MODULE_22__["LoginComponent"],
                _components_start_view_start_view_component__WEBPACK_IMPORTED_MODULE_30__["StartViewComponent"],
                _components_change_credentials_change_credentials_component__WEBPACK_IMPORTED_MODULE_31__["ChangeCredentialsComponent"],
                _components_delete_dialog_delete_dialog_component__WEBPACK_IMPORTED_MODULE_32__["DeleteDialogComponent"],
                _components_change_credentials_change_credentials_component__WEBPACK_IMPORTED_MODULE_31__["ChangeCredentialsComponent"],
                _components_register_realuser_register_realuser_component__WEBPACK_IMPORTED_MODULE_33__["RegisterRealuserComponent"],
                _components_language_start_language_start_component__WEBPACK_IMPORTED_MODULE_34__["LanguageStartComponent"],
                _components_wappen_wappen_component__WEBPACK_IMPORTED_MODULE_44__["WappenComponent"],
                _components_about_about_component__WEBPACK_IMPORTED_MODULE_45__["AboutComponent"],
                _components_legal_legal_component__WEBPACK_IMPORTED_MODULE_46__["LegalComponent"],
                _components_education_quiz_education_quiz_component__WEBPACK_IMPORTED_MODULE_47__["EducationQuizComponent"],
                _components_content_table_notify_at_content_table_notify_at_component__WEBPACK_IMPORTED_MODULE_48__["ContentTableNotifyAtComponent"],
                _components_content_table_notify_on_content_table_notify_on_component__WEBPACK_IMPORTED_MODULE_49__["ContentTableNotifyOnComponent"]
            ],
            imports: [
                _angular_platform_browser__WEBPACK_IMPORTED_MODULE_0__["BrowserModule"],
                ngx_socket_io__WEBPACK_IMPORTED_MODULE_4__["SocketIoModule"],
                _angular_platform_browser_animations__WEBPACK_IMPORTED_MODULE_2__["BrowserAnimationsModule"],
                _angular_material__WEBPACK_IMPORTED_MODULE_3__["MatButtonModule"],
                _angular_material__WEBPACK_IMPORTED_MODULE_3__["MatSnackBarModule"],
                _angular_material__WEBPACK_IMPORTED_MODULE_3__["MatCheckboxModule"],
                _angular_material__WEBPACK_IMPORTED_MODULE_3__["MatDialogModule"],
                _angular_material__WEBPACK_IMPORTED_MODULE_3__["MatToolbarModule"],
                _angular_material__WEBPACK_IMPORTED_MODULE_3__["MatMenuModule"],
                _angular_material__WEBPACK_IMPORTED_MODULE_3__["MatIconModule"],
                _angular_material__WEBPACK_IMPORTED_MODULE_3__["MatListModule"],
                _angular_material__WEBPACK_IMPORTED_MODULE_3__["MatCardModule"],
                _angular_material__WEBPACK_IMPORTED_MODULE_3__["MatFormFieldModule"],
                _angular_material__WEBPACK_IMPORTED_MODULE_3__["MatInputModule"],
                _angular_material__WEBPACK_IMPORTED_MODULE_3__["MatProgressSpinnerModule"],
                _angular_material__WEBPACK_IMPORTED_MODULE_3__["MatBadgeModule"],
                _app_routing_module__WEBPACK_IMPORTED_MODULE_15__["AppRoutingModule"],
                _angular_forms__WEBPACK_IMPORTED_MODULE_17__["FormsModule"],
                _angular_forms__WEBPACK_IMPORTED_MODULE_17__["ReactiveFormsModule"],
                _angular_common_http__WEBPACK_IMPORTED_MODULE_43__["HttpClientModule"],
                _ngx_translate_core__WEBPACK_IMPORTED_MODULE_41__["TranslateModule"].forRoot({
                    loader: {
                        provide: _ngx_translate_core__WEBPACK_IMPORTED_MODULE_41__["TranslateLoader"],
                        useFactory: HttpLoaderFactory,
                        deps: [_angular_common_http__WEBPACK_IMPORTED_MODULE_43__["HttpClient"]]
                    }
                })
            ],
            providers: [
                _services_god_god_socket_service__WEBPACK_IMPORTED_MODULE_5__["GodSocketService"],
                _services_exhibit_exhibit_socket_service__WEBPACK_IMPORTED_MODULE_6__["ExhibitSocketService"],
                _services_native_native_response_service__WEBPACK_IMPORTED_MODULE_8__["NativeResponseService"],
                _WindowRef__WEBPACK_IMPORTED_MODULE_18__["WindowRef"],
                _services_god_god_service__WEBPACK_IMPORTED_MODULE_9__["GodService"],
                _services_exhibit_exhibit_service__WEBPACK_IMPORTED_MODULE_10__["ExhibitService"],
                _services_location_service__WEBPACK_IMPORTED_MODULE_13__["LocationService"],
                { provide: 'AppStore', useValue: appStore },
                _store_actions_LocationActions__WEBPACK_IMPORTED_MODULE_37__["LocationActions"],
                _store_actions_UserActions__WEBPACK_IMPORTED_MODULE_38__["UserActions"],
                _store_actions_StatusActions__WEBPACK_IMPORTED_MODULE_39__["StatusActions"],
                _services_native_native_communication_service__WEBPACK_IMPORTED_MODULE_11__["NativeCommunicationService"],
                _services_alert_service__WEBPACK_IMPORTED_MODULE_12__["AlertService"],
                _angular_forms__WEBPACK_IMPORTED_MODULE_17__["FormBuilder"],
                _services_utility_service__WEBPACK_IMPORTED_MODULE_7__["UtilityService"],
                _services_transmission_service__WEBPACK_IMPORTED_MODULE_14__["TransmissionService"]
            ],
            bootstrap: [_app_component__WEBPACK_IMPORTED_MODULE_19__["AppComponent"]],
            entryComponents: [
                _components_alert_dialog_alert_dialog_component__WEBPACK_IMPORTED_MODULE_28__["AlertDialogComponent"],
                _components_native_setting_dialog_native_setting_dialog_component__WEBPACK_IMPORTED_MODULE_29__["NativeSettingDialogComponent"],
                _components_delete_dialog_delete_dialog_component__WEBPACK_IMPORTED_MODULE_32__["DeleteDialogComponent"]
            ]
        }),
        __metadata("design:paramtypes", [_WindowRef__WEBPACK_IMPORTED_MODULE_18__["WindowRef"],
            _angular_core__WEBPACK_IMPORTED_MODULE_1__["NgZone"],
            _services_native_native_response_service__WEBPACK_IMPORTED_MODULE_8__["NativeResponseService"],
            _services_native_native_communication_service__WEBPACK_IMPORTED_MODULE_11__["NativeCommunicationService"],
            _angular_router__WEBPACK_IMPORTED_MODULE_16__["Router"]])
    ], AppModule);
    return AppModule;
}());

function HttpLoaderFactory(http) {
    return new _ngx_translate_http_loader__WEBPACK_IMPORTED_MODULE_42__["TranslateHttpLoader"](http, 'assets/i18n/', '.json');
}


/***/ }),

/***/ "./src/app/components/about/about.component.css":
/*!******************************************************!*\
  !*** ./src/app/components/about/about.component.css ***!
  \******************************************************/
/*! no static exports found */
/***/ (function(module, exports) {

module.exports = "@font-face {\n    font-family: 'OpenSans';\n    src: url('OpenSans-Regular.ttf');\n}\n\n@font-face {\n    font-family: 'Vollkorn';\n    src: url('Vollkorn-Bold.ttf');\n}\n\nh1{\n    font-family: 'Vollkorn', Times, serif;\n    margin: 20px 0;\n    font-size: 1.6em;\n}\n\np{\n    font-family: 'OpenSans', Helvetica, Arial, Sans-Serif;\n    margin: 10px 0;\n    font-size: 1em;\n}\n\na{\n    color: #0057a3;\n    text-decoration: underline;\n}\n\na:after {\n    background-image: url('externallink.svg');\n    background-size: 16px 16px;\n    display: inline-block;\n    width: 16px; \n    height: 15px;\n    content:\"\";\n }\n\n.toolbar button{\n    border: none;\n    outline: none;\n    height: 50px;\n    width: 50px;\n    margin: 20px 20px 0px 20px; \n    background: #ffffff;\n}\n\n.toolbar .closebutton{\n    float: right; \n    background: #494949;\n    color:#ffffff;\n}\n\n.toolbar .closebutton mat-icon{\n    margin: 4px 0 0 -15px;\n    font-size: 40px;\n}\n\n.wrapper {\n    padding: 0;\n    margin: 0;\n    position: absolute;\n    width: 100%;\n    top: 90px;\n  }\n\n.infoWrapper{\n    width: 70%;\n    margin: 20px auto;\n  }\n/*# sourceMappingURL=data:application/json;base64,eyJ2ZXJzaW9uIjozLCJzb3VyY2VzIjpbInNyYy9hcHAvY29tcG9uZW50cy9hYm91dC9hYm91dC5jb21wb25lbnQuY3NzIl0sIm5hbWVzIjpbXSwibWFwcGluZ3MiOiJBQUFBO0lBQ0ksdUJBQXVCO0lBQ3ZCLGdDQUFnRTtBQUNwRTs7QUFFQTtJQUNJLHVCQUF1QjtJQUN2Qiw2QkFBNEQ7QUFDaEU7O0FBRUE7SUFDSSxxQ0FBcUM7SUFDckMsY0FBYztJQUNkLGdCQUFnQjtBQUNwQjs7QUFFQTtJQUNJLHFEQUFxRDtJQUNyRCxjQUFjO0lBQ2QsY0FBYztBQUNsQjs7QUFFQTtJQUNJLGNBQWM7SUFDZCwwQkFBMEI7QUFDOUI7O0FBRUE7SUFDSSx5Q0FBK0Q7SUFDL0QsMEJBQTBCO0lBQzFCLHFCQUFxQjtJQUNyQixXQUFXO0lBQ1gsWUFBWTtJQUNaLFVBQVU7Q0FDYjs7QUFFRDtJQUNJLFlBQVk7SUFDWixhQUFhO0lBQ2IsWUFBWTtJQUNaLFdBQVc7SUFDWCwwQkFBMEI7SUFDMUIsbUJBQW1CO0FBQ3ZCOztBQUVBO0lBQ0ksWUFBWTtJQUNaLG1CQUFtQjtJQUNuQixhQUFhO0FBQ2pCOztBQUVBO0lBQ0kscUJBQXFCO0lBQ3JCLGVBQWU7QUFDbkI7O0FBRUE7SUFDSSxVQUFVO0lBQ1YsU0FBUztJQUNULGtCQUFrQjtJQUNsQixXQUFXO0lBQ1gsU0FBUztFQUNYOztBQUVBO0lBQ0UsVUFBVTtJQUNWLGlCQUFpQjtFQUNuQiIsImZpbGUiOiJzcmMvYXBwL2NvbXBvbmVudHMvYWJvdXQvYWJvdXQuY29tcG9uZW50LmNzcyIsInNvdXJjZXNDb250ZW50IjpbIkBmb250LWZhY2Uge1xuICAgIGZvbnQtZmFtaWx5OiAnT3BlblNhbnMnO1xuICAgIHNyYzogdXJsKFwiLi4vLi4vLi4vYXNzZXRzL2ZvbnRzL09wZW5fU2Fucy9PcGVuU2Fucy1SZWd1bGFyLnR0ZlwiKTtcbn1cblxuQGZvbnQtZmFjZSB7XG4gICAgZm9udC1mYW1pbHk6ICdWb2xsa29ybic7XG4gICAgc3JjOiB1cmwoXCIuLi8uLi8uLi9hc3NldHMvZm9udHMvVm9sbGtvcm4vVm9sbGtvcm4tQm9sZC50dGZcIik7XG59XG5cbmgxe1xuICAgIGZvbnQtZmFtaWx5OiAnVm9sbGtvcm4nLCBUaW1lcywgc2VyaWY7XG4gICAgbWFyZ2luOiAyMHB4IDA7XG4gICAgZm9udC1zaXplOiAxLjZlbTtcbn1cblxucHtcbiAgICBmb250LWZhbWlseTogJ09wZW5TYW5zJywgSGVsdmV0aWNhLCBBcmlhbCwgU2Fucy1TZXJpZjtcbiAgICBtYXJnaW46IDEwcHggMDtcbiAgICBmb250LXNpemU6IDFlbTtcbn1cblxuYXtcbiAgICBjb2xvcjogIzAwNTdhMztcbiAgICB0ZXh0LWRlY29yYXRpb246IHVuZGVybGluZTtcbn1cblxuYTphZnRlciB7XG4gICAgYmFja2dyb3VuZC1pbWFnZTogdXJsKFwiLi4vLi4vLi4vYXNzZXRzL2ljb25zL2V4dGVybmFsbGluay5zdmdcIik7XG4gICAgYmFja2dyb3VuZC1zaXplOiAxNnB4IDE2cHg7XG4gICAgZGlzcGxheTogaW5saW5lLWJsb2NrO1xuICAgIHdpZHRoOiAxNnB4OyBcbiAgICBoZWlnaHQ6IDE1cHg7XG4gICAgY29udGVudDpcIlwiO1xuIH1cblxuLnRvb2xiYXIgYnV0dG9ue1xuICAgIGJvcmRlcjogbm9uZTtcbiAgICBvdXRsaW5lOiBub25lO1xuICAgIGhlaWdodDogNTBweDtcbiAgICB3aWR0aDogNTBweDtcbiAgICBtYXJnaW46IDIwcHggMjBweCAwcHggMjBweDsgXG4gICAgYmFja2dyb3VuZDogI2ZmZmZmZjtcbn1cblxuLnRvb2xiYXIgLmNsb3NlYnV0dG9ue1xuICAgIGZsb2F0OiByaWdodDsgXG4gICAgYmFja2dyb3VuZDogIzQ5NDk0OTtcbiAgICBjb2xvcjojZmZmZmZmO1xufVxuXG4udG9vbGJhciAuY2xvc2VidXR0b24gbWF0LWljb257XG4gICAgbWFyZ2luOiA0cHggMCAwIC0xNXB4O1xuICAgIGZvbnQtc2l6ZTogNDBweDtcbn1cblxuLndyYXBwZXIge1xuICAgIHBhZGRpbmc6IDA7XG4gICAgbWFyZ2luOiAwO1xuICAgIHBvc2l0aW9uOiBhYnNvbHV0ZTtcbiAgICB3aWR0aDogMTAwJTtcbiAgICB0b3A6IDkwcHg7XG4gIH1cbiAgXG4gIC5pbmZvV3JhcHBlcntcbiAgICB3aWR0aDogNzAlO1xuICAgIG1hcmdpbjogMjBweCBhdXRvO1xuICB9Il19 */"

/***/ }),

/***/ "./src/app/components/about/about.component.html":
/*!*******************************************************!*\
  !*** ./src/app/components/about/about.component.html ***!
  \*******************************************************/
/*! no static exports found */
/***/ (function(module, exports) {

module.exports = "<div class=\"toolbar\">\n  <button class=\"closebutton\" (click)=\"closeWindow()\"><mat-icon>close</mat-icon></button>\n</div> \n\n<div class=\"wrapper\">\n  <div class=\"infoWrapper\">\n    <h1>About the exhibition</h1>\n    <p>Resolution possession discovered surrounded advantages has but few add. Yet walls times spoil put. Be it reserved contempt rendered smallest. Studied to passage it mention calling believe an. Get ten horrible remember pleasure two vicinity. Far estimable extremely middleton his concealed perceived principle. Any nay pleasure entrance prepared her.</p>\n    \n    <p>This application is a part of the MEETeUX project at the St. Pölten University of Applied Sciences. <br/><a src=\"\">Visit the website</a></p>\n\n    <h1>Background info</h1>\n    <p>The backgrounds of the different sections feature medieval woodcuts.</p>\n\n    <p>Section 1:<br/>By spite about do of do allow blush. Additions in conveying or collected objection in. Suffer few desire wonder her object hardly nearer.</p>\n\n    <p>Section 2:<br/>On insensible possession oh particular attachment at excellence in. The books arose but miles happy she. It building contempt or interest children mistress of unlocked no.</p>\n  </div>\n</div>"

/***/ }),

/***/ "./src/app/components/about/about.component.ts":
/*!*****************************************************!*\
  !*** ./src/app/components/about/about.component.ts ***!
  \*****************************************************/
/*! exports provided: AboutComponent */
/***/ (function(module, __webpack_exports__, __webpack_require__) {

"use strict";
__webpack_require__.r(__webpack_exports__);
/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, "AboutComponent", function() { return AboutComponent; });
/* harmony import */ var _angular_core__WEBPACK_IMPORTED_MODULE_0__ = __webpack_require__(/*! @angular/core */ "./node_modules/@angular/core/fesm5/core.js");
/* harmony import */ var _angular_router__WEBPACK_IMPORTED_MODULE_1__ = __webpack_require__(/*! @angular/router */ "./node_modules/@angular/router/fesm5/router.js");
/* harmony import */ var _services_native_native_communication_service__WEBPACK_IMPORTED_MODULE_2__ = __webpack_require__(/*! ../../services/native/native-communication.service */ "./src/app/services/native/native-communication.service.ts");
var __decorate = (undefined && undefined.__decorate) || function (decorators, target, key, desc) {
    var c = arguments.length, r = c < 3 ? target : desc === null ? desc = Object.getOwnPropertyDescriptor(target, key) : desc, d;
    if (typeof Reflect === "object" && typeof Reflect.decorate === "function") r = Reflect.decorate(decorators, target, key, desc);
    else for (var i = decorators.length - 1; i >= 0; i--) if (d = decorators[i]) r = (c < 3 ? d(r) : c > 3 ? d(target, key, r) : d(target, key)) || r;
    return c > 3 && r && Object.defineProperty(target, key, r), r;
};
var __metadata = (undefined && undefined.__metadata) || function (k, v) {
    if (typeof Reflect === "object" && typeof Reflect.metadata === "function") return Reflect.metadata(k, v);
};



var AboutComponent = /** @class */ (function () {
    function AboutComponent(router, nativeCommunicationService) {
        this.router = router;
        this.nativeCommunicationService = nativeCommunicationService;
    }
    AboutComponent.prototype.ngOnInit = function () {
    };
    AboutComponent.prototype.closeWindow = function () {
        var _this = this;
        this.router.navigate(['mainview']).then(function () {
            _this.nativeCommunicationService.sendToNative('Main View', 'print');
        });
    };
    AboutComponent = __decorate([
        Object(_angular_core__WEBPACK_IMPORTED_MODULE_0__["Component"])({
            selector: 'app-about',
            template: __webpack_require__(/*! ./about.component.html */ "./src/app/components/about/about.component.html"),
            styles: [__webpack_require__(/*! ./about.component.css */ "./src/app/components/about/about.component.css")]
        }),
        __metadata("design:paramtypes", [_angular_router__WEBPACK_IMPORTED_MODULE_1__["Router"],
            _services_native_native_communication_service__WEBPACK_IMPORTED_MODULE_2__["NativeCommunicationService"]])
    ], AboutComponent);
    return AboutComponent;
}());



/***/ }),

/***/ "./src/app/components/alert-dialog/alert-dialog.component.css":
/*!********************************************************************!*\
  !*** ./src/app/components/alert-dialog/alert-dialog.component.css ***!
  \********************************************************************/
/*! no static exports found */
/***/ (function(module, exports) {

module.exports = ".wrapper {\n    padding: 50px 40px 0 40px;\n  }\n  \n  @font-face {\n    font-family: 'OpenSans';\n    src: url('OpenSans-Regular.ttf');\n  }\n  \n  @font-face {\n    font-family: 'Vollkorn';\n    src: url('Vollkorn-Bold.ttf');\n  }\n  \n  h1{\n    font-family: 'Vollkorn', Times, serif;\n      margin: 20px;\n      text-align: center;\n      font-size: 1.6em;\n  }\n  \n  p{\n    font-family: 'OpenSans', Helvetica, Arial, Sans-Serif;\n    margin: 0px;\n    text-align: center;\n    font-size: 1em;\n  }\n  \n  .btnConfirm{\n    border: none;\n    outline: none;\n    text-transform: uppercase;\n    font-size: 1em;\n    font-family: 'OpenSans', Helvetica, Arial, Sans-Serif;\n    display: block;\n    margin: 10px auto;\n    background: #494949;\n    color: #ffffff;\n    min-width: 180px;\n    padding: 0.8em;\n  }\n  \n  .btnCancel{\n      margin: -10px 0px 0px 0px;\n      float: right;\n      cursor: pointer;\n      font-size: 35px;\n  }\n  \n/*# sourceMappingURL=data:application/json;base64,eyJ2ZXJzaW9uIjozLCJzb3VyY2VzIjpbInNyYy9hcHAvY29tcG9uZW50cy9hbGVydC1kaWFsb2cvYWxlcnQtZGlhbG9nLmNvbXBvbmVudC5jc3MiXSwibmFtZXMiOltdLCJtYXBwaW5ncyI6IkFBQUE7SUFDSSx5QkFBeUI7RUFDM0I7O0VBRUE7SUFDRSx1QkFBdUI7SUFDdkIsZ0NBQWdFO0VBQ2xFOztFQUVBO0lBQ0UsdUJBQXVCO0lBQ3ZCLDZCQUE0RDtFQUM5RDs7RUFFQTtJQUNFLHFDQUFxQztNQUNuQyxZQUFZO01BQ1osa0JBQWtCO01BQ2xCLGdCQUFnQjtFQUNwQjs7RUFFQTtJQUNFLHFEQUFxRDtJQUNyRCxXQUFXO0lBQ1gsa0JBQWtCO0lBQ2xCLGNBQWM7RUFDaEI7O0VBRUE7SUFDRSxZQUFZO0lBQ1osYUFBYTtJQUNiLHlCQUF5QjtJQUN6QixjQUFjO0lBQ2QscURBQXFEO0lBQ3JELGNBQWM7SUFDZCxpQkFBaUI7SUFDakIsbUJBQW1CO0lBQ25CLGNBQWM7SUFDZCxnQkFBZ0I7SUFDaEIsY0FBYztFQUNoQjs7RUFFQTtNQUNJLHlCQUF5QjtNQUN6QixZQUFZO01BQ1osZUFBZTtNQUNmLGVBQWU7RUFDbkIiLCJmaWxlIjoic3JjL2FwcC9jb21wb25lbnRzL2FsZXJ0LWRpYWxvZy9hbGVydC1kaWFsb2cuY29tcG9uZW50LmNzcyIsInNvdXJjZXNDb250ZW50IjpbIi53cmFwcGVyIHtcbiAgICBwYWRkaW5nOiA1MHB4IDQwcHggMCA0MHB4O1xuICB9XG4gIFxuICBAZm9udC1mYWNlIHtcbiAgICBmb250LWZhbWlseTogJ09wZW5TYW5zJztcbiAgICBzcmM6IHVybChcIi4uLy4uLy4uL2Fzc2V0cy9mb250cy9PcGVuX1NhbnMvT3BlblNhbnMtUmVndWxhci50dGZcIik7XG4gIH1cbiAgXG4gIEBmb250LWZhY2Uge1xuICAgIGZvbnQtZmFtaWx5OiAnVm9sbGtvcm4nO1xuICAgIHNyYzogdXJsKFwiLi4vLi4vLi4vYXNzZXRzL2ZvbnRzL1ZvbGxrb3JuL1ZvbGxrb3JuLUJvbGQudHRmXCIpO1xuICB9XG4gIFxuICBoMXtcbiAgICBmb250LWZhbWlseTogJ1ZvbGxrb3JuJywgVGltZXMsIHNlcmlmO1xuICAgICAgbWFyZ2luOiAyMHB4O1xuICAgICAgdGV4dC1hbGlnbjogY2VudGVyO1xuICAgICAgZm9udC1zaXplOiAxLjZlbTtcbiAgfVxuICBcbiAgcHtcbiAgICBmb250LWZhbWlseTogJ09wZW5TYW5zJywgSGVsdmV0aWNhLCBBcmlhbCwgU2Fucy1TZXJpZjtcbiAgICBtYXJnaW46IDBweDtcbiAgICB0ZXh0LWFsaWduOiBjZW50ZXI7XG4gICAgZm9udC1zaXplOiAxZW07XG4gIH1cbiAgXG4gIC5idG5Db25maXJte1xuICAgIGJvcmRlcjogbm9uZTtcbiAgICBvdXRsaW5lOiBub25lO1xuICAgIHRleHQtdHJhbnNmb3JtOiB1cHBlcmNhc2U7XG4gICAgZm9udC1zaXplOiAxZW07XG4gICAgZm9udC1mYW1pbHk6ICdPcGVuU2FucycsIEhlbHZldGljYSwgQXJpYWwsIFNhbnMtU2VyaWY7XG4gICAgZGlzcGxheTogYmxvY2s7XG4gICAgbWFyZ2luOiAxMHB4IGF1dG87XG4gICAgYmFja2dyb3VuZDogIzQ5NDk0OTtcbiAgICBjb2xvcjogI2ZmZmZmZjtcbiAgICBtaW4td2lkdGg6IDE4MHB4O1xuICAgIHBhZGRpbmc6IDAuOGVtO1xuICB9XG4gIFxuICAuYnRuQ2FuY2Vse1xuICAgICAgbWFyZ2luOiAtMTBweCAwcHggMHB4IDBweDtcbiAgICAgIGZsb2F0OiByaWdodDtcbiAgICAgIGN1cnNvcjogcG9pbnRlcjtcbiAgICAgIGZvbnQtc2l6ZTogMzVweDtcbiAgfVxuICAiXX0= */"

/***/ }),

/***/ "./src/app/components/alert-dialog/alert-dialog.component.html":
/*!*********************************************************************!*\
  !*** ./src/app/components/alert-dialog/alert-dialog.component.html ***!
  \*********************************************************************/
/*! no static exports found */
/***/ (function(module, exports) {

module.exports = "<mat-icon class=\"btnCancel\" (tap)=\"cancelDialog()\">close</mat-icon>\n<h1 matDialogTitle>{{ 'alertDialog.title' | translate }}</h1>\n<div mat-dialog-content>\n  <p>{{ 'alertDialog.description' | translate }} {{data.number}}?</p>\n</div>\n<mat-dialog-actions align=\"end\">\n  <button class=\"btnConfirm\" (tap)=\"confirmDialog()\">{{ 'alertDialog.yesOption' | translate }}</button>\n</mat-dialog-actions>\n\n"

/***/ }),

/***/ "./src/app/components/alert-dialog/alert-dialog.component.ts":
/*!*******************************************************************!*\
  !*** ./src/app/components/alert-dialog/alert-dialog.component.ts ***!
  \*******************************************************************/
/*! exports provided: AlertDialogComponent */
/***/ (function(module, __webpack_exports__, __webpack_require__) {

"use strict";
__webpack_require__.r(__webpack_exports__);
/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, "AlertDialogComponent", function() { return AlertDialogComponent; });
/* harmony import */ var _angular_core__WEBPACK_IMPORTED_MODULE_0__ = __webpack_require__(/*! @angular/core */ "./node_modules/@angular/core/fesm5/core.js");
/* harmony import */ var _angular_material__WEBPACK_IMPORTED_MODULE_1__ = __webpack_require__(/*! @angular/material */ "./node_modules/@angular/material/esm5/material.es5.js");
var __decorate = (undefined && undefined.__decorate) || function (decorators, target, key, desc) {
    var c = arguments.length, r = c < 3 ? target : desc === null ? desc = Object.getOwnPropertyDescriptor(target, key) : desc, d;
    if (typeof Reflect === "object" && typeof Reflect.decorate === "function") r = Reflect.decorate(decorators, target, key, desc);
    else for (var i = decorators.length - 1; i >= 0; i--) if (d = decorators[i]) r = (c < 3 ? d(r) : c > 3 ? d(target, key, r) : d(target, key)) || r;
    return c > 3 && r && Object.defineProperty(target, key, r), r;
};
var __metadata = (undefined && undefined.__metadata) || function (k, v) {
    if (typeof Reflect === "object" && typeof Reflect.metadata === "function") return Reflect.metadata(k, v);
};
var __param = (undefined && undefined.__param) || function (paramIndex, decorator) {
    return function (target, key) { decorator(target, key, paramIndex); }
};


var AlertDialogComponent = /** @class */ (function () {
    function AlertDialogComponent(thisDialogRef, data) {
        this.thisDialogRef = thisDialogRef;
        this.data = data;
    }
    AlertDialogComponent.prototype.ngOnInit = function () {
    };
    AlertDialogComponent.prototype.cancelDialog = function () {
        this.thisDialogRef.close('cancel');
        // console.log("canceled");
    };
    AlertDialogComponent.prototype.confirmDialog = function () {
        this.thisDialogRef.close('confirm');
        // console.log("confirmed");
    };
    AlertDialogComponent = __decorate([
        Object(_angular_core__WEBPACK_IMPORTED_MODULE_0__["Component"])({
            selector: 'app-alert-dialog',
            template: __webpack_require__(/*! ./alert-dialog.component.html */ "./src/app/components/alert-dialog/alert-dialog.component.html"),
            styles: [__webpack_require__(/*! ./alert-dialog.component.css */ "./src/app/components/alert-dialog/alert-dialog.component.css")]
        }),
        __param(1, Object(_angular_core__WEBPACK_IMPORTED_MODULE_0__["Inject"])(_angular_material__WEBPACK_IMPORTED_MODULE_1__["MAT_DIALOG_DATA"])),
        __metadata("design:paramtypes", [_angular_material__WEBPACK_IMPORTED_MODULE_1__["MatDialogRef"], Object])
    ], AlertDialogComponent);
    return AlertDialogComponent;
}());



/***/ }),

/***/ "./src/app/components/change-credentials/change-credentials.component.css":
/*!********************************************************************************!*\
  !*** ./src/app/components/change-credentials/change-credentials.component.css ***!
  \********************************************************************************/
/*! no static exports found */
/***/ (function(module, exports) {

module.exports = "@font-face {\n  font-family: 'OpenSans';\n  src: url('OpenSans-Regular.ttf');\n}\n\n@font-face {\n  font-family: 'Vollkorn';\n  src: url('Vollkorn-Bold.ttf');\n}\n\n.wrapper h1{\n  font-family: 'Vollkorn', Times, serif;\n    margin: 20px;\n    text-align: center;\n    font-size: 1.6em;\n}\n\n.wrapper h2, p{\n  font-family: 'OpenSans', Helvetica, Arial, Sans-Serif;\n  margin: 0px;\n  text-align: center;\n  font-size: 1.2em;\n}\n\n.wrapper h2{\n  margin-top: 2.5em;\n}\n\n.wrapper {\n  padding: 0;\n  margin: 0;\n  position: absolute;\n  width: 100%;\n  top: 90px;\n}\n\n.loginFormWrapper{\n  width: 70%;\n  margin: 20px auto;\n}\n\n.btnPreview{\n  border: none;\n  outline: none;\n  text-transform: uppercase;\n  font-size: 1em;\n  font-family: 'OpenSans', Helvetica, Arial, Sans-Serif;\n  display: block;\n  margin: 1em auto 10px auto;\n  background: #494949;\n  color: #ffffff;\n  min-width: 180px;\n  padding: 0.8em;\n}\n\n.btnDelete,\n.btnCancel,\n.btnSave{\n  border: none;\n  outline: none;\n  text-transform: uppercase;\n  font-size: 1em;\n  font-family: 'OpenSans', Helvetica, Arial, Sans-Serif;\n  display: block;\n  margin: 10px auto;\n  background: #494949;\n  color: #ffffff;\n  min-width: 180px;\n  padding: 0.8em;\n}\n\n.btnCancel{\n  border: 1px solid #494949;\n  background: #ffffff;\n  color: #494949;\n}\n\n.btnDelete{\n  border: 1px solid #93272c;\n  background: #ffffff;\n  color: #93272c;\n}\n\n.hide{\n  display: none;\n}\n\ninput{\n  font-family: 'Vollkorn', Times, serif;\n  margin-bottom: 6px;\n  font-size: 1.3em;\n  text-align: center; \n}\n\n.error{\n  font-family: 'OpenSans', Helvetica, Arial, Sans-Serif;\n  text-align: center;\n  height: 2em;\n  font-size: 0.9em;\n}\n\n.toolbar button{\n    border: none;\n    outline: none;\n    height: 50px;\n    width: 50px;\n    margin: 20px 20px 0px 20px; \n    background: #ffffff;\n}\n\n.toolbar .closebutton{\n    float: right; \n    background: #494949;\n    color:#ffffff;\n}\n\n.toolbar .closebutton mat-icon{\n    margin: 4px 0 0 -15px;\n    font-size: 40px;\n}\n\n.toolbar .closebutton.disabled{\n  float: right; \n  background: #cccccc;\n  color:#ffffff;\n}\n\n@media (max-height: 650px) {\n  .wrapper h2{\n    font-size: 0.8em;\n    margin: 0;\n  }\n\n  input{\n    font-size: 0.9em;\n  }\n\n  .btnLogin{\n    margin: 0px auto 0 auto;\n    font-size: 0.8em;\n  }\n\n  .error{\n    height: auto;\n    font-size: 0.8em;\n  }\n\n  .btnPreview{\n    margin: 0.8em auto 50px auto;\n  }\n}\n\n/*# sourceMappingURL=data:application/json;base64,eyJ2ZXJzaW9uIjozLCJzb3VyY2VzIjpbInNyYy9hcHAvY29tcG9uZW50cy9jaGFuZ2UtY3JlZGVudGlhbHMvY2hhbmdlLWNyZWRlbnRpYWxzLmNvbXBvbmVudC5jc3MiXSwibmFtZXMiOltdLCJtYXBwaW5ncyI6IkFBQUE7RUFDRSx1QkFBdUI7RUFDdkIsZ0NBQWdFO0FBQ2xFOztBQUVBO0VBQ0UsdUJBQXVCO0VBQ3ZCLDZCQUE0RDtBQUM5RDs7QUFFQTtFQUNFLHFDQUFxQztJQUNuQyxZQUFZO0lBQ1osa0JBQWtCO0lBQ2xCLGdCQUFnQjtBQUNwQjs7QUFFQTtFQUNFLHFEQUFxRDtFQUNyRCxXQUFXO0VBQ1gsa0JBQWtCO0VBQ2xCLGdCQUFnQjtBQUNsQjs7QUFFQTtFQUNFLGlCQUFpQjtBQUNuQjs7QUFFQTtFQUNFLFVBQVU7RUFDVixTQUFTO0VBQ1Qsa0JBQWtCO0VBQ2xCLFdBQVc7RUFDWCxTQUFTO0FBQ1g7O0FBRUE7RUFDRSxVQUFVO0VBQ1YsaUJBQWlCO0FBQ25COztBQUVBO0VBQ0UsWUFBWTtFQUNaLGFBQWE7RUFDYix5QkFBeUI7RUFDekIsY0FBYztFQUNkLHFEQUFxRDtFQUNyRCxjQUFjO0VBQ2QsMEJBQTBCO0VBQzFCLG1CQUFtQjtFQUNuQixjQUFjO0VBQ2QsZ0JBQWdCO0VBQ2hCLGNBQWM7QUFDaEI7O0FBRUE7OztFQUdFLFlBQVk7RUFDWixhQUFhO0VBQ2IseUJBQXlCO0VBQ3pCLGNBQWM7RUFDZCxxREFBcUQ7RUFDckQsY0FBYztFQUNkLGlCQUFpQjtFQUNqQixtQkFBbUI7RUFDbkIsY0FBYztFQUNkLGdCQUFnQjtFQUNoQixjQUFjO0FBQ2hCOztBQUVBO0VBQ0UseUJBQXlCO0VBQ3pCLG1CQUFtQjtFQUNuQixjQUFjO0FBQ2hCOztBQUVBO0VBQ0UseUJBQXlCO0VBQ3pCLG1CQUFtQjtFQUNuQixjQUFjO0FBQ2hCOztBQUVBO0VBQ0UsYUFBYTtBQUNmOztBQUNBO0VBQ0UscUNBQXFDO0VBQ3JDLGtCQUFrQjtFQUNsQixnQkFBZ0I7RUFDaEIsa0JBQWtCO0FBQ3BCOztBQUVBO0VBQ0UscURBQXFEO0VBQ3JELGtCQUFrQjtFQUNsQixXQUFXO0VBQ1gsZ0JBQWdCO0FBQ2xCOztBQUVBO0lBQ0ksWUFBWTtJQUNaLGFBQWE7SUFDYixZQUFZO0lBQ1osV0FBVztJQUNYLDBCQUEwQjtJQUMxQixtQkFBbUI7QUFDdkI7O0FBRUE7SUFDSSxZQUFZO0lBQ1osbUJBQW1CO0lBQ25CLGFBQWE7QUFDakI7O0FBRUE7SUFDSSxxQkFBcUI7SUFDckIsZUFBZTtBQUNuQjs7QUFFQTtFQUNFLFlBQVk7RUFDWixtQkFBbUI7RUFDbkIsYUFBYTtBQUNmOztBQUdBO0VBQ0U7SUFDRSxnQkFBZ0I7SUFDaEIsU0FBUztFQUNYOztFQUVBO0lBQ0UsZ0JBQWdCO0VBQ2xCOztFQUVBO0lBQ0UsdUJBQXVCO0lBQ3ZCLGdCQUFnQjtFQUNsQjs7RUFFQTtJQUNFLFlBQVk7SUFDWixnQkFBZ0I7RUFDbEI7O0VBRUE7SUFDRSw0QkFBNEI7RUFDOUI7QUFDRiIsImZpbGUiOiJzcmMvYXBwL2NvbXBvbmVudHMvY2hhbmdlLWNyZWRlbnRpYWxzL2NoYW5nZS1jcmVkZW50aWFscy5jb21wb25lbnQuY3NzIiwic291cmNlc0NvbnRlbnQiOlsiQGZvbnQtZmFjZSB7XG4gIGZvbnQtZmFtaWx5OiAnT3BlblNhbnMnO1xuICBzcmM6IHVybChcIi4uLy4uLy4uL2Fzc2V0cy9mb250cy9PcGVuX1NhbnMvT3BlblNhbnMtUmVndWxhci50dGZcIik7XG59XG5cbkBmb250LWZhY2Uge1xuICBmb250LWZhbWlseTogJ1ZvbGxrb3JuJztcbiAgc3JjOiB1cmwoXCIuLi8uLi8uLi9hc3NldHMvZm9udHMvVm9sbGtvcm4vVm9sbGtvcm4tQm9sZC50dGZcIik7XG59XG5cbi53cmFwcGVyIGgxe1xuICBmb250LWZhbWlseTogJ1ZvbGxrb3JuJywgVGltZXMsIHNlcmlmO1xuICAgIG1hcmdpbjogMjBweDtcbiAgICB0ZXh0LWFsaWduOiBjZW50ZXI7XG4gICAgZm9udC1zaXplOiAxLjZlbTtcbn1cblxuLndyYXBwZXIgaDIsIHB7XG4gIGZvbnQtZmFtaWx5OiAnT3BlblNhbnMnLCBIZWx2ZXRpY2EsIEFyaWFsLCBTYW5zLVNlcmlmO1xuICBtYXJnaW46IDBweDtcbiAgdGV4dC1hbGlnbjogY2VudGVyO1xuICBmb250LXNpemU6IDEuMmVtO1xufVxuXG4ud3JhcHBlciBoMntcbiAgbWFyZ2luLXRvcDogMi41ZW07XG59XG5cbi53cmFwcGVyIHtcbiAgcGFkZGluZzogMDtcbiAgbWFyZ2luOiAwO1xuICBwb3NpdGlvbjogYWJzb2x1dGU7XG4gIHdpZHRoOiAxMDAlO1xuICB0b3A6IDkwcHg7XG59XG5cbi5sb2dpbkZvcm1XcmFwcGVye1xuICB3aWR0aDogNzAlO1xuICBtYXJnaW46IDIwcHggYXV0bztcbn1cblxuLmJ0blByZXZpZXd7XG4gIGJvcmRlcjogbm9uZTtcbiAgb3V0bGluZTogbm9uZTtcbiAgdGV4dC10cmFuc2Zvcm06IHVwcGVyY2FzZTtcbiAgZm9udC1zaXplOiAxZW07XG4gIGZvbnQtZmFtaWx5OiAnT3BlblNhbnMnLCBIZWx2ZXRpY2EsIEFyaWFsLCBTYW5zLVNlcmlmO1xuICBkaXNwbGF5OiBibG9jaztcbiAgbWFyZ2luOiAxZW0gYXV0byAxMHB4IGF1dG87XG4gIGJhY2tncm91bmQ6ICM0OTQ5NDk7XG4gIGNvbG9yOiAjZmZmZmZmO1xuICBtaW4td2lkdGg6IDE4MHB4O1xuICBwYWRkaW5nOiAwLjhlbTtcbn1cblxuLmJ0bkRlbGV0ZSxcbi5idG5DYW5jZWwsXG4uYnRuU2F2ZXtcbiAgYm9yZGVyOiBub25lO1xuICBvdXRsaW5lOiBub25lO1xuICB0ZXh0LXRyYW5zZm9ybTogdXBwZXJjYXNlO1xuICBmb250LXNpemU6IDFlbTtcbiAgZm9udC1mYW1pbHk6ICdPcGVuU2FucycsIEhlbHZldGljYSwgQXJpYWwsIFNhbnMtU2VyaWY7XG4gIGRpc3BsYXk6IGJsb2NrO1xuICBtYXJnaW46IDEwcHggYXV0bztcbiAgYmFja2dyb3VuZDogIzQ5NDk0OTtcbiAgY29sb3I6ICNmZmZmZmY7XG4gIG1pbi13aWR0aDogMTgwcHg7XG4gIHBhZGRpbmc6IDAuOGVtO1xufVxuXG4uYnRuQ2FuY2Vse1xuICBib3JkZXI6IDFweCBzb2xpZCAjNDk0OTQ5O1xuICBiYWNrZ3JvdW5kOiAjZmZmZmZmO1xuICBjb2xvcjogIzQ5NDk0OTtcbn1cblxuLmJ0bkRlbGV0ZXtcbiAgYm9yZGVyOiAxcHggc29saWQgIzkzMjcyYztcbiAgYmFja2dyb3VuZDogI2ZmZmZmZjtcbiAgY29sb3I6ICM5MzI3MmM7XG59XG5cbi5oaWRle1xuICBkaXNwbGF5OiBub25lO1xufVxuaW5wdXR7XG4gIGZvbnQtZmFtaWx5OiAnVm9sbGtvcm4nLCBUaW1lcywgc2VyaWY7XG4gIG1hcmdpbi1ib3R0b206IDZweDtcbiAgZm9udC1zaXplOiAxLjNlbTtcbiAgdGV4dC1hbGlnbjogY2VudGVyOyBcbn1cblxuLmVycm9ye1xuICBmb250LWZhbWlseTogJ09wZW5TYW5zJywgSGVsdmV0aWNhLCBBcmlhbCwgU2Fucy1TZXJpZjtcbiAgdGV4dC1hbGlnbjogY2VudGVyO1xuICBoZWlnaHQ6IDJlbTtcbiAgZm9udC1zaXplOiAwLjllbTtcbn1cblxuLnRvb2xiYXIgYnV0dG9ue1xuICAgIGJvcmRlcjogbm9uZTtcbiAgICBvdXRsaW5lOiBub25lO1xuICAgIGhlaWdodDogNTBweDtcbiAgICB3aWR0aDogNTBweDtcbiAgICBtYXJnaW46IDIwcHggMjBweCAwcHggMjBweDsgXG4gICAgYmFja2dyb3VuZDogI2ZmZmZmZjtcbn1cblxuLnRvb2xiYXIgLmNsb3NlYnV0dG9ue1xuICAgIGZsb2F0OiByaWdodDsgXG4gICAgYmFja2dyb3VuZDogIzQ5NDk0OTtcbiAgICBjb2xvcjojZmZmZmZmO1xufVxuXG4udG9vbGJhciAuY2xvc2VidXR0b24gbWF0LWljb257XG4gICAgbWFyZ2luOiA0cHggMCAwIC0xNXB4O1xuICAgIGZvbnQtc2l6ZTogNDBweDtcbn1cblxuLnRvb2xiYXIgLmNsb3NlYnV0dG9uLmRpc2FibGVke1xuICBmbG9hdDogcmlnaHQ7IFxuICBiYWNrZ3JvdW5kOiAjY2NjY2NjO1xuICBjb2xvcjojZmZmZmZmO1xufVxuXG5cbkBtZWRpYSAobWF4LWhlaWdodDogNjUwcHgpIHtcbiAgLndyYXBwZXIgaDJ7XG4gICAgZm9udC1zaXplOiAwLjhlbTtcbiAgICBtYXJnaW46IDA7XG4gIH1cblxuICBpbnB1dHtcbiAgICBmb250LXNpemU6IDAuOWVtO1xuICB9XG5cbiAgLmJ0bkxvZ2lue1xuICAgIG1hcmdpbjogMHB4IGF1dG8gMCBhdXRvO1xuICAgIGZvbnQtc2l6ZTogMC44ZW07XG4gIH1cblxuICAuZXJyb3J7XG4gICAgaGVpZ2h0OiBhdXRvO1xuICAgIGZvbnQtc2l6ZTogMC44ZW07XG4gIH1cblxuICAuYnRuUHJldmlld3tcbiAgICBtYXJnaW46IDAuOGVtIGF1dG8gNTBweCBhdXRvO1xuICB9XG59XG4iXX0= */"

/***/ }),

/***/ "./src/app/components/change-credentials/change-credentials.component.html":
/*!*********************************************************************************!*\
  !*** ./src/app/components/change-credentials/change-credentials.component.html ***!
  \*********************************************************************************/
/*! no static exports found */
/***/ (function(module, exports) {

module.exports = "<div class=\"toolbar\">\n  <button [className]=\"(changeUsernameEnable || changeEmailEnable || changePasswordEnable)? 'disabled closebutton' : 'closebutton'\" (click)=\"closeWindow()\"><mat-icon>close</mat-icon></button>\n</div> \n<div class=\"wrapper\">\n  <h1>{{ 'changeCredentials.title' | translate }}</h1>\n\n  <div class=\"credentialsForm loginFormWrapper\">\n    <form name=\"credentialsForm\" [formGroup]=\"changeForm\">\n      \n      <div class=\"form-preview\" *ngIf=\"!changeUsernameEnable && !changeEmailEnable && !changePasswordEnable && !changeLanguageEnable\">\n          <h2>{{ 'changeCredentials.username' | translate }}:</h2>\n          <p>{{changeName}}</p>\n          <button class=\"btnPreview\" (click)=\"changeUsernamePreview()\">{{ 'changeCredentials.btnUsername' | translate }}</button>\n      </div>\n      <div [className]=\"changeUsernameEnable ? 'fix-mat-form-field' : 'hide fix-mat-form-field'\">\n        <mat-form-field class=\"full-with-field\" appearance=\"outline\">\n          <input matInput placeholder=\"Username\" value = \"{{changeName}}\" [(ngModel)]=\"name\" [formControl]=\"nameFormControl\">\n          <!--<mat-error *ngIf=\"nameFormControl.invalid\">{{getRequiredErrorMessage('name')}}</mat-error>-->\n        </mat-form-field>\n      </div>\n\n      <div class=\"form-preview\" *ngIf=\"!changeUsernameEnable && !changeEmailEnable && !changePasswordEnable && !changeLanguageEnable\">\n          <h2>{{ 'changeCredentials.email' | translate }}:</h2>\n          <p>{{changeEmail}}</p>\n          <button class=\"btnPreview\" (click)=\"changeEmailPreview()\">{{ 'changeCredentials.btnEmail' | translate }}</button>\n      </div>\n      <div [className]=\"changeEmailEnable ? 'fix-mat-form-field' : 'hide fix-mat-form-field'\">\n        <mat-form-field class=\"full-with-field\" appearance=\"outline\">\n          <input matInput placeholder=\"Email\" value = \"{{changeEmail}}\" [(ngModel)]=\"email\" [formControl]=\"emailFormControl\">\n          <!--<mat-error *ngIf=\"emailFormControl.invalid\">{{getRequiredErrorMessage('email')}}</mat-error>-->\n        </mat-form-field>\n      </div>\n\n      <div class=\"form-preview\" *ngIf=\"!changeUsernameEnable && !changeEmailEnable && !changePasswordEnable && !changeLanguageEnable\">\n          <h2>{{ 'changeCredentials.password' | translate }}:</h2>\n          <p>******</p>\n          <button class=\"btnPreview\" (click)=\"changePasswordPreview()\">{{ 'changeCredentials.btnPassword' | translate }}</button>\n      </div>\n      <div [className]=\"changePasswordEnable ? '' : 'hide'\">\n        <div class=\"fix-mat-form-field\">\n          <mat-form-field class=\"full-with-field\" appearance=\"outline\">\n            <input matInput placeholder=\"{{ 'changeCredentials.passwordOld' | translate }}\" [(ngModel)]=\"password\" [formControl]=\"passwordFormControl\">\n            <!--<mat-error *ngIf=\"passwordFormControl.invalid\">{{getRequiredErrorMessage('password')}}</mat-error>-->\n          </mat-form-field>\n        </div>\n\n        <div class=\"fix-mat-form-field\">\n          <mat-form-field class=\"full-with-field\" appearance=\"outline\">\n            <input matInput placeholder=\"{{ 'changeCredentials.passwordNew' | translate }}\" [(ngModel)]=\"newPassword\" [formControl]=\"newPasswordFormControl\">\n            <mat-error *ngIf=\"newPasswordFormControl.invalid\">{{getPasswordErrorMessage()}}</mat-error>\n          </mat-form-field>\n        </div>\n\n        <div class=\"fix-mat-form-field\">\n          <mat-form-field class=\"full-with-field\" appearance=\"outline\">\n            <input matInput placeholder=\"{{ 'changeCredentials.passwordConfirm' | translate }}\" [(ngModel)]=\"newConfirmPassword\" [formControl]=\"newConfirmPasswordFormControl\">\n            <mat-error *ngIf=\"newConfirmPasswordFormControl.invalid\">{{getConfirmPasswordErrorMessage()}}</mat-error>\n          </mat-form-field>\n        </div>\n      </div>\n\n      <div class=\"form-preview\" *ngIf=\"!changeUsernameEnable && !changeEmailEnable && !changePasswordEnable && !changeLanguageEnable\">\n          <h2>{{ 'changeCredentials.language' | translate }}:</h2>\n          <p *ngIf=\"languageService.getCurrentLanguageAsString() === 'en'\">English</p>\n          <p *ngIf=\"languageService.getCurrentLanguageAsString() === 'de'\">Deutsch</p>\n          <button class=\"btnPreview\" *ngIf=\"languageService.getCurrentLanguageAsString() === 'en'\" (click)=\"useLanguage('de')\">{{ 'changeCredentials.btnLanguage' | translate }}</button>\n          <button class=\"btnPreview\" *ngIf=\"languageService.getCurrentLanguageAsString() === 'de'\" (click)=\"useLanguage('en')\">{{ 'changeCredentials.btnLanguage' | translate }}</button>\n     </div>\n\n      <div class=\"error\"><mat-error *ngIf=\"wrongCredChange\">{{getCredChangeErrorMessage()}}</mat-error></div> \n      <div class=\"error\"><mat-error *ngIf=\"existingCred\">{{getCredChangeExistingCred()}}</mat-error></div> \n\n      <button class=\"btnSave\" [disabled]=\"changeForm.invalid\" (click)=\"submitCredentialsChange()\" *ngIf=\"changeUsernameEnable || changeEmailEnable || changePasswordEnable\">{{ 'changeCredentials.btnSave' | translate }}</button>\n      <button class=\"btnCancel\" (click)=\"cancelCredentialsChange()\" *ngIf=\"changeUsernameEnable || changeEmailEnable || changePasswordEnable\">{{ 'changeCredentials.btnCancel' | translate }}</button>\n    </form>\n    <button class=\"btnDelete\" (click)=\"deleteAccountOfUser()\" *ngIf=\"!changeUsernameEnable && !changeEmailEnable && !changePasswordEnable && !changeLanguageEnable\">{{ 'changeCredentials.btnDelete' | translate }}</button>\n  </div>\n</div>\n"

/***/ }),

/***/ "./src/app/components/change-credentials/change-credentials.component.ts":
/*!*******************************************************************************!*\
  !*** ./src/app/components/change-credentials/change-credentials.component.ts ***!
  \*******************************************************************************/
/*! exports provided: ChangeCredentialsComponent */
/***/ (function(module, __webpack_exports__, __webpack_require__) {

"use strict";
__webpack_require__.r(__webpack_exports__);
/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, "ChangeCredentialsComponent", function() { return ChangeCredentialsComponent; });
/* harmony import */ var _angular_core__WEBPACK_IMPORTED_MODULE_0__ = __webpack_require__(/*! @angular/core */ "./node_modules/@angular/core/fesm5/core.js");
/* harmony import */ var _angular_router__WEBPACK_IMPORTED_MODULE_1__ = __webpack_require__(/*! @angular/router */ "./node_modules/@angular/router/fesm5/router.js");
/* harmony import */ var _WindowRef__WEBPACK_IMPORTED_MODULE_2__ = __webpack_require__(/*! ../../WindowRef */ "./src/app/WindowRef.ts");
/* harmony import */ var _store_actions_UserActions__WEBPACK_IMPORTED_MODULE_3__ = __webpack_require__(/*! ../../store/actions/UserActions */ "./src/app/store/actions/UserActions.ts");
/* harmony import */ var _services_native_native_communication_service__WEBPACK_IMPORTED_MODULE_4__ = __webpack_require__(/*! ../../services/native/native-communication.service */ "./src/app/services/native/native-communication.service.ts");
/* harmony import */ var _angular_forms__WEBPACK_IMPORTED_MODULE_5__ = __webpack_require__(/*! @angular/forms */ "./node_modules/@angular/forms/fesm5/forms.js");
/* harmony import */ var _angular_material__WEBPACK_IMPORTED_MODULE_6__ = __webpack_require__(/*! @angular/material */ "./node_modules/@angular/material/esm5/material.es5.js");
/* harmony import */ var _delete_dialog_delete_dialog_component__WEBPACK_IMPORTED_MODULE_7__ = __webpack_require__(/*! ../delete-dialog/delete-dialog.component */ "./src/app/components/delete-dialog/delete-dialog.component.ts");
/* harmony import */ var _services_transmission_service__WEBPACK_IMPORTED_MODULE_8__ = __webpack_require__(/*! ../../services/transmission.service */ "./src/app/services/transmission.service.ts");
/* harmony import */ var _services_alert_service__WEBPACK_IMPORTED_MODULE_9__ = __webpack_require__(/*! ../../services/alert.service */ "./src/app/services/alert.service.ts");
/* harmony import */ var _ngx_translate_core__WEBPACK_IMPORTED_MODULE_10__ = __webpack_require__(/*! @ngx-translate/core */ "./node_modules/@ngx-translate/core/fesm5/ngx-translate-core.js");
/* harmony import */ var _config_LanguageTypes__WEBPACK_IMPORTED_MODULE_11__ = __webpack_require__(/*! ../../config/LanguageTypes */ "./src/app/config/LanguageTypes.ts");
/* harmony import */ var _services_language_service__WEBPACK_IMPORTED_MODULE_12__ = __webpack_require__(/*! ../../services/language.service */ "./src/app/services/language.service.ts");
var __decorate = (undefined && undefined.__decorate) || function (decorators, target, key, desc) {
    var c = arguments.length, r = c < 3 ? target : desc === null ? desc = Object.getOwnPropertyDescriptor(target, key) : desc, d;
    if (typeof Reflect === "object" && typeof Reflect.decorate === "function") r = Reflect.decorate(decorators, target, key, desc);
    else for (var i = decorators.length - 1; i >= 0; i--) if (d = decorators[i]) r = (c < 3 ? d(r) : c > 3 ? d(target, key, r) : d(target, key)) || r;
    return c > 3 && r && Object.defineProperty(target, key, r), r;
};
var __metadata = (undefined && undefined.__metadata) || function (k, v) {
    if (typeof Reflect === "object" && typeof Reflect.metadata === "function") return Reflect.metadata(k, v);
};
var __param = (undefined && undefined.__param) || function (paramIndex, decorator) {
    return function (target, key) { decorator(target, key, paramIndex); }
};














var ChangeCredentialsComponent = /** @class */ (function () {
    function ChangeCredentialsComponent(router, transmissionService, winRef, appStore, userActions, nativeCommunicationService, fb, dialog, alertService, translate, languageService, snackBar) {
        var _this = this;
        this.router = router;
        this.transmissionService = transmissionService;
        this.winRef = winRef;
        this.appStore = appStore;
        this.userActions = userActions;
        this.nativeCommunicationService = nativeCommunicationService;
        this.fb = fb;
        this.dialog = dialog;
        this.alertService = alertService;
        this.translate = translate;
        this.languageService = languageService;
        this.snackBar = snackBar;
        this.changeUsernameEnable = false;
        this.changeEmailEnable = false;
        this.changePasswordEnable = false;
        this.changeLanguageEnable = false;
        this.subscriptionChangeCred = this.alertService.getMessageChangedCred().subscribe(function (message) {
            if (message) {
                var config = new _angular_material__WEBPACK_IMPORTED_MODULE_6__["MatSnackBarConfig"]();
                config.duration = 3000;
                config.panelClass = ['success-snackbar'];
                _this.snackBar.open('You changed your credentials successfully', 'OK', config);
            }
            else {
                _this.wrongCredChange = true;
            }
        });
        this.subscriptionExistingChangeCred = this.alertService.getMessageExistingCredentialsOnChange().subscribe(function (message) {
            _this.existingCred = message;
        });
    }
    ChangeCredentialsComponent.prototype.submitCredentialsChange = function () {
        if (this.nameFormControl.value === undefined || this.nameFormControl.value === '') {
            this.transmissionService.changeName = undefined;
        }
        else {
            this.transmissionService.changeName = this.nameFormControl.value;
            this.changeName = this.nameFormControl.value;
        }
        if (this.emailFormControl.value === undefined || this.emailFormControl.value === '') {
            this.transmissionService.changeEmail = undefined;
        }
        else {
            this.transmissionService.changeEmail = this.emailFormControl.value;
            this.changeEmail = this.emailFormControl.value;
        }
        if (this.passwordFormControl.value === undefined || this.passwordFormControl.value === '') {
            this.transmissionService.changeOldPassword = undefined;
        }
        else {
            this.transmissionService.changeOldPassword = this.passwordFormControl.value;
        }
        if (this.newPasswordFormControl.value === undefined || this.newPasswordFormControl.value === '') {
            this.transmissionService.changeNewPassword = undefined;
        }
        else {
            this.transmissionService.changeNewPassword = this.newPasswordFormControl.value;
        }
        this.transmissionService.transmitUserCredentialChange();
        this.changeUsernameEnable = false;
        this.changeEmailEnable = false;
        this.changePasswordEnable = false;
        this.changeLanguageEnable = false;
    };
    ChangeCredentialsComponent.prototype.ngOnInit = function () {
        var state = this.appStore.getState();
        this.changeName = state.user.name;
        this.oldPassword = '';
        this.changeEmail = state.user.email;
        console.log('cred name ' + this.changeName + ' email ' + this.changeEmail);
        this.nameFormControl = new _angular_forms__WEBPACK_IMPORTED_MODULE_5__["FormControl"](this.changeName);
        this.emailFormControl = new _angular_forms__WEBPACK_IMPORTED_MODULE_5__["FormControl"](this.changeEmail);
        this.passwordFormControl = new _angular_forms__WEBPACK_IMPORTED_MODULE_5__["FormControl"]('');
        this.newPasswordFormControl = new _angular_forms__WEBPACK_IMPORTED_MODULE_5__["FormControl"]('', [
            _angular_forms__WEBPACK_IMPORTED_MODULE_5__["Validators"].pattern('(?=.*[0-9])(?=.*[A-Z])(?=.*[a-z])(?=.*[!@#$%^*&?)§(\/])[A-Za-z0-9!@#$%^*&?)§(\/].{5,}')
        ]);
        this.newConfirmPasswordFormControl = new _angular_forms__WEBPACK_IMPORTED_MODULE_5__["FormControl"]('');
        this.changeForm = new _angular_forms__WEBPACK_IMPORTED_MODULE_5__["FormGroup"]({
            name: this.nameFormControl,
            email: this.emailFormControl,
            password: this.passwordFormControl,
            newPassword: this.newPasswordFormControl,
            newConfirmPassword: this.newConfirmPasswordFormControl
        });
        this.changeForm.get('newConfirmPassword').setValidators(this.matchingpassword('newPassword'));
        this.language = this.languageService.getCurrentLanguageAsString();
    };
    ChangeCredentialsComponent.prototype.getPasswordErrorMessage = function () {
        return this.newPasswordFormControl.hasError('required') ? 'You must enter a value' :
            this.newPasswordFormControl.hasError('pattern') ?
                'Please use at least 6 characters with at least 1 upper case, 1 lower case, ' +
                    '1 number and 1 special character! Example: ! $ § % & / ( ) = ?' : '';
    };
    ChangeCredentialsComponent.prototype.getConfirmPasswordErrorMessage = function () {
        return this.newConfirmPasswordFormControl.hasError('required') ? 'You must enter a value' :
            this.newConfirmPasswordFormControl.hasError('matchingpassword') ? 'The password is not the same' : 'The password is not the same';
    };
    ChangeCredentialsComponent.prototype.getRequiredErrorMessage = function (field) {
        return this.changeForm.get(field).hasError('required') ? 'You must enter a value' : '';
    };
    ChangeCredentialsComponent.prototype.matchingpassword = function (field) {
        return function (control) {
            var group = control.parent;
            var fieldToCompare = group.get(field);
            var notMatching;
            notMatching = !(String(fieldToCompare.value) === String(control.value) && String(control.value) !== '');
            return notMatching ? { 'matching': { value: control.value } } : null;
        };
    };
    ChangeCredentialsComponent.prototype.deleteAccountOfUser = function () {
        var _this = this;
        var dialogRef = this.dialog.open(_delete_dialog_delete_dialog_component__WEBPACK_IMPORTED_MODULE_7__["DeleteDialogComponent"], { data: { username: this.appStore.getState().user.name },
            disableClose: true,
            autoFocus: false
        });
        dialogRef.afterClosed().subscribe(function (result) {
            if (result === 'confirm') {
                _this.transmissionService.deleteUserAccount();
            }
            else {
                console.log('Account NOT deleted!');
            }
        });
    };
    ChangeCredentialsComponent.prototype.getCredChangeErrorMessage = function (field) {
        return 'The credentials were not changed correctly.';
    };
    ChangeCredentialsComponent.prototype.getCredChangeExistingCred = function (field) {
        return 'These credentials are already taken.';
    };
    ChangeCredentialsComponent.prototype.useLanguage = function (language) {
        this.translate.use(language);
        if (language === 'de') {
            this.languageService.transmitChangeUserLanguage(_config_LanguageTypes__WEBPACK_IMPORTED_MODULE_11__["DE"]);
        }
        else {
            this.languageService.transmitChangeUserLanguage(_config_LanguageTypes__WEBPACK_IMPORTED_MODULE_11__["ENG"]);
        }
        this.language = language;
    };
    ChangeCredentialsComponent.prototype.closeWindow = function () {
        var _this = this;
        if (!this.changeUsernameEnable && !this.changeEmailEnable && !this.changePasswordEnable && !this.changeLanguageEnable) {
            this.router.navigate(['mainview']).then(function () {
                _this.nativeCommunicationService.sendToNative('Main View', 'print');
            });
        }
    };
    ChangeCredentialsComponent.prototype.changeUsernamePreview = function () {
        this.changeUsernameEnable = true;
        this.changeEmailEnable = false;
        this.changePasswordEnable = false;
        this.changeLanguageEnable = false;
    };
    ChangeCredentialsComponent.prototype.changeEmailPreview = function () {
        this.changeEmailEnable = true;
        this.changeUsernameEnable = false;
        this.changePasswordEnable = false;
        this.changeLanguageEnable = false;
    };
    ChangeCredentialsComponent.prototype.changePasswordPreview = function () {
        this.changePasswordEnable = true;
        this.changeUsernameEnable = false;
        this.changeEmailEnable = false;
        this.changeLanguageEnable = false;
    };
    ChangeCredentialsComponent.prototype.changeLanguagePreview = function () {
        this.changeLanguageEnable = true;
        this.changeUsernameEnable = false;
        this.changeEmailEnable = false;
        this.changePasswordEnable = false;
    };
    ChangeCredentialsComponent.prototype.cancelCredentialsChange = function () {
        this.changeLanguageEnable = false;
        this.changeUsernameEnable = false;
        this.changeEmailEnable = false;
        this.changePasswordEnable = false;
    };
    ChangeCredentialsComponent = __decorate([
        Object(_angular_core__WEBPACK_IMPORTED_MODULE_0__["Component"])({
            selector: 'app-change-credentials',
            template: __webpack_require__(/*! ./change-credentials.component.html */ "./src/app/components/change-credentials/change-credentials.component.html"),
            styles: [__webpack_require__(/*! ./change-credentials.component.css */ "./src/app/components/change-credentials/change-credentials.component.css")]
        }),
        Object(_angular_core__WEBPACK_IMPORTED_MODULE_0__["Injectable"])(),
        __param(3, Object(_angular_core__WEBPACK_IMPORTED_MODULE_0__["Inject"])('AppStore')),
        __metadata("design:paramtypes", [_angular_router__WEBPACK_IMPORTED_MODULE_1__["Router"],
            _services_transmission_service__WEBPACK_IMPORTED_MODULE_8__["TransmissionService"],
            _WindowRef__WEBPACK_IMPORTED_MODULE_2__["WindowRef"], Object, _store_actions_UserActions__WEBPACK_IMPORTED_MODULE_3__["UserActions"],
            _services_native_native_communication_service__WEBPACK_IMPORTED_MODULE_4__["NativeCommunicationService"],
            _angular_forms__WEBPACK_IMPORTED_MODULE_5__["FormBuilder"],
            _angular_material__WEBPACK_IMPORTED_MODULE_6__["MatDialog"],
            _services_alert_service__WEBPACK_IMPORTED_MODULE_9__["AlertService"],
            _ngx_translate_core__WEBPACK_IMPORTED_MODULE_10__["TranslateService"],
            _services_language_service__WEBPACK_IMPORTED_MODULE_12__["LanguageService"],
            _angular_material__WEBPACK_IMPORTED_MODULE_6__["MatSnackBar"]])
    ], ChangeCredentialsComponent);
    return ChangeCredentialsComponent;
}());



/***/ }),

/***/ "./src/app/components/content-interactive/content-interactive.component.css":
/*!**********************************************************************************!*\
  !*** ./src/app/components/content-interactive/content-interactive.component.css ***!
  \**********************************************************************************/
/*! no static exports found */
/***/ (function(module, exports) {

module.exports = "@font-face {\n    font-family: 'OpenSans';\n    src: url('OpenSans-Regular.ttf');\n  }\n  \n  @font-face {\n    font-family: 'Vollkorn';\n    src: url('Vollkorn-Bold.ttf');\n  }\n  \n  h1{\n    font-family: 'Vollkorn', Times, serif;\n    margin: 20px 0;\n    font-size: 1.6em;\n}\n  \n  .btnJoin button,\np{\n    font-family: 'OpenSans', Helvetica, Arial, Sans-Serif;\n    margin: 10px 0;\n    font-size: 1em;\n}\n  \n  a{\n    color: #0057a3;\n    text-decoration: underline;\n}\n  \n  .wrapper {\n    padding: 0;\n    margin: 0;\n    position: absolute;\n    width: 100%;\n    top: 90px;\n}\n  \n  .wrapperContent{\n    width: 70%;\n    margin: 20px auto;\n}\n  \n  .btnJoin{\n    position: fixed;\n    bottom: 0;\n    z-index: 5;\n    width: 100%;\n    height: 80px;\n    margin: 0;\n    padding: 0;\n    border-top: 15px solid #494949;\n    color: #ffffff;\n}\n  \n  .btnJoin .ico{\n    height: 50px;\n    width: 50px;\n    float:left;\n    background-image: url('WappenIcons.png');\n    background-position: -10px 50px;\n    background-size: 1000%;\n    margin: 15px;\n}\n  \n  .btnJoin .msg{\n    margin: 15px 15px 0px 0px;\n}\n  \n  .btnJoin button{\n    outline: none;\n    border: none;\n    position: absolute;\n    height: 80px;\n    width: 100%;\n    top:0px;\n    left: 80px;\n    text-align: left;\n    margin: 0;\n    padding: 0;\n    color: #ffffff;\n    background: transparent; \n    font-size: 1.3em;\n}\n  \n  .btnBack{\n  position:absolute;\n  border: none;\n  outline: none;\n  height: 50px;\n  background-color: #494949;\n  margin: 20px 20px 0px 20px;\n  background-size: 50px;\n  width: 100px;\n  background-position: 10%;\n  background-repeat: no-repeat;\n  z-index: -1;\n}\n  \n  .btnBack img{\n    -webkit-filter: invert(99%) sepia(7%) saturate(90%) hue-rotate(226deg) brightness(120%) contrast(100%);\n            filter: invert(99%) sepia(7%) saturate(90%) hue-rotate(226deg) brightness(120%) contrast(100%);\n    height: 36px;\n    margin: 7px 0px 0px 50px;\n  }\n  \n  .btnJoinDisabled{\n    position: fixed;\n    bottom: 0;\n    z-index: 6;\n    height: 95px;\n    width: 100%;\n    background: #666666;\n    opacity: 0.5;\n  }\n  \n  .Sec_10 .btnJoin{ background-color: #823a3a; }\n  \n  .Sec_20 .btnJoin{ background-color: #305978; }\n  \n  .Sec_30 .btnJoin{ background-color: #755300; }\n  \n  .Sec_40 .btnJoin{ background-color: #1d635d; }\n  \n  .Sec_50 .btnJoin{ background-color: #5c416a; }\n  \n  .Sec_60 .btnJoin{ background-color: #32633a; }\n  \n  .Sec_10 .note{ text-align: center; color: #823a3a; }\n  \n  .Sec_20 .note{ text-align: center; color: #305978; }\n  \n  .Sec_30 .note{ text-align: center; color: #755300; }\n  \n  .Sec_40 .note{ text-align: center; color: #1d635d; }\n  \n  .Sec_50 .note{ text-align: center; color: #5c416a; }\n  \n  .Sec_60 .note{ text-align: center; color: #32633a; }\n  \n  @media (max-width: 370px) {\n    .btnJoin button{\n        font-size: 1em;\n    }\n\n    .btnJoin p{\n        font-size: 0.8em;\n    }\n  }\n/*# sourceMappingURL=data:application/json;base64,eyJ2ZXJzaW9uIjozLCJzb3VyY2VzIjpbInNyYy9hcHAvY29tcG9uZW50cy9jb250ZW50LWludGVyYWN0aXZlL2NvbnRlbnQtaW50ZXJhY3RpdmUuY29tcG9uZW50LmNzcyJdLCJuYW1lcyI6W10sIm1hcHBpbmdzIjoiQUFBQTtJQUNJLHVCQUF1QjtJQUN2QixnQ0FBZ0U7RUFDbEU7O0VBRUE7SUFDRSx1QkFBdUI7SUFDdkIsNkJBQTREO0VBQzlEOztFQUVBO0lBQ0UscUNBQXFDO0lBQ3JDLGNBQWM7SUFDZCxnQkFBZ0I7QUFDcEI7O0VBRUE7O0lBRUkscURBQXFEO0lBQ3JELGNBQWM7SUFDZCxjQUFjO0FBQ2xCOztFQUlBO0lBQ0ksY0FBYztJQUNkLDBCQUEwQjtBQUM5Qjs7RUFFQTtJQUNJLFVBQVU7SUFDVixTQUFTO0lBQ1Qsa0JBQWtCO0lBQ2xCLFdBQVc7SUFDWCxTQUFTO0FBQ2I7O0VBRUE7SUFDSSxVQUFVO0lBQ1YsaUJBQWlCO0FBQ3JCOztFQUVBO0lBQ0ksZUFBZTtJQUNmLFNBQVM7SUFDVCxVQUFVO0lBQ1YsV0FBVztJQUNYLFlBQVk7SUFDWixTQUFTO0lBQ1QsVUFBVTtJQUNWLDhCQUE4QjtJQUM5QixjQUFjO0FBQ2xCOztFQUVBO0lBQ0ksWUFBWTtJQUNaLFdBQVc7SUFDWCxVQUFVO0lBQ1Ysd0NBQThEO0lBQzlELCtCQUErQjtJQUMvQixzQkFBc0I7SUFDdEIsWUFBWTtBQUNoQjs7RUFFQTtJQUNJLHlCQUF5QjtBQUM3Qjs7RUFFQTtJQUNJLGFBQWE7SUFDYixZQUFZO0lBQ1osa0JBQWtCO0lBQ2xCLFlBQVk7SUFDWixXQUFXO0lBQ1gsT0FBTztJQUNQLFVBQVU7SUFDVixnQkFBZ0I7SUFDaEIsU0FBUztJQUNULFVBQVU7SUFDVixjQUFjO0lBQ2QsdUJBQXVCO0lBQ3ZCLGdCQUFnQjtBQUNwQjs7RUFFQTtFQUNFLGlCQUFpQjtFQUNqQixZQUFZO0VBQ1osYUFBYTtFQUNiLFlBQVk7RUFDWix5QkFBeUI7RUFDekIsMEJBQTBCO0VBQzFCLHFCQUFxQjtFQUNyQixZQUFZO0VBQ1osd0JBQXdCO0VBQ3hCLDRCQUE0QjtFQUM1QixXQUFXO0FBQ2I7O0VBRUE7SUFDSSxzR0FBOEY7WUFBOUYsOEZBQThGO0lBQzlGLFlBQVk7SUFDWix3QkFBd0I7RUFDMUI7O0VBRUE7SUFDRSxlQUFlO0lBQ2YsU0FBUztJQUNULFVBQVU7SUFDVixZQUFZO0lBQ1osV0FBVztJQUNYLG1CQUFtQjtJQUNuQixZQUFZO0VBQ2Q7O0VBRUYsa0JBQWtCLHlCQUF5QixFQUFFOztFQUM3QyxrQkFBa0IseUJBQXlCLEVBQUU7O0VBQzdDLGtCQUFrQix5QkFBeUIsRUFBRTs7RUFDN0Msa0JBQWtCLHlCQUF5QixFQUFFOztFQUM3QyxrQkFBa0IseUJBQXlCLEVBQUU7O0VBQzdDLGtCQUFrQix5QkFBeUIsRUFBRTs7RUFFN0MsZUFBZSxrQkFBa0IsRUFBRSxjQUFjLEVBQUU7O0VBQ25ELGVBQWUsa0JBQWtCLEVBQUUsY0FBYyxFQUFFOztFQUNuRCxlQUFlLGtCQUFrQixFQUFFLGNBQWMsRUFBRTs7RUFDbkQsZUFBZSxrQkFBa0IsRUFBRSxjQUFjLEVBQUU7O0VBQ25ELGVBQWUsa0JBQWtCLEVBQUUsY0FBYyxFQUFFOztFQUNuRCxlQUFlLGtCQUFrQixFQUFFLGNBQWMsRUFBRTs7RUFHbkQ7SUFDSTtRQUNJLGNBQWM7SUFDbEI7O0lBRUE7UUFDSSxnQkFBZ0I7SUFDcEI7RUFDRiIsImZpbGUiOiJzcmMvYXBwL2NvbXBvbmVudHMvY29udGVudC1pbnRlcmFjdGl2ZS9jb250ZW50LWludGVyYWN0aXZlLmNvbXBvbmVudC5jc3MiLCJzb3VyY2VzQ29udGVudCI6WyJAZm9udC1mYWNlIHtcbiAgICBmb250LWZhbWlseTogJ09wZW5TYW5zJztcbiAgICBzcmM6IHVybChcIi4uLy4uLy4uL2Fzc2V0cy9mb250cy9PcGVuX1NhbnMvT3BlblNhbnMtUmVndWxhci50dGZcIik7XG4gIH1cbiAgXG4gIEBmb250LWZhY2Uge1xuICAgIGZvbnQtZmFtaWx5OiAnVm9sbGtvcm4nO1xuICAgIHNyYzogdXJsKFwiLi4vLi4vLi4vYXNzZXRzL2ZvbnRzL1ZvbGxrb3JuL1ZvbGxrb3JuLUJvbGQudHRmXCIpO1xuICB9XG5cbiAgaDF7XG4gICAgZm9udC1mYW1pbHk6ICdWb2xsa29ybicsIFRpbWVzLCBzZXJpZjtcbiAgICBtYXJnaW46IDIwcHggMDtcbiAgICBmb250LXNpemU6IDEuNmVtO1xufVxuXG4uYnRuSm9pbiBidXR0b24sXG5we1xuICAgIGZvbnQtZmFtaWx5OiAnT3BlblNhbnMnLCBIZWx2ZXRpY2EsIEFyaWFsLCBTYW5zLVNlcmlmO1xuICAgIG1hcmdpbjogMTBweCAwO1xuICAgIGZvbnQtc2l6ZTogMWVtO1xufVxuXG5cblxuYXtcbiAgICBjb2xvcjogIzAwNTdhMztcbiAgICB0ZXh0LWRlY29yYXRpb246IHVuZGVybGluZTtcbn1cbiAgXG4ud3JhcHBlciB7XG4gICAgcGFkZGluZzogMDtcbiAgICBtYXJnaW46IDA7XG4gICAgcG9zaXRpb246IGFic29sdXRlO1xuICAgIHdpZHRoOiAxMDAlO1xuICAgIHRvcDogOTBweDtcbn1cblxuLndyYXBwZXJDb250ZW50e1xuICAgIHdpZHRoOiA3MCU7XG4gICAgbWFyZ2luOiAyMHB4IGF1dG87XG59XG5cbi5idG5Kb2lue1xuICAgIHBvc2l0aW9uOiBmaXhlZDtcbiAgICBib3R0b206IDA7XG4gICAgei1pbmRleDogNTtcbiAgICB3aWR0aDogMTAwJTtcbiAgICBoZWlnaHQ6IDgwcHg7XG4gICAgbWFyZ2luOiAwO1xuICAgIHBhZGRpbmc6IDA7XG4gICAgYm9yZGVyLXRvcDogMTVweCBzb2xpZCAjNDk0OTQ5O1xuICAgIGNvbG9yOiAjZmZmZmZmO1xufVxuXG4uYnRuSm9pbiAuaWNve1xuICAgIGhlaWdodDogNTBweDtcbiAgICB3aWR0aDogNTBweDtcbiAgICBmbG9hdDpsZWZ0O1xuICAgIGJhY2tncm91bmQtaW1hZ2U6IHVybChcIi4uLy4uLy4uL2Fzc2V0cy9pY29ucy9XYXBwZW5JY29ucy5wbmdcIik7XG4gICAgYmFja2dyb3VuZC1wb3NpdGlvbjogLTEwcHggNTBweDtcbiAgICBiYWNrZ3JvdW5kLXNpemU6IDEwMDAlO1xuICAgIG1hcmdpbjogMTVweDtcbn1cblxuLmJ0bkpvaW4gLm1zZ3tcbiAgICBtYXJnaW46IDE1cHggMTVweCAwcHggMHB4O1xufVxuXG4uYnRuSm9pbiBidXR0b257XG4gICAgb3V0bGluZTogbm9uZTtcbiAgICBib3JkZXI6IG5vbmU7XG4gICAgcG9zaXRpb246IGFic29sdXRlO1xuICAgIGhlaWdodDogODBweDtcbiAgICB3aWR0aDogMTAwJTtcbiAgICB0b3A6MHB4O1xuICAgIGxlZnQ6IDgwcHg7XG4gICAgdGV4dC1hbGlnbjogbGVmdDtcbiAgICBtYXJnaW46IDA7XG4gICAgcGFkZGluZzogMDtcbiAgICBjb2xvcjogI2ZmZmZmZjtcbiAgICBiYWNrZ3JvdW5kOiB0cmFuc3BhcmVudDsgXG4gICAgZm9udC1zaXplOiAxLjNlbTtcbn1cblxuLmJ0bkJhY2t7XG4gIHBvc2l0aW9uOmFic29sdXRlO1xuICBib3JkZXI6IG5vbmU7XG4gIG91dGxpbmU6IG5vbmU7XG4gIGhlaWdodDogNTBweDtcbiAgYmFja2dyb3VuZC1jb2xvcjogIzQ5NDk0OTtcbiAgbWFyZ2luOiAyMHB4IDIwcHggMHB4IDIwcHg7XG4gIGJhY2tncm91bmQtc2l6ZTogNTBweDtcbiAgd2lkdGg6IDEwMHB4O1xuICBiYWNrZ3JvdW5kLXBvc2l0aW9uOiAxMCU7XG4gIGJhY2tncm91bmQtcmVwZWF0OiBuby1yZXBlYXQ7XG4gIHotaW5kZXg6IC0xO1xufVxuXG4uYnRuQmFjayBpbWd7XG4gICAgZmlsdGVyOiBpbnZlcnQoOTklKSBzZXBpYSg3JSkgc2F0dXJhdGUoOTAlKSBodWUtcm90YXRlKDIyNmRlZykgYnJpZ2h0bmVzcygxMjAlKSBjb250cmFzdCgxMDAlKTtcbiAgICBoZWlnaHQ6IDM2cHg7XG4gICAgbWFyZ2luOiA3cHggMHB4IDBweCA1MHB4O1xuICB9XG5cbiAgLmJ0bkpvaW5EaXNhYmxlZHtcbiAgICBwb3NpdGlvbjogZml4ZWQ7XG4gICAgYm90dG9tOiAwO1xuICAgIHotaW5kZXg6IDY7XG4gICAgaGVpZ2h0OiA5NXB4O1xuICAgIHdpZHRoOiAxMDAlO1xuICAgIGJhY2tncm91bmQ6ICM2NjY2NjY7XG4gICAgb3BhY2l0eTogMC41O1xuICB9XG5cbi5TZWNfMTAgLmJ0bkpvaW57IGJhY2tncm91bmQtY29sb3I6ICM4MjNhM2E7IH1cbi5TZWNfMjAgLmJ0bkpvaW57IGJhY2tncm91bmQtY29sb3I6ICMzMDU5Nzg7IH1cbi5TZWNfMzAgLmJ0bkpvaW57IGJhY2tncm91bmQtY29sb3I6ICM3NTUzMDA7IH1cbi5TZWNfNDAgLmJ0bkpvaW57IGJhY2tncm91bmQtY29sb3I6ICMxZDYzNWQ7IH1cbi5TZWNfNTAgLmJ0bkpvaW57IGJhY2tncm91bmQtY29sb3I6ICM1YzQxNmE7IH1cbi5TZWNfNjAgLmJ0bkpvaW57IGJhY2tncm91bmQtY29sb3I6ICMzMjYzM2E7IH1cblxuLlNlY18xMCAubm90ZXsgdGV4dC1hbGlnbjogY2VudGVyOyBjb2xvcjogIzgyM2EzYTsgfVxuLlNlY18yMCAubm90ZXsgdGV4dC1hbGlnbjogY2VudGVyOyBjb2xvcjogIzMwNTk3ODsgfVxuLlNlY18zMCAubm90ZXsgdGV4dC1hbGlnbjogY2VudGVyOyBjb2xvcjogIzc1NTMwMDsgfVxuLlNlY180MCAubm90ZXsgdGV4dC1hbGlnbjogY2VudGVyOyBjb2xvcjogIzFkNjM1ZDsgfVxuLlNlY181MCAubm90ZXsgdGV4dC1hbGlnbjogY2VudGVyOyBjb2xvcjogIzVjNDE2YTsgfVxuLlNlY182MCAubm90ZXsgdGV4dC1hbGlnbjogY2VudGVyOyBjb2xvcjogIzMyNjMzYTsgfVxuXG5cbkBtZWRpYSAobWF4LXdpZHRoOiAzNzBweCkge1xuICAgIC5idG5Kb2luIGJ1dHRvbntcbiAgICAgICAgZm9udC1zaXplOiAxZW07XG4gICAgfVxuXG4gICAgLmJ0bkpvaW4gcHtcbiAgICAgICAgZm9udC1zaXplOiAwLjhlbTtcbiAgICB9XG4gIH0iXX0= */"

/***/ }),

/***/ "./src/app/components/content-interactive/content-interactive.component.html":
/*!***********************************************************************************!*\
  !*** ./src/app/components/content-interactive/content-interactive.component.html ***!
  \***********************************************************************************/
/*! no static exports found */
/***/ (function(module, exports) {

module.exports = "<div class=\"btnBack\"><img src=\"./assets/icons/Timeline/{{getSectionIcon(location.parentId)}}.png\" /></div>\n<div class=\"wrapper Sec_{{location.parentId}}\">\n  <div class=\"wrapperContent\">\n    <h1>{{location.description}}</h1>\n\n    <div *ngFor=\"let cont of location.contents\">\n      <p *ngIf=\"cont.contentTypeId == 1\">{{cont.content}}</p>\n      <img *ngIf=\"cont.contentTypeId == 2\" src=\"{{cont.content}}\" />\n    </div>\n\n    <p class=\"note\">{{ 'interactiveExhibit.interactiveExhibitMsg' | translate }}</p>\n  </div> \n\n  <div class=\"btnJoin\">\n    <div class=\"ico\"></div>\n    <div class=\"msg\">\n      <div *ngIf=\"!locationStatusNotAtLocation\">\n        <button *ngIf=\"location.id == 102\" (click)=\"playEducationQuiz()\">{{ 'interactiveExhibit.startButton' | translate }}</button>\n        <div *ngIf=\"location.id != 102\"><p>This exhibit is<br/>not available yet</p></div>\n      </div>\n      <div *ngIf=\"locationStatusNotAtLocation\"><p>{{ 'interactiveExhibit.notAtLocation' | translate }}</p></div>\n    </div>\n  </div>\n  <div class=\"btnJoinDisabled\" *ngIf=\"locationStatusNotAtLocation\"></div>\n</div>\n"

/***/ }),

/***/ "./src/app/components/content-interactive/content-interactive.component.ts":
/*!*********************************************************************************!*\
  !*** ./src/app/components/content-interactive/content-interactive.component.ts ***!
  \*********************************************************************************/
/*! exports provided: ContentInteractiveComponent */
/***/ (function(module, __webpack_exports__, __webpack_require__) {

"use strict";
__webpack_require__.r(__webpack_exports__);
/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, "ContentInteractiveComponent", function() { return ContentInteractiveComponent; });
/* harmony import */ var _angular_core__WEBPACK_IMPORTED_MODULE_0__ = __webpack_require__(/*! @angular/core */ "./node_modules/@angular/core/fesm5/core.js");
/* harmony import */ var _services_location_service__WEBPACK_IMPORTED_MODULE_1__ = __webpack_require__(/*! ../../services/location.service */ "./src/app/services/location.service.ts");
/* harmony import */ var _angular_router__WEBPACK_IMPORTED_MODULE_2__ = __webpack_require__(/*! @angular/router */ "./node_modules/@angular/router/fesm5/router.js");
/* harmony import */ var _services_native_native_communication_service__WEBPACK_IMPORTED_MODULE_3__ = __webpack_require__(/*! ../../services/native/native-communication.service */ "./src/app/services/native/native-communication.service.ts");
/* harmony import */ var _services_transmission_service__WEBPACK_IMPORTED_MODULE_4__ = __webpack_require__(/*! ../../services/transmission.service */ "./src/app/services/transmission.service.ts");
var __decorate = (undefined && undefined.__decorate) || function (decorators, target, key, desc) {
    var c = arguments.length, r = c < 3 ? target : desc === null ? desc = Object.getOwnPropertyDescriptor(target, key) : desc, d;
    if (typeof Reflect === "object" && typeof Reflect.decorate === "function") r = Reflect.decorate(decorators, target, key, desc);
    else for (var i = decorators.length - 1; i >= 0; i--) if (d = decorators[i]) r = (c < 3 ? d(r) : c > 3 ? d(target, key, r) : d(target, key)) || r;
    return c > 3 && r && Object.defineProperty(target, key, r), r;
};
var __metadata = (undefined && undefined.__metadata) || function (k, v) {
    if (typeof Reflect === "object" && typeof Reflect.metadata === "function") return Reflect.metadata(k, v);
};
var __param = (undefined && undefined.__param) || function (paramIndex, decorator) {
    return function (target, key) { decorator(target, key, paramIndex); }
};





var ContentInteractiveComponent = /** @class */ (function () {
    function ContentInteractiveComponent(locationService, router, transmissionService, nativeCommunicationService, appStore) {
        var _this = this;
        this.locationService = locationService;
        this.router = router;
        this.transmissionService = transmissionService;
        this.nativeCommunicationService = nativeCommunicationService;
        this.appStore = appStore;
        this.locationStatusNotAtLocation = false;
        this.currentSection = 'maximilian';
        this.sectionList = [
            { code: 10, icon: 'Trumpet', primaryColor: '#823a3a', secondaryColor: '#a85757' },
            { code: 20, icon: 'DocumentSword', primaryColor: '#305978', secondaryColor: '#4b799c' },
            { code: 30, icon: 'Maximilian', primaryColor: '#755300', secondaryColor: '#906e1b' },
            { code: 40, icon: 'Veil', primaryColor: '#1d635d', secondaryColor: '#3c7f7a' },
            { code: 50, icon: 'Shrine', primaryColor: '#5c416a', secondaryColor: '#785d86' },
            { code: 60, icon: 'Tombstone', primaryColor: '#32633a', secondaryColor: '#4c7d54' }
        ];
        this._unsubscribe = this.appStore.subscribe(function () {
            var state = _this.appStore.getState();
            _this.updateLocationInformation(state.currentLocation);
        });
        this._curLocSubscribe = this.locationService.currentLocation.subscribe(function (value) {
            _this.location = value;
        });
    }
    ContentInteractiveComponent.prototype.ngOnInit = function () {
        var state = this.appStore.getState();
        this.updateLocationInformation(state.currentLocation);
        if (state.closestExhibit !== this.location.id) {
            this.locationStatusNotAtLocation = true;
        }
    };
    ContentInteractiveComponent.prototype.updateLocationInformation = function (value) {
        this.location = value;
    };
    ContentInteractiveComponent.prototype.playEducationQuiz = function () {
        var _this = this;
        this.router.navigate(['educationQuiz']).then(function () {
            _this.nativeCommunicationService.sendToNative('Education Quiz', 'print');
        });
    };
    ContentInteractiveComponent.prototype.ngOnDestroy = function () {
        this._unsubscribe();
        this._curLocSubscribe.unsubscribe();
    };
    ContentInteractiveComponent.prototype.displayVersion = function (sectionId) {
        this.currentSection = sectionId;
    };
    ContentInteractiveComponent.prototype.getSectionIcon = function (sectionId) {
        var icon = '';
        this.sectionList.forEach(function (section) {
            if (section.code === sectionId) {
                icon = section.icon;
            }
        });
        return icon;
    };
    ContentInteractiveComponent = __decorate([
        Object(_angular_core__WEBPACK_IMPORTED_MODULE_0__["Component"])({
            selector: 'app-content-interactive',
            template: __webpack_require__(/*! ./content-interactive.component.html */ "./src/app/components/content-interactive/content-interactive.component.html"),
            styles: [__webpack_require__(/*! ./content-interactive.component.css */ "./src/app/components/content-interactive/content-interactive.component.css")]
        }),
        __param(4, Object(_angular_core__WEBPACK_IMPORTED_MODULE_0__["Inject"])('AppStore')),
        __metadata("design:paramtypes", [_services_location_service__WEBPACK_IMPORTED_MODULE_1__["LocationService"],
            _angular_router__WEBPACK_IMPORTED_MODULE_2__["Router"],
            _services_transmission_service__WEBPACK_IMPORTED_MODULE_4__["TransmissionService"],
            _services_native_native_communication_service__WEBPACK_IMPORTED_MODULE_3__["NativeCommunicationService"], Object])
    ], ContentInteractiveComponent);
    return ContentInteractiveComponent;
}());



/***/ }),

/***/ "./src/app/components/content-passive/content-passive.component.css":
/*!**************************************************************************!*\
  !*** ./src/app/components/content-passive/content-passive.component.css ***!
  \**************************************************************************/
/*! no static exports found */
/***/ (function(module, exports) {

module.exports = "@font-face {\n    font-family: 'OpenSans';\n    src: url('OpenSans-Regular.ttf');\n}\n\n@font-face {\n    font-family: 'Vollkorn';\n    src: url('Vollkorn-Bold.ttf');\n}\n\nh1{\n    font-family: 'Vollkorn', Times, serif;\n    margin: 20px 0;\n    font-size: 1.6em;\n}\n\np{\n    font-family: 'OpenSans', Helvetica, Arial, Sans-Serif;\n    margin: 10px 0;\n    font-size: 1em;\n}\n\na{\n    color: #0057a3;\n    text-decoration: underline;\n}\n\n.wrapper {\n    padding: 0;\n    margin: 0;\n    position: absolute;\n    width: 100%;\n    top: 90px;\n}\n\n.wrapperContent{\n    width: 70%;\n    margin: 20px auto;\n}\n\n.btnBack{\n    position:absolute;\n    border: none;\n    outline: none;\n    height: 50px;\n    background-color: #494949;\n    margin: 20px 20px 0px 20px;\n    background-size: 50px;\n    width: 100px;\n    background-position: 10%;\n    background-repeat: no-repeat;\n    z-index: -1;\n  }\n\n.btnBack img{\n      -webkit-filter: invert(99%) sepia(7%) saturate(90%) hue-rotate(226deg) brightness(120%) contrast(100%);\n              filter: invert(99%) sepia(7%) saturate(90%) hue-rotate(226deg) brightness(120%) contrast(100%);\n      height: 36px;\n      margin: 7px 0px 0px 50px;\n    }\n\n.timelineSectionNav{\n        position: fixed;\n        bottom: 0;\n        z-index: 5;\n        width: 100%;\n      }\n\n.timelineSectionNav ul{\n        list-style-type: none;\n        margin: 0;\n        padding: 0;\n        height: 80px;\n        border-top: 15px solid #494949;\n        background: #494949;\n      }\n\n.timelineSectionNav ul li{\n        background-color: #fff;\n        float: left;\n        width: 33.33%; \n        height: 100%;\n      }\n\n.timelineSectionNav ul li.selected{\n        background: #494949;\n      }\n\n.timelineSectionNav ul li button{\n        display: block;\n        margin: 5px;\n        width: 100%; \n        height: 70px;\n        border: none;\n        outline: none;\n        background-color: transparent;\n      }\n\n.timelineSectionNav ul li button img{\n        width: 45px; \n        height: 45px;\n        border-radius: 25px;\n        float: left;\n      }\n\n.timelineSectionNav ul li button p{\n        font-size: 0.85em;\n      }\n\n.Sec_10 .timelineSectionNav ul li button p { color: #823a3a; }\n\n.Sec_20 .timelineSectionNav ul li button p { color: #305978; }\n\n.Sec_30 .timelineSectionNav ul li button p { color: #755300; }\n\n.Sec_40 .timelineSectionNav ul li button p { color: #1d635d; }\n\n.Sec_50 .timelineSectionNav ul li button p { color: #5c416a; }\n\n.Sec_60 .timelineSectionNav ul li button p { color: #32633a; }\n\n.Sec_10 .selected_Sectiontill .till, .Sec_10 .selected_Sectionmaximilian .maximilian, .Sec_10 .selected_Sectionsunthaym .sunthaym{ background-color: #823a3a; }\n\n.Sec_20 .selected_Sectiontill .till, .Sec_20 .selected_Sectionmaximilian .maximilian, .Sec_20 .selected_Sectionsunthaym .sunthaym{ background-color: #305978; }\n\n.Sec_30 .selected_Sectiontill .till, .Sec_30 .selected_Sectionmaximilian .maximilian, .Sec_30 .selected_Sectionsunthaym .sunthaym{ background-color: #755300; }\n\n.Sec_40 .selected_Sectiontill .till, .Sec_40 .selected_Sectionmaximilian .maximilian, .Sec_40 .selected_Sectionsunthaym .sunthaym{ background-color: #1d635d; }\n\n.Sec_50 .selected_Sectiontill .till, .Sec_50 .selected_Sectionmaximilian .maximilian, .Sec_50 .selected_Sectionsunthaym .sunthaym{ background-color: #5c416a; }\n\n.Sec_60 .selected_Sectiontill .till, .Sec_60 .selected_Sectionmaximilian .maximilian, .Sec_60 .selected_Sectionsunthaym .sunthaym{ background-color: #32633a; }\n\n.selected_Sectiontill .till button p, \n.selected_Sectionmaximilian .maximilian button p, \n.selected_Sectionsunthaym .sunthaym button p{ \n    color: #ffffff !important;\n}\n\n@media (max-width: 370px) {\n        .timelineSectionNav ul li button p{\n            font-size: 0.7em;\n          }\n\n          .timelineSectionNav ul li button img{\n            width: 35px; \n            height: 35px;\n          }\n      }\n/*# sourceMappingURL=data:application/json;base64,eyJ2ZXJzaW9uIjozLCJzb3VyY2VzIjpbInNyYy9hcHAvY29tcG9uZW50cy9jb250ZW50LXBhc3NpdmUvY29udGVudC1wYXNzaXZlLmNvbXBvbmVudC5jc3MiXSwibmFtZXMiOltdLCJtYXBwaW5ncyI6IkFBQUE7SUFDSSx1QkFBdUI7SUFDdkIsZ0NBQWdFO0FBQ3BFOztBQUVBO0lBQ0ksdUJBQXVCO0lBQ3ZCLDZCQUE0RDtBQUNoRTs7QUFFQTtJQUNJLHFDQUFxQztJQUNyQyxjQUFjO0lBQ2QsZ0JBQWdCO0FBQ3BCOztBQUVBO0lBQ0kscURBQXFEO0lBQ3JELGNBQWM7SUFDZCxjQUFjO0FBQ2xCOztBQUVBO0lBQ0ksY0FBYztJQUNkLDBCQUEwQjtBQUM5Qjs7QUFFQTtJQUNJLFVBQVU7SUFDVixTQUFTO0lBQ1Qsa0JBQWtCO0lBQ2xCLFdBQVc7SUFDWCxTQUFTO0FBQ2I7O0FBRUE7SUFDSSxVQUFVO0lBQ1YsaUJBQWlCO0FBQ3JCOztBQUVBO0lBQ0ksaUJBQWlCO0lBQ2pCLFlBQVk7SUFDWixhQUFhO0lBQ2IsWUFBWTtJQUNaLHlCQUF5QjtJQUN6QiwwQkFBMEI7SUFDMUIscUJBQXFCO0lBQ3JCLFlBQVk7SUFDWix3QkFBd0I7SUFDeEIsNEJBQTRCO0lBQzVCLFdBQVc7RUFDYjs7QUFFQTtNQUNJLHNHQUE4RjtjQUE5Riw4RkFBOEY7TUFDOUYsWUFBWTtNQUNaLHdCQUF3QjtJQUMxQjs7QUFFQTtRQUNJLGVBQWU7UUFDZixTQUFTO1FBQ1QsVUFBVTtRQUNWLFdBQVc7TUFDYjs7QUFFQTtRQUNFLHFCQUFxQjtRQUNyQixTQUFTO1FBQ1QsVUFBVTtRQUNWLFlBQVk7UUFDWiw4QkFBOEI7UUFDOUIsbUJBQW1CO01BQ3JCOztBQUVBO1FBQ0Usc0JBQXNCO1FBQ3RCLFdBQVc7UUFDWCxhQUFhO1FBQ2IsWUFBWTtNQUNkOztBQUVBO1FBQ0UsbUJBQW1CO01BQ3JCOztBQUVBO1FBQ0UsY0FBYztRQUNkLFdBQVc7UUFDWCxXQUFXO1FBQ1gsWUFBWTtRQUNaLFlBQVk7UUFDWixhQUFhO1FBQ2IsNkJBQTZCO01BQy9COztBQUVBO1FBQ0UsV0FBVztRQUNYLFlBQVk7UUFDWixtQkFBbUI7UUFDbkIsV0FBVztNQUNiOztBQUVBO1FBQ0UsaUJBQWlCO01BQ25COztBQUVOLDZDQUE2QyxjQUFjLEVBQUU7O0FBQzdELDZDQUE2QyxjQUFjLEVBQUU7O0FBQzdELDZDQUE2QyxjQUFjLEVBQUU7O0FBQzdELDZDQUE2QyxjQUFjLEVBQUU7O0FBQzdELDZDQUE2QyxjQUFjLEVBQUU7O0FBQzdELDZDQUE2QyxjQUFjLEVBQUU7O0FBRTdELG1JQUFtSSx5QkFBeUIsRUFBRTs7QUFDOUosbUlBQW1JLHlCQUF5QixFQUFFOztBQUM5SixtSUFBbUkseUJBQXlCLEVBQUU7O0FBQzlKLG1JQUFtSSx5QkFBeUIsRUFBRTs7QUFDOUosbUlBQW1JLHlCQUF5QixFQUFFOztBQUM5SixtSUFBbUkseUJBQXlCLEVBQUU7O0FBRzlKOzs7SUFHSSx5QkFBeUI7QUFDN0I7O0FBRU07UUFDRTtZQUNJLGdCQUFnQjtVQUNsQjs7VUFFQTtZQUNFLFdBQVc7WUFDWCxZQUFZO1VBQ2Q7TUFDSiIsImZpbGUiOiJzcmMvYXBwL2NvbXBvbmVudHMvY29udGVudC1wYXNzaXZlL2NvbnRlbnQtcGFzc2l2ZS5jb21wb25lbnQuY3NzIiwic291cmNlc0NvbnRlbnQiOlsiQGZvbnQtZmFjZSB7XG4gICAgZm9udC1mYW1pbHk6ICdPcGVuU2Fucyc7XG4gICAgc3JjOiB1cmwoXCIuLi8uLi8uLi9hc3NldHMvZm9udHMvT3Blbl9TYW5zL09wZW5TYW5zLVJlZ3VsYXIudHRmXCIpO1xufVxuXG5AZm9udC1mYWNlIHtcbiAgICBmb250LWZhbWlseTogJ1ZvbGxrb3JuJztcbiAgICBzcmM6IHVybChcIi4uLy4uLy4uL2Fzc2V0cy9mb250cy9Wb2xsa29ybi9Wb2xsa29ybi1Cb2xkLnR0ZlwiKTtcbn1cblxuaDF7XG4gICAgZm9udC1mYW1pbHk6ICdWb2xsa29ybicsIFRpbWVzLCBzZXJpZjtcbiAgICBtYXJnaW46IDIwcHggMDtcbiAgICBmb250LXNpemU6IDEuNmVtO1xufVxuXG5we1xuICAgIGZvbnQtZmFtaWx5OiAnT3BlblNhbnMnLCBIZWx2ZXRpY2EsIEFyaWFsLCBTYW5zLVNlcmlmO1xuICAgIG1hcmdpbjogMTBweCAwO1xuICAgIGZvbnQtc2l6ZTogMWVtO1xufVxuXG5he1xuICAgIGNvbG9yOiAjMDA1N2EzO1xuICAgIHRleHQtZGVjb3JhdGlvbjogdW5kZXJsaW5lO1xufVxuICBcbi53cmFwcGVyIHtcbiAgICBwYWRkaW5nOiAwO1xuICAgIG1hcmdpbjogMDtcbiAgICBwb3NpdGlvbjogYWJzb2x1dGU7XG4gICAgd2lkdGg6IDEwMCU7XG4gICAgdG9wOiA5MHB4O1xufVxuXG4ud3JhcHBlckNvbnRlbnR7XG4gICAgd2lkdGg6IDcwJTtcbiAgICBtYXJnaW46IDIwcHggYXV0bztcbn1cblxuLmJ0bkJhY2t7XG4gICAgcG9zaXRpb246YWJzb2x1dGU7XG4gICAgYm9yZGVyOiBub25lO1xuICAgIG91dGxpbmU6IG5vbmU7XG4gICAgaGVpZ2h0OiA1MHB4O1xuICAgIGJhY2tncm91bmQtY29sb3I6ICM0OTQ5NDk7XG4gICAgbWFyZ2luOiAyMHB4IDIwcHggMHB4IDIwcHg7XG4gICAgYmFja2dyb3VuZC1zaXplOiA1MHB4O1xuICAgIHdpZHRoOiAxMDBweDtcbiAgICBiYWNrZ3JvdW5kLXBvc2l0aW9uOiAxMCU7XG4gICAgYmFja2dyb3VuZC1yZXBlYXQ6IG5vLXJlcGVhdDtcbiAgICB6LWluZGV4OiAtMTtcbiAgfVxuICBcbiAgLmJ0bkJhY2sgaW1ne1xuICAgICAgZmlsdGVyOiBpbnZlcnQoOTklKSBzZXBpYSg3JSkgc2F0dXJhdGUoOTAlKSBodWUtcm90YXRlKDIyNmRlZykgYnJpZ2h0bmVzcygxMjAlKSBjb250cmFzdCgxMDAlKTtcbiAgICAgIGhlaWdodDogMzZweDtcbiAgICAgIG1hcmdpbjogN3B4IDBweCAwcHggNTBweDtcbiAgICB9XG5cbiAgICAudGltZWxpbmVTZWN0aW9uTmF2e1xuICAgICAgICBwb3NpdGlvbjogZml4ZWQ7XG4gICAgICAgIGJvdHRvbTogMDtcbiAgICAgICAgei1pbmRleDogNTtcbiAgICAgICAgd2lkdGg6IDEwMCU7XG4gICAgICB9XG4gICAgICBcbiAgICAgIC50aW1lbGluZVNlY3Rpb25OYXYgdWx7XG4gICAgICAgIGxpc3Qtc3R5bGUtdHlwZTogbm9uZTtcbiAgICAgICAgbWFyZ2luOiAwO1xuICAgICAgICBwYWRkaW5nOiAwO1xuICAgICAgICBoZWlnaHQ6IDgwcHg7XG4gICAgICAgIGJvcmRlci10b3A6IDE1cHggc29saWQgIzQ5NDk0OTtcbiAgICAgICAgYmFja2dyb3VuZDogIzQ5NDk0OTtcbiAgICAgIH1cbiAgICAgIFxuICAgICAgLnRpbWVsaW5lU2VjdGlvbk5hdiB1bCBsaXtcbiAgICAgICAgYmFja2dyb3VuZC1jb2xvcjogI2ZmZjtcbiAgICAgICAgZmxvYXQ6IGxlZnQ7XG4gICAgICAgIHdpZHRoOiAzMy4zMyU7IFxuICAgICAgICBoZWlnaHQ6IDEwMCU7XG4gICAgICB9XG4gICAgICBcbiAgICAgIC50aW1lbGluZVNlY3Rpb25OYXYgdWwgbGkuc2VsZWN0ZWR7XG4gICAgICAgIGJhY2tncm91bmQ6ICM0OTQ5NDk7XG4gICAgICB9XG5cbiAgICAgIC50aW1lbGluZVNlY3Rpb25OYXYgdWwgbGkgYnV0dG9ue1xuICAgICAgICBkaXNwbGF5OiBibG9jaztcbiAgICAgICAgbWFyZ2luOiA1cHg7XG4gICAgICAgIHdpZHRoOiAxMDAlOyBcbiAgICAgICAgaGVpZ2h0OiA3MHB4O1xuICAgICAgICBib3JkZXI6IG5vbmU7XG4gICAgICAgIG91dGxpbmU6IG5vbmU7XG4gICAgICAgIGJhY2tncm91bmQtY29sb3I6IHRyYW5zcGFyZW50O1xuICAgICAgfVxuICAgICAgXG4gICAgICAudGltZWxpbmVTZWN0aW9uTmF2IHVsIGxpIGJ1dHRvbiBpbWd7XG4gICAgICAgIHdpZHRoOiA0NXB4OyBcbiAgICAgICAgaGVpZ2h0OiA0NXB4O1xuICAgICAgICBib3JkZXItcmFkaXVzOiAyNXB4O1xuICAgICAgICBmbG9hdDogbGVmdDtcbiAgICAgIH1cblxuICAgICAgLnRpbWVsaW5lU2VjdGlvbk5hdiB1bCBsaSBidXR0b24gcHtcbiAgICAgICAgZm9udC1zaXplOiAwLjg1ZW07XG4gICAgICB9XG5cbi5TZWNfMTAgLnRpbWVsaW5lU2VjdGlvbk5hdiB1bCBsaSBidXR0b24gcCB7IGNvbG9yOiAjODIzYTNhOyB9XG4uU2VjXzIwIC50aW1lbGluZVNlY3Rpb25OYXYgdWwgbGkgYnV0dG9uIHAgeyBjb2xvcjogIzMwNTk3ODsgfVxuLlNlY18zMCAudGltZWxpbmVTZWN0aW9uTmF2IHVsIGxpIGJ1dHRvbiBwIHsgY29sb3I6ICM3NTUzMDA7IH1cbi5TZWNfNDAgLnRpbWVsaW5lU2VjdGlvbk5hdiB1bCBsaSBidXR0b24gcCB7IGNvbG9yOiAjMWQ2MzVkOyB9XG4uU2VjXzUwIC50aW1lbGluZVNlY3Rpb25OYXYgdWwgbGkgYnV0dG9uIHAgeyBjb2xvcjogIzVjNDE2YTsgfVxuLlNlY182MCAudGltZWxpbmVTZWN0aW9uTmF2IHVsIGxpIGJ1dHRvbiBwIHsgY29sb3I6ICMzMjYzM2E7IH1cblxuLlNlY18xMCAuc2VsZWN0ZWRfU2VjdGlvbnRpbGwgLnRpbGwsIC5TZWNfMTAgLnNlbGVjdGVkX1NlY3Rpb25tYXhpbWlsaWFuIC5tYXhpbWlsaWFuLCAuU2VjXzEwIC5zZWxlY3RlZF9TZWN0aW9uc3VudGhheW0gLnN1bnRoYXlteyBiYWNrZ3JvdW5kLWNvbG9yOiAjODIzYTNhOyB9XG4uU2VjXzIwIC5zZWxlY3RlZF9TZWN0aW9udGlsbCAudGlsbCwgLlNlY18yMCAuc2VsZWN0ZWRfU2VjdGlvbm1heGltaWxpYW4gLm1heGltaWxpYW4sIC5TZWNfMjAgLnNlbGVjdGVkX1NlY3Rpb25zdW50aGF5bSAuc3VudGhheW17IGJhY2tncm91bmQtY29sb3I6ICMzMDU5Nzg7IH1cbi5TZWNfMzAgLnNlbGVjdGVkX1NlY3Rpb250aWxsIC50aWxsLCAuU2VjXzMwIC5zZWxlY3RlZF9TZWN0aW9ubWF4aW1pbGlhbiAubWF4aW1pbGlhbiwgLlNlY18zMCAuc2VsZWN0ZWRfU2VjdGlvbnN1bnRoYXltIC5zdW50aGF5bXsgYmFja2dyb3VuZC1jb2xvcjogIzc1NTMwMDsgfVxuLlNlY180MCAuc2VsZWN0ZWRfU2VjdGlvbnRpbGwgLnRpbGwsIC5TZWNfNDAgLnNlbGVjdGVkX1NlY3Rpb25tYXhpbWlsaWFuIC5tYXhpbWlsaWFuLCAuU2VjXzQwIC5zZWxlY3RlZF9TZWN0aW9uc3VudGhheW0gLnN1bnRoYXlteyBiYWNrZ3JvdW5kLWNvbG9yOiAjMWQ2MzVkOyB9XG4uU2VjXzUwIC5zZWxlY3RlZF9TZWN0aW9udGlsbCAudGlsbCwgLlNlY181MCAuc2VsZWN0ZWRfU2VjdGlvbm1heGltaWxpYW4gLm1heGltaWxpYW4sIC5TZWNfNTAgLnNlbGVjdGVkX1NlY3Rpb25zdW50aGF5bSAuc3VudGhheW17IGJhY2tncm91bmQtY29sb3I6ICM1YzQxNmE7IH1cbi5TZWNfNjAgLnNlbGVjdGVkX1NlY3Rpb250aWxsIC50aWxsLCAuU2VjXzYwIC5zZWxlY3RlZF9TZWN0aW9ubWF4aW1pbGlhbiAubWF4aW1pbGlhbiwgLlNlY182MCAuc2VsZWN0ZWRfU2VjdGlvbnN1bnRoYXltIC5zdW50aGF5bXsgYmFja2dyb3VuZC1jb2xvcjogIzMyNjMzYTsgfVxuXG5cbi5zZWxlY3RlZF9TZWN0aW9udGlsbCAudGlsbCBidXR0b24gcCwgXG4uc2VsZWN0ZWRfU2VjdGlvbm1heGltaWxpYW4gLm1heGltaWxpYW4gYnV0dG9uIHAsIFxuLnNlbGVjdGVkX1NlY3Rpb25zdW50aGF5bSAuc3VudGhheW0gYnV0dG9uIHB7IFxuICAgIGNvbG9yOiAjZmZmZmZmICFpbXBvcnRhbnQ7XG59XG5cbiAgICAgIEBtZWRpYSAobWF4LXdpZHRoOiAzNzBweCkge1xuICAgICAgICAudGltZWxpbmVTZWN0aW9uTmF2IHVsIGxpIGJ1dHRvbiBwe1xuICAgICAgICAgICAgZm9udC1zaXplOiAwLjdlbTtcbiAgICAgICAgICB9XG5cbiAgICAgICAgICAudGltZWxpbmVTZWN0aW9uTmF2IHVsIGxpIGJ1dHRvbiBpbWd7XG4gICAgICAgICAgICB3aWR0aDogMzVweDsgXG4gICAgICAgICAgICBoZWlnaHQ6IDM1cHg7XG4gICAgICAgICAgfVxuICAgICAgfSJdfQ== */"

/***/ }),

/***/ "./src/app/components/content-passive/content-passive.component.html":
/*!***************************************************************************!*\
  !*** ./src/app/components/content-passive/content-passive.component.html ***!
  \***************************************************************************/
/*! no static exports found */
/***/ (function(module, exports) {

module.exports = "<div class=\"btnBack\"><img src=\"./assets/icons/Timeline/{{getSectionIcon(location.parentId)}}.png\" /></div>\n<div class=\"wrapper Sec_{{location.parentId}}\">\n  <div class=\"wrapperContent\">\n    <h1>{{location.description}}</h1>\n\n    <div *ngFor=\"let cont of location.contents\">\n      <p *ngIf=\"cont.contentTypeId == 1\">{{cont.content}}</p>\n      <img *ngIf=\"cont.contentTypeId == 2\" src=\"{{cont.content}}\" />\n    </div>\n\n    <div id=\"timeline\"></div>\n  </div>\n\n  <div class=\"timelineSectionNav selected_Section{{currentSection}}\">\n      <ul>\n          <li class=\"till\">\n              <button (click)=\"displayVersion('till')\"><img src=\"./assets/icons/Till.png\" /><p>Till<br/>Eulenspiegel</p></button>\n          </li>\n          <li class=\"maximilian\">\n              <button (click)=\"displayVersion('maximilian')\"><img src=\"./assets/icons/Maximilian.png\" /><p>Kaiser<br/>Maximilian</p></button>\n          </li>\n          <li class=\"sunthaym\">\n              <button (click)=\"displayVersion('sunthaym')\"><img src=\"./assets/icons/Sunthaym.png\" /><p>Ladislaus<br/>Sunthaym</p></button>\n          </li>\n      </ul>\n  </div> \n</div>\n\n\n"

/***/ }),

/***/ "./src/app/components/content-passive/content-passive.component.ts":
/*!*************************************************************************!*\
  !*** ./src/app/components/content-passive/content-passive.component.ts ***!
  \*************************************************************************/
/*! exports provided: ContentPassiveComponent */
/***/ (function(module, __webpack_exports__, __webpack_require__) {

"use strict";
__webpack_require__.r(__webpack_exports__);
/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, "ContentPassiveComponent", function() { return ContentPassiveComponent; });
/* harmony import */ var _angular_core__WEBPACK_IMPORTED_MODULE_0__ = __webpack_require__(/*! @angular/core */ "./node_modules/@angular/core/fesm5/core.js");
/* harmony import */ var _services_location_service__WEBPACK_IMPORTED_MODULE_1__ = __webpack_require__(/*! ../../services/location.service */ "./src/app/services/location.service.ts");
/* harmony import */ var _services_transmission_service__WEBPACK_IMPORTED_MODULE_2__ = __webpack_require__(/*! ../../services/transmission.service */ "./src/app/services/transmission.service.ts");
/* harmony import */ var _config_ContentTypes__WEBPACK_IMPORTED_MODULE_3__ = __webpack_require__(/*! ../../config/ContentTypes */ "./src/app/config/ContentTypes.ts");
/* harmony import */ var d3__WEBPACK_IMPORTED_MODULE_4__ = __webpack_require__(/*! d3 */ "./node_modules/d3/index.js");
var __decorate = (undefined && undefined.__decorate) || function (decorators, target, key, desc) {
    var c = arguments.length, r = c < 3 ? target : desc === null ? desc = Object.getOwnPropertyDescriptor(target, key) : desc, d;
    if (typeof Reflect === "object" && typeof Reflect.decorate === "function") r = Reflect.decorate(decorators, target, key, desc);
    else for (var i = decorators.length - 1; i >= 0; i--) if (d = decorators[i]) r = (c < 3 ? d(r) : c > 3 ? d(target, key, r) : d(target, key)) || r;
    return c > 3 && r && Object.defineProperty(target, key, r), r;
};
var __metadata = (undefined && undefined.__metadata) || function (k, v) {
    if (typeof Reflect === "object" && typeof Reflect.metadata === "function") return Reflect.metadata(k, v);
};
var __param = (undefined && undefined.__param) || function (paramIndex, decorator) {
    return function (target, key) { decorator(target, key, paramIndex); }
};





var ContentPassiveComponent = /** @class */ (function () {
    function ContentPassiveComponent(locationService, transmissionService, appStore) {
        var _this = this;
        this.locationService = locationService;
        this.transmissionService = transmissionService;
        this.appStore = appStore;
        this.currentSection = 'maximilian';
        this.sectionList = [
            { code: 10, icon: 'Trumpet', primaryColor: '#823a3a', secondaryColor: '#a85757' },
            { code: 20, icon: 'DocumentSword', primaryColor: '#305978', secondaryColor: '#4b799c' },
            { code: 30, icon: 'Maximilian', primaryColor: '#755300', secondaryColor: '#906e1b' },
            { code: 40, icon: 'Veil', primaryColor: '#1d635d', secondaryColor: '#3c7f7a' },
            { code: 50, icon: 'Shrine', primaryColor: '#5c416a', secondaryColor: '#785d86' },
            { code: 60, icon: 'Tombstone', primaryColor: '#32633a', secondaryColor: '#4c7d54' }
        ];
        this.mContent = [
            { id: 10, content: 'Event 1', type: 3, year: 1468 },
            { id: 20, content: 'DocumentSword', type: 1, year: 0 },
            { id: 30, content: 'Vorlesungen der Chorherren Wolfgang Winthager und Johannes Swarcz an der Universität Wien', type: 3, year: 1469 },
            { id: 40, content: 'Veil', type: 1, year: 0 },
            { id: 50, content: 'Event 3', type: 3, year: 1470 },
            { id: 60, content: 'Tombstone', type: 1, year: 0 }
        ];
        this._unsubscribe = this.appStore.subscribe(function () {
            var state = _this.appStore.getState();
            _this.updateLocationInformation(state.currentLocation);
        });
        this._curLocSubscribe = this.locationService.currentLocation.subscribe(function (value) {
            _this.location = value;
            // console.log(this.location);
        });
    }
    ContentPassiveComponent.prototype.ngOnInit = function () {
        var state = this.appStore.getState();
        this.updateLocationInformation(state.currentLocation);
    };
    ContentPassiveComponent.prototype.ngAfterViewInit = function () {
        // if(there are events)
        this.drawEventTimeline();
    };
    ContentPassiveComponent.prototype.drawEventTimeline = function () {
        var _this = this;
        // Draw Event Timeline
        var start = this.location.startDate;
        var end = this.location.endDate + 1;
        var stringDates = [start.toString(), end.toString()];
        var svgHeight = (end - start) * 60;
        var parseDate = d3__WEBPACK_IMPORTED_MODULE_4__["timeParse"]('%Y');
        var y = d3__WEBPACK_IMPORTED_MODULE_4__["scaleTime"]()
            .domain(d3__WEBPACK_IMPORTED_MODULE_4__["extent"](stringDates, function (d) { return parseDate(d); }))
            .range([0, svgHeight]);
        var svg = d3__WEBPACK_IMPORTED_MODULE_4__["select"]('#timeline').append('svg')
            .attr('height', svgHeight).attr('width', 200);
        var axis = svg.append('g')
            .attr('class', 'y axis').attr('transform', 'translate(0,0)')
            .call(d3__WEBPACK_IMPORTED_MODULE_4__["axisLeft"](y).ticks(end - start).tickFormat(d3__WEBPACK_IMPORTED_MODULE_4__["timeFormat"]('%Y')))
            .selectAll('text').attr('y', 6).attr('x', 6).style('text-anchor', 'start')
            .style('font-size', '1.3em').style('color', this.getSectionPrimaryColor(this.location.parentId));
        svg.select('.domain').attr('stroke-width', '0');
        var whichY = d3__WEBPACK_IMPORTED_MODULE_4__["scaleLinear"]().domain([start, end]).range([0, svgHeight]);
        this.mContent.forEach(function (content, index) {
            if (content.type === _config_ContentTypes__WEBPACK_IMPORTED_MODULE_3__["EVENT"]) {
                var point = svg.append('line').attr('x1', 50).attr('x2', 50)
                    .attr('y1', whichY(content.year)).attr('y2', whichY(content.year + 0.18))
                    .attr('stroke-width', '8').attr('stroke', _this.getSectionPrimaryColor(_this.location.parentId));
                var text = d3__WEBPACK_IMPORTED_MODULE_4__["select"]('#timeline').append('p').text(content.content).style('position', 'absolute')
                    .style('left', '50px').style('top', whichY(content.year) + 'px').style('font-family', 'sans-serif')
                    .style('margin', '75px 20px 0px 75px')
                    .style('font-size', '0.8em').style('color', _this.getSectionPrimaryColor(_this.location.parentId));
            }
        });
    };
    ContentPassiveComponent.prototype.updateLocationInformation = function (value) {
        this.location = value;
    };
    ContentPassiveComponent.prototype.ngOnDestroy = function () {
        this._unsubscribe();
        this._curLocSubscribe.unsubscribe();
    };
    ContentPassiveComponent.prototype.registerLocationLike = function () {
        this.transmissionService.transmitLocationLike(true);
    };
    ContentPassiveComponent.prototype.registerLocationUnlike = function () {
        this.transmissionService.transmitLocationLike(false);
    };
    ContentPassiveComponent.prototype.displayVersion = function (sectionId) {
        this.currentSection = sectionId;
    };
    ContentPassiveComponent.prototype.getSectionIcon = function (sectionId) {
        var icon = '';
        this.sectionList.forEach(function (section) {
            if (section.code === sectionId) {
                icon = section.icon;
            }
        });
        return icon;
    };
    ContentPassiveComponent.prototype.getSectionPrimaryColor = function (sectionId) {
        var color = '';
        this.sectionList.forEach(function (section) {
            if (section.code === sectionId) {
                color = section.primaryColor;
            }
        });
        return color;
    };
    ContentPassiveComponent = __decorate([
        Object(_angular_core__WEBPACK_IMPORTED_MODULE_0__["Component"])({
            selector: 'app-content-passive',
            template: __webpack_require__(/*! ./content-passive.component.html */ "./src/app/components/content-passive/content-passive.component.html"),
            styles: [__webpack_require__(/*! ./content-passive.component.css */ "./src/app/components/content-passive/content-passive.component.css")]
        }),
        __param(2, Object(_angular_core__WEBPACK_IMPORTED_MODULE_0__["Inject"])('AppStore')),
        __metadata("design:paramtypes", [_services_location_service__WEBPACK_IMPORTED_MODULE_1__["LocationService"],
            _services_transmission_service__WEBPACK_IMPORTED_MODULE_2__["TransmissionService"], Object])
    ], ContentPassiveComponent);
    return ContentPassiveComponent;
}());



/***/ }),

/***/ "./src/app/components/content-table-at/content-table-at.component.css":
/*!****************************************************************************!*\
  !*** ./src/app/components/content-table-at/content-table-at.component.css ***!
  \****************************************************************************/
/*! no static exports found */
/***/ (function(module, exports) {

module.exports = "@font-face {\n    font-family: 'OpenSans';\n    src: url('OpenSans-Regular.ttf');\n  }\n  \n  @font-face {\n    font-family: 'Vollkorn';\n    src: url('Vollkorn-Bold.ttf');\n  }\n  \n  h1{\n    font-family: 'Vollkorn', Times, serif;\n    margin: 20px 0;\n    font-size: 1.6em;\n}\n  \n  .btnJoin button,\np{\n    font-family: 'OpenSans', Helvetica, Arial, Sans-Serif;\n    margin: 10px 0;\n    font-size: 1em;\n}\n  \n  a{\n    color: #0057a3;\n    text-decoration: underline;\n}\n  \n  .wrapper {\n    padding: 0;\n    margin: 0;\n    position: absolute;\n    width: 100%;\n    top: 90px;\n}\n  \n  .wrapperContent{\n    width: 70%;\n    margin: 20px auto;\n}\n  \n  .btnJoin{\n    position: fixed;\n    bottom: 0;\n    z-index: 5;\n    width: 100%;\n    height: 80px;\n    margin: 0;\n    padding: 0;\n    border-top: 15px solid #494949;\n    color: #ffffff;\n}\n  \n  .btnJoin .ico{\n    height: 50px;\n    width: 50px;\n    float:left;\n    background-image: url('WappenIcons.png');\n    background-position: -10px 50px;\n    background-size: 1000%;\n    margin: 15px;\n}\n  \n  .btnJoin .msg{\n    margin: 15px 15px 0px 0px;\n}\n  \n  .btnJoin button{\n    outline: none;\n    border: none;\n    position: absolute;\n    height: 80px;\n    width: 100%;\n    top:0px;\n    left: 80px;\n    text-align: left;\n    margin: 0;\n    padding: 0;\n    color: #ffffff;\n    background: transparent; \n    font-size: 1.3em;\n}\n  \n  .btnBack{\n  position:absolute;\n  border: none;\n  outline: none;\n  height: 50px;\n  background-color: #494949;\n  margin: 20px 20px 0px 20px;\n  background-size: 50px;\n  width: 100px;\n  background-position: 10%;\n  background-repeat: no-repeat;\n  z-index: -1;\n}\n  \n  .btnBack img{\n    -webkit-filter: invert(99%) sepia(7%) saturate(90%) hue-rotate(226deg) brightness(120%) contrast(100%);\n            filter: invert(99%) sepia(7%) saturate(90%) hue-rotate(226deg) brightness(120%) contrast(100%);\n    height: 36px;\n    margin: 7px 0px 0px 50px;\n  }\n  \n  .btnJoinDisabled{\n    position: fixed;\n    bottom: 0;\n    z-index: 6;\n    height: 95px;\n    width: 100%;\n    background: #666666;\n    opacity: 0.5;\n  }\n  \n  .Sec_10 .btnJoin{ background-color: #823a3a; }\n  \n  .Sec_20 .btnJoin{ background-color: #305978; }\n  \n  .Sec_30 .btnJoin{ background-color: #755300; }\n  \n  .Sec_40 .btnJoin{ background-color: #1d635d; }\n  \n  .Sec_50 .btnJoin{ background-color: #5c416a; }\n  \n  .Sec_60 .btnJoin{ background-color: #32633a; }\n  \n  .Sec_10 .note{ text-align: center; color: #823a3a; }\n  \n  .Sec_20 .note{ text-align: center; color: #305978; }\n  \n  .Sec_30 .note{ text-align: center; color: #755300; }\n  \n  .Sec_40 .note{ text-align: center; color: #1d635d; }\n  \n  .Sec_50 .note{ text-align: center; color: #5c416a; }\n  \n  .Sec_60 .note{ text-align: center; color: #32633a; }\n  \n  @media (max-width: 370px) {\n    .btnJoin button{\n        font-size: 1em;\n    }\n\n    .btnJoin p{\n        font-size: 0.8em;\n    }\n  }\n/*# sourceMappingURL=data:application/json;base64,eyJ2ZXJzaW9uIjozLCJzb3VyY2VzIjpbInNyYy9hcHAvY29tcG9uZW50cy9jb250ZW50LXRhYmxlLWF0L2NvbnRlbnQtdGFibGUtYXQuY29tcG9uZW50LmNzcyJdLCJuYW1lcyI6W10sIm1hcHBpbmdzIjoiQUFBQTtJQUNJLHVCQUF1QjtJQUN2QixnQ0FBZ0U7RUFDbEU7O0VBRUE7SUFDRSx1QkFBdUI7SUFDdkIsNkJBQTREO0VBQzlEOztFQUVBO0lBQ0UscUNBQXFDO0lBQ3JDLGNBQWM7SUFDZCxnQkFBZ0I7QUFDcEI7O0VBRUE7O0lBRUkscURBQXFEO0lBQ3JELGNBQWM7SUFDZCxjQUFjO0FBQ2xCOztFQUlBO0lBQ0ksY0FBYztJQUNkLDBCQUEwQjtBQUM5Qjs7RUFFQTtJQUNJLFVBQVU7SUFDVixTQUFTO0lBQ1Qsa0JBQWtCO0lBQ2xCLFdBQVc7SUFDWCxTQUFTO0FBQ2I7O0VBRUE7SUFDSSxVQUFVO0lBQ1YsaUJBQWlCO0FBQ3JCOztFQUVBO0lBQ0ksZUFBZTtJQUNmLFNBQVM7SUFDVCxVQUFVO0lBQ1YsV0FBVztJQUNYLFlBQVk7SUFDWixTQUFTO0lBQ1QsVUFBVTtJQUNWLDhCQUE4QjtJQUM5QixjQUFjO0FBQ2xCOztFQUVBO0lBQ0ksWUFBWTtJQUNaLFdBQVc7SUFDWCxVQUFVO0lBQ1Ysd0NBQThEO0lBQzlELCtCQUErQjtJQUMvQixzQkFBc0I7SUFDdEIsWUFBWTtBQUNoQjs7RUFFQTtJQUNJLHlCQUF5QjtBQUM3Qjs7RUFFQTtJQUNJLGFBQWE7SUFDYixZQUFZO0lBQ1osa0JBQWtCO0lBQ2xCLFlBQVk7SUFDWixXQUFXO0lBQ1gsT0FBTztJQUNQLFVBQVU7SUFDVixnQkFBZ0I7SUFDaEIsU0FBUztJQUNULFVBQVU7SUFDVixjQUFjO0lBQ2QsdUJBQXVCO0lBQ3ZCLGdCQUFnQjtBQUNwQjs7RUFFQTtFQUNFLGlCQUFpQjtFQUNqQixZQUFZO0VBQ1osYUFBYTtFQUNiLFlBQVk7RUFDWix5QkFBeUI7RUFDekIsMEJBQTBCO0VBQzFCLHFCQUFxQjtFQUNyQixZQUFZO0VBQ1osd0JBQXdCO0VBQ3hCLDRCQUE0QjtFQUM1QixXQUFXO0FBQ2I7O0VBRUE7SUFDSSxzR0FBOEY7WUFBOUYsOEZBQThGO0lBQzlGLFlBQVk7SUFDWix3QkFBd0I7RUFDMUI7O0VBRUE7SUFDRSxlQUFlO0lBQ2YsU0FBUztJQUNULFVBQVU7SUFDVixZQUFZO0lBQ1osV0FBVztJQUNYLG1CQUFtQjtJQUNuQixZQUFZO0VBQ2Q7O0VBRUYsa0JBQWtCLHlCQUF5QixFQUFFOztFQUM3QyxrQkFBa0IseUJBQXlCLEVBQUU7O0VBQzdDLGtCQUFrQix5QkFBeUIsRUFBRTs7RUFDN0Msa0JBQWtCLHlCQUF5QixFQUFFOztFQUM3QyxrQkFBa0IseUJBQXlCLEVBQUU7O0VBQzdDLGtCQUFrQix5QkFBeUIsRUFBRTs7RUFFN0MsZUFBZSxrQkFBa0IsRUFBRSxjQUFjLEVBQUU7O0VBQ25ELGVBQWUsa0JBQWtCLEVBQUUsY0FBYyxFQUFFOztFQUNuRCxlQUFlLGtCQUFrQixFQUFFLGNBQWMsRUFBRTs7RUFDbkQsZUFBZSxrQkFBa0IsRUFBRSxjQUFjLEVBQUU7O0VBQ25ELGVBQWUsa0JBQWtCLEVBQUUsY0FBYyxFQUFFOztFQUNuRCxlQUFlLGtCQUFrQixFQUFFLGNBQWMsRUFBRTs7RUFHbkQ7SUFDSTtRQUNJLGNBQWM7SUFDbEI7O0lBRUE7UUFDSSxnQkFBZ0I7SUFDcEI7RUFDRiIsImZpbGUiOiJzcmMvYXBwL2NvbXBvbmVudHMvY29udGVudC10YWJsZS1hdC9jb250ZW50LXRhYmxlLWF0LmNvbXBvbmVudC5jc3MiLCJzb3VyY2VzQ29udGVudCI6WyJAZm9udC1mYWNlIHtcbiAgICBmb250LWZhbWlseTogJ09wZW5TYW5zJztcbiAgICBzcmM6IHVybChcIi4uLy4uLy4uL2Fzc2V0cy9mb250cy9PcGVuX1NhbnMvT3BlblNhbnMtUmVndWxhci50dGZcIik7XG4gIH1cbiAgXG4gIEBmb250LWZhY2Uge1xuICAgIGZvbnQtZmFtaWx5OiAnVm9sbGtvcm4nO1xuICAgIHNyYzogdXJsKFwiLi4vLi4vLi4vYXNzZXRzL2ZvbnRzL1ZvbGxrb3JuL1ZvbGxrb3JuLUJvbGQudHRmXCIpO1xuICB9XG5cbiAgaDF7XG4gICAgZm9udC1mYW1pbHk6ICdWb2xsa29ybicsIFRpbWVzLCBzZXJpZjtcbiAgICBtYXJnaW46IDIwcHggMDtcbiAgICBmb250LXNpemU6IDEuNmVtO1xufVxuXG4uYnRuSm9pbiBidXR0b24sXG5we1xuICAgIGZvbnQtZmFtaWx5OiAnT3BlblNhbnMnLCBIZWx2ZXRpY2EsIEFyaWFsLCBTYW5zLVNlcmlmO1xuICAgIG1hcmdpbjogMTBweCAwO1xuICAgIGZvbnQtc2l6ZTogMWVtO1xufVxuXG5cblxuYXtcbiAgICBjb2xvcjogIzAwNTdhMztcbiAgICB0ZXh0LWRlY29yYXRpb246IHVuZGVybGluZTtcbn1cbiAgXG4ud3JhcHBlciB7XG4gICAgcGFkZGluZzogMDtcbiAgICBtYXJnaW46IDA7XG4gICAgcG9zaXRpb246IGFic29sdXRlO1xuICAgIHdpZHRoOiAxMDAlO1xuICAgIHRvcDogOTBweDtcbn1cblxuLndyYXBwZXJDb250ZW50e1xuICAgIHdpZHRoOiA3MCU7XG4gICAgbWFyZ2luOiAyMHB4IGF1dG87XG59XG5cbi5idG5Kb2lue1xuICAgIHBvc2l0aW9uOiBmaXhlZDtcbiAgICBib3R0b206IDA7XG4gICAgei1pbmRleDogNTtcbiAgICB3aWR0aDogMTAwJTtcbiAgICBoZWlnaHQ6IDgwcHg7XG4gICAgbWFyZ2luOiAwO1xuICAgIHBhZGRpbmc6IDA7XG4gICAgYm9yZGVyLXRvcDogMTVweCBzb2xpZCAjNDk0OTQ5O1xuICAgIGNvbG9yOiAjZmZmZmZmO1xufVxuXG4uYnRuSm9pbiAuaWNve1xuICAgIGhlaWdodDogNTBweDtcbiAgICB3aWR0aDogNTBweDtcbiAgICBmbG9hdDpsZWZ0O1xuICAgIGJhY2tncm91bmQtaW1hZ2U6IHVybChcIi4uLy4uLy4uL2Fzc2V0cy9pY29ucy9XYXBwZW5JY29ucy5wbmdcIik7XG4gICAgYmFja2dyb3VuZC1wb3NpdGlvbjogLTEwcHggNTBweDtcbiAgICBiYWNrZ3JvdW5kLXNpemU6IDEwMDAlO1xuICAgIG1hcmdpbjogMTVweDtcbn1cblxuLmJ0bkpvaW4gLm1zZ3tcbiAgICBtYXJnaW46IDE1cHggMTVweCAwcHggMHB4O1xufVxuXG4uYnRuSm9pbiBidXR0b257XG4gICAgb3V0bGluZTogbm9uZTtcbiAgICBib3JkZXI6IG5vbmU7XG4gICAgcG9zaXRpb246IGFic29sdXRlO1xuICAgIGhlaWdodDogODBweDtcbiAgICB3aWR0aDogMTAwJTtcbiAgICB0b3A6MHB4O1xuICAgIGxlZnQ6IDgwcHg7XG4gICAgdGV4dC1hbGlnbjogbGVmdDtcbiAgICBtYXJnaW46IDA7XG4gICAgcGFkZGluZzogMDtcbiAgICBjb2xvcjogI2ZmZmZmZjtcbiAgICBiYWNrZ3JvdW5kOiB0cmFuc3BhcmVudDsgXG4gICAgZm9udC1zaXplOiAxLjNlbTtcbn1cblxuLmJ0bkJhY2t7XG4gIHBvc2l0aW9uOmFic29sdXRlO1xuICBib3JkZXI6IG5vbmU7XG4gIG91dGxpbmU6IG5vbmU7XG4gIGhlaWdodDogNTBweDtcbiAgYmFja2dyb3VuZC1jb2xvcjogIzQ5NDk0OTtcbiAgbWFyZ2luOiAyMHB4IDIwcHggMHB4IDIwcHg7XG4gIGJhY2tncm91bmQtc2l6ZTogNTBweDtcbiAgd2lkdGg6IDEwMHB4O1xuICBiYWNrZ3JvdW5kLXBvc2l0aW9uOiAxMCU7XG4gIGJhY2tncm91bmQtcmVwZWF0OiBuby1yZXBlYXQ7XG4gIHotaW5kZXg6IC0xO1xufVxuXG4uYnRuQmFjayBpbWd7XG4gICAgZmlsdGVyOiBpbnZlcnQoOTklKSBzZXBpYSg3JSkgc2F0dXJhdGUoOTAlKSBodWUtcm90YXRlKDIyNmRlZykgYnJpZ2h0bmVzcygxMjAlKSBjb250cmFzdCgxMDAlKTtcbiAgICBoZWlnaHQ6IDM2cHg7XG4gICAgbWFyZ2luOiA3cHggMHB4IDBweCA1MHB4O1xuICB9XG5cbiAgLmJ0bkpvaW5EaXNhYmxlZHtcbiAgICBwb3NpdGlvbjogZml4ZWQ7XG4gICAgYm90dG9tOiAwO1xuICAgIHotaW5kZXg6IDY7XG4gICAgaGVpZ2h0OiA5NXB4O1xuICAgIHdpZHRoOiAxMDAlO1xuICAgIGJhY2tncm91bmQ6ICM2NjY2NjY7XG4gICAgb3BhY2l0eTogMC41O1xuICB9XG5cbi5TZWNfMTAgLmJ0bkpvaW57IGJhY2tncm91bmQtY29sb3I6ICM4MjNhM2E7IH1cbi5TZWNfMjAgLmJ0bkpvaW57IGJhY2tncm91bmQtY29sb3I6ICMzMDU5Nzg7IH1cbi5TZWNfMzAgLmJ0bkpvaW57IGJhY2tncm91bmQtY29sb3I6ICM3NTUzMDA7IH1cbi5TZWNfNDAgLmJ0bkpvaW57IGJhY2tncm91bmQtY29sb3I6ICMxZDYzNWQ7IH1cbi5TZWNfNTAgLmJ0bkpvaW57IGJhY2tncm91bmQtY29sb3I6ICM1YzQxNmE7IH1cbi5TZWNfNjAgLmJ0bkpvaW57IGJhY2tncm91bmQtY29sb3I6ICMzMjYzM2E7IH1cblxuLlNlY18xMCAubm90ZXsgdGV4dC1hbGlnbjogY2VudGVyOyBjb2xvcjogIzgyM2EzYTsgfVxuLlNlY18yMCAubm90ZXsgdGV4dC1hbGlnbjogY2VudGVyOyBjb2xvcjogIzMwNTk3ODsgfVxuLlNlY18zMCAubm90ZXsgdGV4dC1hbGlnbjogY2VudGVyOyBjb2xvcjogIzc1NTMwMDsgfVxuLlNlY180MCAubm90ZXsgdGV4dC1hbGlnbjogY2VudGVyOyBjb2xvcjogIzFkNjM1ZDsgfVxuLlNlY181MCAubm90ZXsgdGV4dC1hbGlnbjogY2VudGVyOyBjb2xvcjogIzVjNDE2YTsgfVxuLlNlY182MCAubm90ZXsgdGV4dC1hbGlnbjogY2VudGVyOyBjb2xvcjogIzMyNjMzYTsgfVxuXG5cbkBtZWRpYSAobWF4LXdpZHRoOiAzNzBweCkge1xuICAgIC5idG5Kb2luIGJ1dHRvbntcbiAgICAgICAgZm9udC1zaXplOiAxZW07XG4gICAgfVxuXG4gICAgLmJ0bkpvaW4gcHtcbiAgICAgICAgZm9udC1zaXplOiAwLjhlbTtcbiAgICB9XG4gIH0iXX0= */"

/***/ }),

/***/ "./src/app/components/content-table-at/content-table-at.component.html":
/*!*****************************************************************************!*\
  !*** ./src/app/components/content-table-at/content-table-at.component.html ***!
  \*****************************************************************************/
/*! no static exports found */
/***/ (function(module, exports) {

module.exports = "<div class=\"btnBack\"><img src=\"./assets/icons/Timeline/{{getSectionIcon(location.parentId)}}.png\" /></div>\n<div class=\"wrapper Sec_{{location.parentId}}\">\n  <div class=\"wrapperContent\">\n    <h1>{{location.description}}</h1>\n\n    <div *ngFor=\"let cont of location.contents\">\n      <p *ngIf=\"cont.contentTypeId == 1\">{{cont.content}}</p>\n      <img *ngIf=\"cont.contentTypeId == 2\" src=\"{{cont.content}}\" />\n    </div>\n\n    <p class=\"note\">{{ 'tableAt.interactiveExhibitMsg' | translate }}</p>\n  </div> \n  \n  <div class=\"btnJoin\">\n    <div class=\"ico\"></div>\n    <div class=\"msg\">\n      <div *ngIf=\"locationStatusFree\">\n        <div *ngIf=\"locationType === 3\">\n          <p>{{ 'tableAt.tableFreeText' | translate }}</p>\n          <button *ngIf=\"joinGame\" (click)=\"startOnTableSearch()\">{{ 'tableAt.tableJoinButton' | translate }}</button>\n          <p *ngIf=\"!joinGame\">{{ 'tableAt.beaconPutText' | translate }}</p>\n          <p *ngIf=\"locationSocketStatus === 'OCCUPIED'\">{{ 'tableAt.beaconOccupiedText' | translate }}</p>\n\n          <div class=\"webdevtools\" *ngIf=\"isWeb && !joinGame\" style=\"margin-top:20px\">\n            <button (click)=\"redirectToOnTable()\">Register Location TableOn</button>\n          </div>\n        </div>\n        <div *ngIf=\"locationType == 6\">\n          <button *ngIf=\"joinGame\" ng-disabled=\"isJoinButtonUnlocked\" (click)=\"redirectToOnTableBehavior()\">{{ 'tableAt.tableJoinButton' | translate }}</button>\n        </div>\n      </div>\n      <div *ngIf=\"locationStatusOccupied\"><p>{{ 'tableAt.tableOccupiedText' | translate }}</p></div>\n      <div *ngIf=\"locationStatusOffline\"><p>{{ 'tableAt.tableOfflineText' | translate }}</p></div>\n    </div>\n  </div>\n  <div class=\"btnJoinDisabled\" *ngIf=\"locationStatusOffline || locationStatusOccupied || !joinGame || locationSocketStatus === 'OCCUPIED'\"></div>\n</div>\n"

/***/ }),

/***/ "./src/app/components/content-table-at/content-table-at.component.ts":
/*!***************************************************************************!*\
  !*** ./src/app/components/content-table-at/content-table-at.component.ts ***!
  \***************************************************************************/
/*! exports provided: ContentTableAtComponent */
/***/ (function(module, __webpack_exports__, __webpack_require__) {

"use strict";
__webpack_require__.r(__webpack_exports__);
/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, "ContentTableAtComponent", function() { return ContentTableAtComponent; });
/* harmony import */ var _angular_core__WEBPACK_IMPORTED_MODULE_0__ = __webpack_require__(/*! @angular/core */ "./node_modules/@angular/core/fesm5/core.js");
/* harmony import */ var _services_god_god_service__WEBPACK_IMPORTED_MODULE_1__ = __webpack_require__(/*! ../../services/god/god.service */ "./src/app/services/god/god.service.ts");
/* harmony import */ var _services_location_service__WEBPACK_IMPORTED_MODULE_2__ = __webpack_require__(/*! ../../services/location.service */ "./src/app/services/location.service.ts");
/* harmony import */ var _angular_router__WEBPACK_IMPORTED_MODULE_3__ = __webpack_require__(/*! @angular/router */ "./node_modules/@angular/router/fesm5/router.js");
/* harmony import */ var _services_native_native_response_service__WEBPACK_IMPORTED_MODULE_4__ = __webpack_require__(/*! ../../services/native/native-response.service */ "./src/app/services/native/native-response.service.ts");
/* harmony import */ var rxjs_observable_TimerObservable__WEBPACK_IMPORTED_MODULE_5__ = __webpack_require__(/*! rxjs/observable/TimerObservable */ "./node_modules/rxjs-compat/_esm5/observable/TimerObservable.js");
/* harmony import */ var _store_actions_LocationActions__WEBPACK_IMPORTED_MODULE_6__ = __webpack_require__(/*! ../../store/actions/LocationActions */ "./src/app/store/actions/LocationActions.ts");
/* harmony import */ var _services_native_native_communication_service__WEBPACK_IMPORTED_MODULE_7__ = __webpack_require__(/*! ../../services/native/native-communication.service */ "./src/app/services/native/native-communication.service.ts");
/* harmony import */ var _services_transmission_service__WEBPACK_IMPORTED_MODULE_8__ = __webpack_require__(/*! ../../services/transmission.service */ "./src/app/services/transmission.service.ts");
var __decorate = (undefined && undefined.__decorate) || function (decorators, target, key, desc) {
    var c = arguments.length, r = c < 3 ? target : desc === null ? desc = Object.getOwnPropertyDescriptor(target, key) : desc, d;
    if (typeof Reflect === "object" && typeof Reflect.decorate === "function") r = Reflect.decorate(decorators, target, key, desc);
    else for (var i = decorators.length - 1; i >= 0; i--) if (d = decorators[i]) r = (c < 3 ? d(r) : c > 3 ? d(target, key, r) : d(target, key)) || r;
    return c > 3 && r && Object.defineProperty(target, key, r), r;
};
var __metadata = (undefined && undefined.__metadata) || function (k, v) {
    if (typeof Reflect === "object" && typeof Reflect.metadata === "function") return Reflect.metadata(k, v);
};
var __param = (undefined && undefined.__param) || function (paramIndex, decorator) {
    return function (target, key) { decorator(target, key, paramIndex); }
};









var ContentTableAtComponent = /** @class */ (function () {
    function ContentTableAtComponent(godService, router, locationService, transmissionService, responseService, appStore, locationActions, nativeCommunicationService) {
        var _this = this;
        this.godService = godService;
        this.router = router;
        this.locationService = locationService;
        this.transmissionService = transmissionService;
        this.responseService = responseService;
        this.appStore = appStore;
        this.locationActions = locationActions;
        this.nativeCommunicationService = nativeCommunicationService;
        this.sectionList = [
            { code: 10, icon: 'Trumpet', primaryColor: '#823a3a', secondaryColor: '#a85757' },
            { code: 20, icon: 'DocumentSword', primaryColor: '#305978', secondaryColor: '#4b799c' },
            { code: 30, icon: 'Maximilian', primaryColor: '#755300', secondaryColor: '#906e1b' },
            { code: 40, icon: 'Veil', primaryColor: '#1d635d', secondaryColor: '#3c7f7a' },
            { code: 50, icon: 'Shrine', primaryColor: '#5c416a', secondaryColor: '#785d86' },
            { code: 60, icon: 'Tombstone', primaryColor: '#32633a', secondaryColor: '#4c7d54' }
        ];
        this._unsubscribe = this.appStore.subscribe(function () {
            var state = _this.appStore.getState();
            _this.updateLocationStatus(state.locationStatus);
            if (state.closestExhibit) {
                _this.updateJoinButtonStatus(state.closestExhibit);
            }
            _this.locationSocketStatus = state.locationSocketStatus;
        });
        this._curLocSubscribe = this.locationService.currentLocation.subscribe(function (value) {
            _this.location = value;
        });
        this.navigationSubscription = this.router.events.subscribe(function (e) {
            // If it is a NavigationEnd event re-initalise the component
            if (e instanceof _angular_router__WEBPACK_IMPORTED_MODULE_3__["NavigationEnd"]) {
                _this.initialiseInvites();
            }
        });
    }
    ContentTableAtComponent.prototype.ngOnInit = function () {
        this.initialiseInvites();
    };
    ContentTableAtComponent.prototype.initialiseInvites = function () {
        var _this = this;
        this.nativeCommunicationService.sendToNative('TABLE-AT', 'print');
        this.location = this.locationService.currentLocation.value;
        this.locationName = this.location.description;
        this.locationId = this.location.id;
        this.locationStatusFree = false;
        this.locationStatusOccupied = false;
        this.locationStatusOffline = false;
        this.locationType = this.location.locationTypeId;
        this.joinGame = true;
        this.isWeb = this.nativeCommunicationService.isWeb;
        // Timer starts after 1sec, repeats every 5sec
        this.checkStatusTimer = rxjs_observable_TimerObservable__WEBPACK_IMPORTED_MODULE_5__["TimerObservable"].create(100, 50000);
        this._statusTimerSubscription = this.checkStatusTimer.subscribe(function () {
            _this.godService.checkLocationStatus(_this.locationId);
        });
    };
    ContentTableAtComponent.prototype.ngOnDestroy = function () {
        // Stop the timer
        this._statusTimerSubscription.unsubscribe();
        this._unsubscribe();
        this._curLocSubscribe.unsubscribe();
    };
    ContentTableAtComponent.prototype.updateJoinButtonStatus = function (locationId) {
        // Checking if the closest exhibit is the current active exhibit or one of the tableOn beacons
        this.isJoinButtonUnlocked = this.locationService.isActiveLocationInRange(locationId);
    };
    ContentTableAtComponent.prototype.updateLocationStatus = function (status) {
        if (status === 'FREE') {
            this.locationStatusFree = true;
            this.locationStatusOccupied = false;
            this.locationStatusOffline = false;
        }
        else if (status === 'OCCUPIED') {
            this.locationStatusFree = false;
            this.locationStatusOccupied = true;
            this.locationStatusOffline = false;
        }
        else if (status === 'OFFLINE') {
            this.locationStatusOffline = true;
            this.locationStatusFree = false;
            this.locationStatusOccupied = false;
        }
    };
    ContentTableAtComponent.prototype.getSectionIcon = function (sectionId) {
        var icon = '';
        this.sectionList.forEach(function (section) {
            if (section.code === sectionId) {
                icon = section.icon;
            }
        });
        return icon;
    };
    // saves ID of current exhibit in localstorage
    ContentTableAtComponent.prototype.startOnTableSearch = function () {
        this.joinGame = false;
        this.locationService.stopLocationScanning();
        this.appStore.dispatch(this.locationActions.changeAtExhibitParentId(this.locationId));
        // localStorage.setItem('atExhibitParent', JSON.stringify(this.locationId));
    };
    /*
    ------------------------------------------------------------
                        Helper functions
    ------------------------------------------------------------
    */
    ContentTableAtComponent.prototype.redirectToOnTable = function () {
        this.responseService.timelineUpdate({ minor: 1000, major: 100 });
    };
    ContentTableAtComponent.prototype.redirectToOnTableBehavior = function () {
        this.nativeCommunicationService.sendToNative('REDIRECT-TO-TABLE-ON-Behavior', 'print');
        this.appStore.dispatch(this.locationActions.changeAtExhibitParentId(this.locationId));
        this.transmissionService.transmitLocationRegisterTableBehavior();
    };
    ContentTableAtComponent = __decorate([
        Object(_angular_core__WEBPACK_IMPORTED_MODULE_0__["Component"])({
            selector: 'app-content-table-at',
            template: __webpack_require__(/*! ./content-table-at.component.html */ "./src/app/components/content-table-at/content-table-at.component.html"),
            styles: [__webpack_require__(/*! ./content-table-at.component.css */ "./src/app/components/content-table-at/content-table-at.component.css")]
        }),
        __param(5, Object(_angular_core__WEBPACK_IMPORTED_MODULE_0__["Inject"])('AppStore')),
        __metadata("design:paramtypes", [_services_god_god_service__WEBPACK_IMPORTED_MODULE_1__["GodService"],
            _angular_router__WEBPACK_IMPORTED_MODULE_3__["Router"],
            _services_location_service__WEBPACK_IMPORTED_MODULE_2__["LocationService"],
            _services_transmission_service__WEBPACK_IMPORTED_MODULE_8__["TransmissionService"],
            _services_native_native_response_service__WEBPACK_IMPORTED_MODULE_4__["NativeResponseService"], Object, _store_actions_LocationActions__WEBPACK_IMPORTED_MODULE_6__["LocationActions"],
            _services_native_native_communication_service__WEBPACK_IMPORTED_MODULE_7__["NativeCommunicationService"]])
    ], ContentTableAtComponent);
    return ContentTableAtComponent;
}());



/***/ }),

/***/ "./src/app/components/content-table-notify-at/content-table-notify-at.component.css":
/*!******************************************************************************************!*\
  !*** ./src/app/components/content-table-notify-at/content-table-notify-at.component.css ***!
  \******************************************************************************************/
/*! no static exports found */
/***/ (function(module, exports) {

module.exports = "@font-face {\n  font-family: 'OpenSans';\n  src: url('OpenSans-Regular.ttf');\n}\n\n@font-face {\n  font-family: 'Vollkorn';\n  src: url('Vollkorn-Bold.ttf');\n}\n\nh1{\n  font-family: 'Vollkorn', Times, serif;\n  margin: 20px 0;\n  font-size: 1.6em;\n}\n\n.btnJoin button,\np{\n  font-family: 'OpenSans', Helvetica, Arial, Sans-Serif;\n  margin: 10px 0;\n  font-size: 1em;\n}\n\na{\n  color: #0057a3;\n  text-decoration: underline;\n}\n\n.wrapper {\n  padding: 0;\n  margin: 0;\n  position: absolute;\n  width: 100%;\n  top: 90px;\n}\n\n.wrapperContent{\n  width: 70%;\n  margin: 20px auto;\n}\n\n.btnJoin{\n  position: fixed;\n  bottom: 0;\n  z-index: 5;\n  width: 100%;\n  height: 80px;\n  margin: 0;\n  padding: 0;\n  border-top: 15px solid #494949;\n  color: #ffffff;\n}\n\n.btnJoin .ico{\n  height: 50px;\n  width: 50px;\n  float:left;\n  background-image: url('WappenIcons.png');\n  background-position: -10px 50px;\n  background-size: 1000%;\n  margin: 15px;\n}\n\n.btnJoin .msg{\n  margin: 15px 15px 0px 0px;\n}\n\n.btnJoin button{\n  outline: none;\n  border: none;\n  position: absolute;\n  height: 80px;\n  width: 100%;\n  top:0px;\n  left: 80px;\n  text-align: left;\n  margin: 0;\n  padding: 0;\n  color: #ffffff;\n  background: transparent;\n  font-size: 1.3em;\n}\n\n.btnBack{\n  position:absolute;\n  border: none;\n  outline: none;\n  height: 50px;\n  background-color: #494949;\n  margin: 20px 20px 0px 20px;\n  background-size: 50px;\n  width: 100px;\n  background-position: 10%;\n  background-repeat: no-repeat;\n  z-index: -1;\n}\n\n.btnBack img{\n  -webkit-filter: invert(99%) sepia(7%) saturate(90%) hue-rotate(226deg) brightness(120%) contrast(100%);\n          filter: invert(99%) sepia(7%) saturate(90%) hue-rotate(226deg) brightness(120%) contrast(100%);\n  height: 36px;\n  margin: 7px 0px 0px 50px;\n}\n\n.btnJoinDisabled{\n  position: fixed;\n  bottom: 0;\n  z-index: 6;\n  height: 95px;\n  width: 100%;\n  background: #666666;\n  opacity: 0.5;\n}\n\n.Sec_10 .btnJoin{ background-color: #823a3a; }\n\n.Sec_20 .btnJoin{ background-color: #305978; }\n\n.Sec_30 .btnJoin{ background-color: #755300; }\n\n.Sec_40 .btnJoin{ background-color: #1d635d; }\n\n.Sec_50 .btnJoin{ background-color: #5c416a; }\n\n.Sec_60 .btnJoin{ background-color: #32633a; }\n\n.Sec_10 .note{ text-align: center; color: #823a3a; }\n\n.Sec_20 .note{ text-align: center; color: #305978; }\n\n.Sec_30 .note{ text-align: center; color: #755300; }\n\n.Sec_40 .note{ text-align: center; color: #1d635d; }\n\n.Sec_50 .note{ text-align: center; color: #5c416a; }\n\n.Sec_60 .note{ text-align: center; color: #32633a; }\n\n@media (max-width: 370px) {\n  .btnJoin button{\n    font-size: 1em;\n  }\n\n  .btnJoin p{\n    font-size: 0.8em;\n  }\n}\n\n/*# sourceMappingURL=data:application/json;base64,eyJ2ZXJzaW9uIjozLCJzb3VyY2VzIjpbInNyYy9hcHAvY29tcG9uZW50cy9jb250ZW50LXRhYmxlLW5vdGlmeS1hdC9jb250ZW50LXRhYmxlLW5vdGlmeS1hdC5jb21wb25lbnQuY3NzIl0sIm5hbWVzIjpbXSwibWFwcGluZ3MiOiJBQUFBO0VBQ0UsdUJBQXVCO0VBQ3ZCLGdDQUFnRTtBQUNsRTs7QUFFQTtFQUNFLHVCQUF1QjtFQUN2Qiw2QkFBNEQ7QUFDOUQ7O0FBRUE7RUFDRSxxQ0FBcUM7RUFDckMsY0FBYztFQUNkLGdCQUFnQjtBQUNsQjs7QUFFQTs7RUFFRSxxREFBcUQ7RUFDckQsY0FBYztFQUNkLGNBQWM7QUFDaEI7O0FBSUE7RUFDRSxjQUFjO0VBQ2QsMEJBQTBCO0FBQzVCOztBQUVBO0VBQ0UsVUFBVTtFQUNWLFNBQVM7RUFDVCxrQkFBa0I7RUFDbEIsV0FBVztFQUNYLFNBQVM7QUFDWDs7QUFFQTtFQUNFLFVBQVU7RUFDVixpQkFBaUI7QUFDbkI7O0FBRUE7RUFDRSxlQUFlO0VBQ2YsU0FBUztFQUNULFVBQVU7RUFDVixXQUFXO0VBQ1gsWUFBWTtFQUNaLFNBQVM7RUFDVCxVQUFVO0VBQ1YsOEJBQThCO0VBQzlCLGNBQWM7QUFDaEI7O0FBRUE7RUFDRSxZQUFZO0VBQ1osV0FBVztFQUNYLFVBQVU7RUFDVix3Q0FBOEQ7RUFDOUQsK0JBQStCO0VBQy9CLHNCQUFzQjtFQUN0QixZQUFZO0FBQ2Q7O0FBRUE7RUFDRSx5QkFBeUI7QUFDM0I7O0FBRUE7RUFDRSxhQUFhO0VBQ2IsWUFBWTtFQUNaLGtCQUFrQjtFQUNsQixZQUFZO0VBQ1osV0FBVztFQUNYLE9BQU87RUFDUCxVQUFVO0VBQ1YsZ0JBQWdCO0VBQ2hCLFNBQVM7RUFDVCxVQUFVO0VBQ1YsY0FBYztFQUNkLHVCQUF1QjtFQUN2QixnQkFBZ0I7QUFDbEI7O0FBRUE7RUFDRSxpQkFBaUI7RUFDakIsWUFBWTtFQUNaLGFBQWE7RUFDYixZQUFZO0VBQ1oseUJBQXlCO0VBQ3pCLDBCQUEwQjtFQUMxQixxQkFBcUI7RUFDckIsWUFBWTtFQUNaLHdCQUF3QjtFQUN4Qiw0QkFBNEI7RUFDNUIsV0FBVztBQUNiOztBQUVBO0VBQ0Usc0dBQThGO1VBQTlGLDhGQUE4RjtFQUM5RixZQUFZO0VBQ1osd0JBQXdCO0FBQzFCOztBQUVBO0VBQ0UsZUFBZTtFQUNmLFNBQVM7RUFDVCxVQUFVO0VBQ1YsWUFBWTtFQUNaLFdBQVc7RUFDWCxtQkFBbUI7RUFDbkIsWUFBWTtBQUNkOztBQUVBLGtCQUFrQix5QkFBeUIsRUFBRTs7QUFDN0Msa0JBQWtCLHlCQUF5QixFQUFFOztBQUM3QyxrQkFBa0IseUJBQXlCLEVBQUU7O0FBQzdDLGtCQUFrQix5QkFBeUIsRUFBRTs7QUFDN0Msa0JBQWtCLHlCQUF5QixFQUFFOztBQUM3QyxrQkFBa0IseUJBQXlCLEVBQUU7O0FBRTdDLGVBQWUsa0JBQWtCLEVBQUUsY0FBYyxFQUFFOztBQUNuRCxlQUFlLGtCQUFrQixFQUFFLGNBQWMsRUFBRTs7QUFDbkQsZUFBZSxrQkFBa0IsRUFBRSxjQUFjLEVBQUU7O0FBQ25ELGVBQWUsa0JBQWtCLEVBQUUsY0FBYyxFQUFFOztBQUNuRCxlQUFlLGtCQUFrQixFQUFFLGNBQWMsRUFBRTs7QUFDbkQsZUFBZSxrQkFBa0IsRUFBRSxjQUFjLEVBQUU7O0FBR25EO0VBQ0U7SUFDRSxjQUFjO0VBQ2hCOztFQUVBO0lBQ0UsZ0JBQWdCO0VBQ2xCO0FBQ0YiLCJmaWxlIjoic3JjL2FwcC9jb21wb25lbnRzL2NvbnRlbnQtdGFibGUtbm90aWZ5LWF0L2NvbnRlbnQtdGFibGUtbm90aWZ5LWF0LmNvbXBvbmVudC5jc3MiLCJzb3VyY2VzQ29udGVudCI6WyJAZm9udC1mYWNlIHtcbiAgZm9udC1mYW1pbHk6ICdPcGVuU2Fucyc7XG4gIHNyYzogdXJsKFwiLi4vLi4vLi4vYXNzZXRzL2ZvbnRzL09wZW5fU2Fucy9PcGVuU2Fucy1SZWd1bGFyLnR0ZlwiKTtcbn1cblxuQGZvbnQtZmFjZSB7XG4gIGZvbnQtZmFtaWx5OiAnVm9sbGtvcm4nO1xuICBzcmM6IHVybChcIi4uLy4uLy4uL2Fzc2V0cy9mb250cy9Wb2xsa29ybi9Wb2xsa29ybi1Cb2xkLnR0ZlwiKTtcbn1cblxuaDF7XG4gIGZvbnQtZmFtaWx5OiAnVm9sbGtvcm4nLCBUaW1lcywgc2VyaWY7XG4gIG1hcmdpbjogMjBweCAwO1xuICBmb250LXNpemU6IDEuNmVtO1xufVxuXG4uYnRuSm9pbiBidXR0b24sXG5we1xuICBmb250LWZhbWlseTogJ09wZW5TYW5zJywgSGVsdmV0aWNhLCBBcmlhbCwgU2Fucy1TZXJpZjtcbiAgbWFyZ2luOiAxMHB4IDA7XG4gIGZvbnQtc2l6ZTogMWVtO1xufVxuXG5cblxuYXtcbiAgY29sb3I6ICMwMDU3YTM7XG4gIHRleHQtZGVjb3JhdGlvbjogdW5kZXJsaW5lO1xufVxuXG4ud3JhcHBlciB7XG4gIHBhZGRpbmc6IDA7XG4gIG1hcmdpbjogMDtcbiAgcG9zaXRpb246IGFic29sdXRlO1xuICB3aWR0aDogMTAwJTtcbiAgdG9wOiA5MHB4O1xufVxuXG4ud3JhcHBlckNvbnRlbnR7XG4gIHdpZHRoOiA3MCU7XG4gIG1hcmdpbjogMjBweCBhdXRvO1xufVxuXG4uYnRuSm9pbntcbiAgcG9zaXRpb246IGZpeGVkO1xuICBib3R0b206IDA7XG4gIHotaW5kZXg6IDU7XG4gIHdpZHRoOiAxMDAlO1xuICBoZWlnaHQ6IDgwcHg7XG4gIG1hcmdpbjogMDtcbiAgcGFkZGluZzogMDtcbiAgYm9yZGVyLXRvcDogMTVweCBzb2xpZCAjNDk0OTQ5O1xuICBjb2xvcjogI2ZmZmZmZjtcbn1cblxuLmJ0bkpvaW4gLmljb3tcbiAgaGVpZ2h0OiA1MHB4O1xuICB3aWR0aDogNTBweDtcbiAgZmxvYXQ6bGVmdDtcbiAgYmFja2dyb3VuZC1pbWFnZTogdXJsKFwiLi4vLi4vLi4vYXNzZXRzL2ljb25zL1dhcHBlbkljb25zLnBuZ1wiKTtcbiAgYmFja2dyb3VuZC1wb3NpdGlvbjogLTEwcHggNTBweDtcbiAgYmFja2dyb3VuZC1zaXplOiAxMDAwJTtcbiAgbWFyZ2luOiAxNXB4O1xufVxuXG4uYnRuSm9pbiAubXNne1xuICBtYXJnaW46IDE1cHggMTVweCAwcHggMHB4O1xufVxuXG4uYnRuSm9pbiBidXR0b257XG4gIG91dGxpbmU6IG5vbmU7XG4gIGJvcmRlcjogbm9uZTtcbiAgcG9zaXRpb246IGFic29sdXRlO1xuICBoZWlnaHQ6IDgwcHg7XG4gIHdpZHRoOiAxMDAlO1xuICB0b3A6MHB4O1xuICBsZWZ0OiA4MHB4O1xuICB0ZXh0LWFsaWduOiBsZWZ0O1xuICBtYXJnaW46IDA7XG4gIHBhZGRpbmc6IDA7XG4gIGNvbG9yOiAjZmZmZmZmO1xuICBiYWNrZ3JvdW5kOiB0cmFuc3BhcmVudDtcbiAgZm9udC1zaXplOiAxLjNlbTtcbn1cblxuLmJ0bkJhY2t7XG4gIHBvc2l0aW9uOmFic29sdXRlO1xuICBib3JkZXI6IG5vbmU7XG4gIG91dGxpbmU6IG5vbmU7XG4gIGhlaWdodDogNTBweDtcbiAgYmFja2dyb3VuZC1jb2xvcjogIzQ5NDk0OTtcbiAgbWFyZ2luOiAyMHB4IDIwcHggMHB4IDIwcHg7XG4gIGJhY2tncm91bmQtc2l6ZTogNTBweDtcbiAgd2lkdGg6IDEwMHB4O1xuICBiYWNrZ3JvdW5kLXBvc2l0aW9uOiAxMCU7XG4gIGJhY2tncm91bmQtcmVwZWF0OiBuby1yZXBlYXQ7XG4gIHotaW5kZXg6IC0xO1xufVxuXG4uYnRuQmFjayBpbWd7XG4gIGZpbHRlcjogaW52ZXJ0KDk5JSkgc2VwaWEoNyUpIHNhdHVyYXRlKDkwJSkgaHVlLXJvdGF0ZSgyMjZkZWcpIGJyaWdodG5lc3MoMTIwJSkgY29udHJhc3QoMTAwJSk7XG4gIGhlaWdodDogMzZweDtcbiAgbWFyZ2luOiA3cHggMHB4IDBweCA1MHB4O1xufVxuXG4uYnRuSm9pbkRpc2FibGVke1xuICBwb3NpdGlvbjogZml4ZWQ7XG4gIGJvdHRvbTogMDtcbiAgei1pbmRleDogNjtcbiAgaGVpZ2h0OiA5NXB4O1xuICB3aWR0aDogMTAwJTtcbiAgYmFja2dyb3VuZDogIzY2NjY2NjtcbiAgb3BhY2l0eTogMC41O1xufVxuXG4uU2VjXzEwIC5idG5Kb2lueyBiYWNrZ3JvdW5kLWNvbG9yOiAjODIzYTNhOyB9XG4uU2VjXzIwIC5idG5Kb2lueyBiYWNrZ3JvdW5kLWNvbG9yOiAjMzA1OTc4OyB9XG4uU2VjXzMwIC5idG5Kb2lueyBiYWNrZ3JvdW5kLWNvbG9yOiAjNzU1MzAwOyB9XG4uU2VjXzQwIC5idG5Kb2lueyBiYWNrZ3JvdW5kLWNvbG9yOiAjMWQ2MzVkOyB9XG4uU2VjXzUwIC5idG5Kb2lueyBiYWNrZ3JvdW5kLWNvbG9yOiAjNWM0MTZhOyB9XG4uU2VjXzYwIC5idG5Kb2lueyBiYWNrZ3JvdW5kLWNvbG9yOiAjMzI2MzNhOyB9XG5cbi5TZWNfMTAgLm5vdGV7IHRleHQtYWxpZ246IGNlbnRlcjsgY29sb3I6ICM4MjNhM2E7IH1cbi5TZWNfMjAgLm5vdGV7IHRleHQtYWxpZ246IGNlbnRlcjsgY29sb3I6ICMzMDU5Nzg7IH1cbi5TZWNfMzAgLm5vdGV7IHRleHQtYWxpZ246IGNlbnRlcjsgY29sb3I6ICM3NTUzMDA7IH1cbi5TZWNfNDAgLm5vdGV7IHRleHQtYWxpZ246IGNlbnRlcjsgY29sb3I6ICMxZDYzNWQ7IH1cbi5TZWNfNTAgLm5vdGV7IHRleHQtYWxpZ246IGNlbnRlcjsgY29sb3I6ICM1YzQxNmE7IH1cbi5TZWNfNjAgLm5vdGV7IHRleHQtYWxpZ246IGNlbnRlcjsgY29sb3I6ICMzMjYzM2E7IH1cblxuXG5AbWVkaWEgKG1heC13aWR0aDogMzcwcHgpIHtcbiAgLmJ0bkpvaW4gYnV0dG9ue1xuICAgIGZvbnQtc2l6ZTogMWVtO1xuICB9XG5cbiAgLmJ0bkpvaW4gcHtcbiAgICBmb250LXNpemU6IDAuOGVtO1xuICB9XG59XG4iXX0= */"

/***/ }),

/***/ "./src/app/components/content-table-notify-at/content-table-notify-at.component.html":
/*!*******************************************************************************************!*\
  !*** ./src/app/components/content-table-notify-at/content-table-notify-at.component.html ***!
  \*******************************************************************************************/
/*! no static exports found */
/***/ (function(module, exports) {

module.exports = "<div class=\"btnBack\"><img src=\"./assets/icons/Timeline/{{getSectionIcon(location.parentId)}}.png\" /></div>\n<div class=\"wrapper Sec_{{location.parentId}}\">\n  <div class=\"wrapperContent\">\n    <h1>{{location.description}}</h1>\n\n    <div *ngFor=\"let cont of location.contents\">\n      <p *ngIf=\"cont.contentTypeId == 1\">{{cont.content}}</p>\n      <img *ngIf=\"cont.contentTypeId == 2\" src=\"{{cont.content}}\" />\n    </div>\n\n    <p class=\"note\">{{ 'notifiyExhibit.interactiveExhibitMsg' | translate }}</p>\n    <div class=\"webdevtools\" *ngIf=\"isWeb && !joinGame\" style=\"margin-top:20px\">\n      <button (click)=\"redirectToOnTable()\">Register Location TableOn</button>\n    </div>\n  </div>\n\n  <div class=\"btnJoin\">\n    <div class=\"ico\"></div>\n    <div class=\"msg\">\n      <div *ngIf=\"locationStatusFree\">\n        <button *ngIf=\"joinGame\" (click)=\"startOnTableSearch()\">{{ 'notifiyExhibit.tableJoinButton' | translate }}</button>\n        <p *ngIf=\"!joinGame\">{{ 'notifiyExhibit.beaconPutText' | translate }}</p>\n        <p *ngIf=\"locationSocketStatus === 'OCCUPIED'\">{{ 'notifiyExhibit.beaconOccupiedText' | translate }}</p>\n\n      </div>\n      <div *ngIf=\"locationStatusOccupied\"><p>{{ 'notifiyExhibit.tableOccupiedText' | translate }}</p></div>\n      <div *ngIf=\"locationStatusOffline\"><p>{{ 'notifiyExhibit.tableOfflineText' | translate }}</p></div>\n    </div>\n  </div>\n  <div class=\"btnJoinDisabled\" *ngIf=\"locationStatusOffline || locationStatusOccupied || !joinGame || locationSocketStatus === 'OCCUPIED'\"></div>\n</div>\n"

/***/ }),

/***/ "./src/app/components/content-table-notify-at/content-table-notify-at.component.ts":
/*!*****************************************************************************************!*\
  !*** ./src/app/components/content-table-notify-at/content-table-notify-at.component.ts ***!
  \*****************************************************************************************/
/*! exports provided: ContentTableNotifyAtComponent */
/***/ (function(module, __webpack_exports__, __webpack_require__) {

"use strict";
__webpack_require__.r(__webpack_exports__);
/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, "ContentTableNotifyAtComponent", function() { return ContentTableNotifyAtComponent; });
/* harmony import */ var _angular_core__WEBPACK_IMPORTED_MODULE_0__ = __webpack_require__(/*! @angular/core */ "./node_modules/@angular/core/fesm5/core.js");
/* harmony import */ var _services_location_service__WEBPACK_IMPORTED_MODULE_1__ = __webpack_require__(/*! ../../services/location.service */ "./src/app/services/location.service.ts");
/* harmony import */ var _angular_router__WEBPACK_IMPORTED_MODULE_2__ = __webpack_require__(/*! @angular/router */ "./node_modules/@angular/router/fesm5/router.js");
/* harmony import */ var _services_transmission_service__WEBPACK_IMPORTED_MODULE_3__ = __webpack_require__(/*! ../../services/transmission.service */ "./src/app/services/transmission.service.ts");
/* harmony import */ var _services_native_native_communication_service__WEBPACK_IMPORTED_MODULE_4__ = __webpack_require__(/*! ../../services/native/native-communication.service */ "./src/app/services/native/native-communication.service.ts");
/* harmony import */ var _services_god_god_service__WEBPACK_IMPORTED_MODULE_5__ = __webpack_require__(/*! ../../services/god/god.service */ "./src/app/services/god/god.service.ts");
/* harmony import */ var _services_native_native_response_service__WEBPACK_IMPORTED_MODULE_6__ = __webpack_require__(/*! ../../services/native/native-response.service */ "./src/app/services/native/native-response.service.ts");
/* harmony import */ var _store_actions_LocationActions__WEBPACK_IMPORTED_MODULE_7__ = __webpack_require__(/*! ../../store/actions/LocationActions */ "./src/app/store/actions/LocationActions.ts");
/* harmony import */ var rxjs_compat_observable_TimerObservable__WEBPACK_IMPORTED_MODULE_8__ = __webpack_require__(/*! rxjs-compat/observable/TimerObservable */ "./node_modules/rxjs-compat/observable/TimerObservable.js");
/* harmony import */ var rxjs_compat_observable_TimerObservable__WEBPACK_IMPORTED_MODULE_8___default = /*#__PURE__*/__webpack_require__.n(rxjs_compat_observable_TimerObservable__WEBPACK_IMPORTED_MODULE_8__);
var __decorate = (undefined && undefined.__decorate) || function (decorators, target, key, desc) {
    var c = arguments.length, r = c < 3 ? target : desc === null ? desc = Object.getOwnPropertyDescriptor(target, key) : desc, d;
    if (typeof Reflect === "object" && typeof Reflect.decorate === "function") r = Reflect.decorate(decorators, target, key, desc);
    else for (var i = decorators.length - 1; i >= 0; i--) if (d = decorators[i]) r = (c < 3 ? d(r) : c > 3 ? d(target, key, r) : d(target, key)) || r;
    return c > 3 && r && Object.defineProperty(target, key, r), r;
};
var __metadata = (undefined && undefined.__metadata) || function (k, v) {
    if (typeof Reflect === "object" && typeof Reflect.metadata === "function") return Reflect.metadata(k, v);
};
var __param = (undefined && undefined.__param) || function (paramIndex, decorator) {
    return function (target, key) { decorator(target, key, paramIndex); }
};









var ContentTableNotifyAtComponent = /** @class */ (function () {
    function ContentTableNotifyAtComponent(godService, router, locationService, transmissionService, responseService, appStore, locationActions, nativeCommunicationService) {
        var _this = this;
        this.godService = godService;
        this.router = router;
        this.locationService = locationService;
        this.transmissionService = transmissionService;
        this.responseService = responseService;
        this.appStore = appStore;
        this.locationActions = locationActions;
        this.nativeCommunicationService = nativeCommunicationService;
        this.sectionList = [
            { code: 10, icon: 'Trumpet', primaryColor: '#823a3a', secondaryColor: '#a85757' },
            { code: 20, icon: 'DocumentSword', primaryColor: '#305978', secondaryColor: '#4b799c' },
            { code: 30, icon: 'Maximilian', primaryColor: '#755300', secondaryColor: '#906e1b' },
            { code: 40, icon: 'Veil', primaryColor: '#1d635d', secondaryColor: '#3c7f7a' },
            { code: 50, icon: 'Shrine', primaryColor: '#5c416a', secondaryColor: '#785d86' },
            { code: 60, icon: 'Tombstone', primaryColor: '#32633a', secondaryColor: '#4c7d54' }
        ];
        this._unsubscribe = this.appStore.subscribe(function () {
            var state = _this.appStore.getState();
            _this.updateLocationStatus(state.locationStatus);
            if (state.closestExhibit) {
                _this.updateJoinButtonStatus(state.closestExhibit);
            }
            _this.locationSocketStatus = state.locationSocketStatus;
        });
        this._curLocSubscribe = this.locationService.currentLocation.subscribe(function (value) {
            _this.location = value;
        });
        this.navigationSubscription = this.router.events.subscribe(function (e) {
            // If it is a NavigationEnd event re-initalise the component
            if (e instanceof _angular_router__WEBPACK_IMPORTED_MODULE_2__["NavigationEnd"]) {
                _this.initialiseInvites();
            }
        });
    }
    ContentTableNotifyAtComponent.prototype.ngOnInit = function () {
        this.initialiseInvites();
    };
    ContentTableNotifyAtComponent.prototype.initialiseInvites = function () {
        var _this = this;
        this.location = this.locationService.currentLocation.value;
        this.locationName = this.location.description;
        this.locationId = this.location.id;
        this.locationStatusFree = false;
        this.locationStatusOccupied = false;
        this.locationStatusOffline = false;
        this.locationType = this.location.locationTypeId;
        this.joinGame = true;
        this.isWeb = this.nativeCommunicationService.isWeb;
        // Timer starts after 1sec, repeats every 5sec
        this.checkStatusTimer = rxjs_compat_observable_TimerObservable__WEBPACK_IMPORTED_MODULE_8__["TimerObservable"].create(100, 5000);
        this._statusTimerSubscription = this.checkStatusTimer.subscribe(function () {
            _this.godService.checkLocationStatus(_this.locationId);
        });
    };
    ContentTableNotifyAtComponent.prototype.ngOnDestroy = function () {
        // Stop the timer
        this._statusTimerSubscription.unsubscribe();
        this._unsubscribe();
        this._curLocSubscribe.unsubscribe();
        this.navigationSubscription.unsubscribe();
    };
    ContentTableNotifyAtComponent.prototype.updateJoinButtonStatus = function (locationId) {
        // Checking if the closest exhibit is the current active exhibit or one of the tableOn beacons
        this.isJoinButtonUnlocked = this.locationService.isActiveLocationInRange(locationId);
    };
    ContentTableNotifyAtComponent.prototype.updateLocationStatus = function (status) {
        if (status === 'FREE') {
            this.locationStatusFree = true;
            this.locationStatusOccupied = false;
            this.locationStatusOffline = false;
        }
        else if (status === 'OCCUPIED') {
            this.locationStatusFree = false;
            this.locationStatusOccupied = true;
            this.locationStatusOffline = false;
        }
        else if (status === 'OFFLINE') {
            this.locationStatusOffline = true;
            this.locationStatusFree = false;
            this.locationStatusOccupied = false;
        }
    };
    ContentTableNotifyAtComponent.prototype.getSectionIcon = function (sectionId) {
        var icon = '';
        this.sectionList.forEach(function (section) {
            if (section.code === sectionId) {
                icon = section.icon;
            }
        });
        return icon;
    };
    // saves ID of current exhibit in localstorage
    ContentTableNotifyAtComponent.prototype.startOnTableSearch = function () {
        this.joinGame = false;
        this.locationService.stopLocationScanning();
        this.appStore.dispatch(this.locationActions.changeAtExhibitParentId(this.locationId));
    };
    /*
    ------------------------------------------------------------
                        Helper functions
    ------------------------------------------------------------
    */
    ContentTableNotifyAtComponent.prototype.redirectToOnTable = function () {
        this.responseService.timelineUpdate({ minor: 5021, major: 502 });
    };
    ContentTableNotifyAtComponent = __decorate([
        Object(_angular_core__WEBPACK_IMPORTED_MODULE_0__["Component"])({
            selector: 'app-content-table-notify-at',
            template: __webpack_require__(/*! ./content-table-notify-at.component.html */ "./src/app/components/content-table-notify-at/content-table-notify-at.component.html"),
            styles: [__webpack_require__(/*! ./content-table-notify-at.component.css */ "./src/app/components/content-table-notify-at/content-table-notify-at.component.css")]
        }),
        __param(5, Object(_angular_core__WEBPACK_IMPORTED_MODULE_0__["Inject"])('AppStore')),
        __metadata("design:paramtypes", [_services_god_god_service__WEBPACK_IMPORTED_MODULE_5__["GodService"],
            _angular_router__WEBPACK_IMPORTED_MODULE_2__["Router"],
            _services_location_service__WEBPACK_IMPORTED_MODULE_1__["LocationService"],
            _services_transmission_service__WEBPACK_IMPORTED_MODULE_3__["TransmissionService"],
            _services_native_native_response_service__WEBPACK_IMPORTED_MODULE_6__["NativeResponseService"], Object, _store_actions_LocationActions__WEBPACK_IMPORTED_MODULE_7__["LocationActions"],
            _services_native_native_communication_service__WEBPACK_IMPORTED_MODULE_4__["NativeCommunicationService"]])
    ], ContentTableNotifyAtComponent);
    return ContentTableNotifyAtComponent;
}());



/***/ }),

/***/ "./src/app/components/content-table-notify-on/content-table-notify-on.component.css":
/*!******************************************************************************************!*\
  !*** ./src/app/components/content-table-notify-on/content-table-notify-on.component.css ***!
  \******************************************************************************************/
/*! no static exports found */
/***/ (function(module, exports) {

module.exports = "@font-face {\n  font-family: 'OpenSans';\n  src: url('OpenSans-Regular.ttf');\n}\n\n@font-face {\n  font-family: 'Vollkorn';\n  src: url('Vollkorn-Bold.ttf');\n}\n\nh1{\n  font-family: 'Vollkorn', Times, serif;\n  margin: 20px 0;\n  font-size: 1.6em;\n}\n\n.btnJoin button,\np{\n  font-family: 'OpenSans', Helvetica, Arial, Sans-Serif;\n  margin: 10px 0;\n  font-size: 1em;\n}\n\na{\n  color: #0057a3;\n  text-decoration: underline;\n}\n\n.wrapper {\n  padding: 0;\n  margin: 0;\n  position: absolute;\n  width: 100%;\n  top: 90px;\n}\n\n.wrapperContent{\n  width: 70%;\n  margin: 20px auto;\n}\n\n.btnJoin{\n  position: fixed;\n  bottom: 0;\n  z-index: 5;\n  width: 100%;\n  height: 80px;\n  margin: 0;\n  padding: 0;\n  border-top: 15px solid #494949;\n  color: #ffffff;\n}\n\n.btnJoin .ico{\n  height: 50px;\n  width: 50px;\n  float:left;\n  background-image: url('WappenIcons.png');\n  background-position: -10px 50px;\n  background-size: 1000%;\n  margin: 15px;\n}\n\n.btnJoin .msg{\n  margin: 15px 15px 0px 0px;\n}\n\n.btnJoin button{\n  outline: none;\n  border: none;\n  position: absolute;\n  height: 80px;\n  width: 100%;\n  top:0px;\n  left: 80px;\n  text-align: left;\n  margin: 0;\n  padding: 0;\n  color: #ffffff;\n  background: transparent;\n  font-size: 1.3em;\n}\n\n.btnBack{\n  position:absolute;\n  border: none;\n  outline: none;\n  height: 50px;\n  background-color: #494949;\n  margin: 20px 20px 0px 20px;\n  background-size: 50px;\n  width: 100px;\n  background-position: 10%;\n  background-repeat: no-repeat;\n  z-index: -1;\n}\n\n.btnBack img{\n  -webkit-filter: invert(99%) sepia(7%) saturate(90%) hue-rotate(226deg) brightness(120%) contrast(100%);\n          filter: invert(99%) sepia(7%) saturate(90%) hue-rotate(226deg) brightness(120%) contrast(100%);\n  height: 36px;\n  margin: 7px 0px 0px 50px;\n}\n\n.btnJoinDisabled{\n  position: fixed;\n  bottom: 0;\n  z-index: 6;\n  height: 95px;\n  width: 100%;\n  background: #666666;\n  opacity: 0.5;\n}\n\n.Sec_502 .btnJoin{ background-color: #5c416a; }\n\n.Sec_502 .note{ text-align: center; color: #5c416a; }\n\n@media (max-width: 370px) {\n  .btnJoin button{\n    font-size: 1em;\n  }\n\n  .btnJoin p{\n    font-size: 0.8em;\n  }\n}\n\n/*# sourceMappingURL=data:application/json;base64,eyJ2ZXJzaW9uIjozLCJzb3VyY2VzIjpbInNyYy9hcHAvY29tcG9uZW50cy9jb250ZW50LXRhYmxlLW5vdGlmeS1vbi9jb250ZW50LXRhYmxlLW5vdGlmeS1vbi5jb21wb25lbnQuY3NzIl0sIm5hbWVzIjpbXSwibWFwcGluZ3MiOiJBQUFBO0VBQ0UsdUJBQXVCO0VBQ3ZCLGdDQUFnRTtBQUNsRTs7QUFFQTtFQUNFLHVCQUF1QjtFQUN2Qiw2QkFBNEQ7QUFDOUQ7O0FBRUE7RUFDRSxxQ0FBcUM7RUFDckMsY0FBYztFQUNkLGdCQUFnQjtBQUNsQjs7QUFFQTs7RUFFRSxxREFBcUQ7RUFDckQsY0FBYztFQUNkLGNBQWM7QUFDaEI7O0FBSUE7RUFDRSxjQUFjO0VBQ2QsMEJBQTBCO0FBQzVCOztBQUVBO0VBQ0UsVUFBVTtFQUNWLFNBQVM7RUFDVCxrQkFBa0I7RUFDbEIsV0FBVztFQUNYLFNBQVM7QUFDWDs7QUFFQTtFQUNFLFVBQVU7RUFDVixpQkFBaUI7QUFDbkI7O0FBRUE7RUFDRSxlQUFlO0VBQ2YsU0FBUztFQUNULFVBQVU7RUFDVixXQUFXO0VBQ1gsWUFBWTtFQUNaLFNBQVM7RUFDVCxVQUFVO0VBQ1YsOEJBQThCO0VBQzlCLGNBQWM7QUFDaEI7O0FBRUE7RUFDRSxZQUFZO0VBQ1osV0FBVztFQUNYLFVBQVU7RUFDVix3Q0FBOEQ7RUFDOUQsK0JBQStCO0VBQy9CLHNCQUFzQjtFQUN0QixZQUFZO0FBQ2Q7O0FBRUE7RUFDRSx5QkFBeUI7QUFDM0I7O0FBRUE7RUFDRSxhQUFhO0VBQ2IsWUFBWTtFQUNaLGtCQUFrQjtFQUNsQixZQUFZO0VBQ1osV0FBVztFQUNYLE9BQU87RUFDUCxVQUFVO0VBQ1YsZ0JBQWdCO0VBQ2hCLFNBQVM7RUFDVCxVQUFVO0VBQ1YsY0FBYztFQUNkLHVCQUF1QjtFQUN2QixnQkFBZ0I7QUFDbEI7O0FBRUE7RUFDRSxpQkFBaUI7RUFDakIsWUFBWTtFQUNaLGFBQWE7RUFDYixZQUFZO0VBQ1oseUJBQXlCO0VBQ3pCLDBCQUEwQjtFQUMxQixxQkFBcUI7RUFDckIsWUFBWTtFQUNaLHdCQUF3QjtFQUN4Qiw0QkFBNEI7RUFDNUIsV0FBVztBQUNiOztBQUVBO0VBQ0Usc0dBQThGO1VBQTlGLDhGQUE4RjtFQUM5RixZQUFZO0VBQ1osd0JBQXdCO0FBQzFCOztBQUVBO0VBQ0UsZUFBZTtFQUNmLFNBQVM7RUFDVCxVQUFVO0VBQ1YsWUFBWTtFQUNaLFdBQVc7RUFDWCxtQkFBbUI7RUFDbkIsWUFBWTtBQUNkOztBQUdBLG1CQUFtQix5QkFBeUIsRUFBRTs7QUFDOUMsZ0JBQWdCLGtCQUFrQixFQUFFLGNBQWMsRUFBRTs7QUFJcEQ7RUFDRTtJQUNFLGNBQWM7RUFDaEI7O0VBRUE7SUFDRSxnQkFBZ0I7RUFDbEI7QUFDRiIsImZpbGUiOiJzcmMvYXBwL2NvbXBvbmVudHMvY29udGVudC10YWJsZS1ub3RpZnktb24vY29udGVudC10YWJsZS1ub3RpZnktb24uY29tcG9uZW50LmNzcyIsInNvdXJjZXNDb250ZW50IjpbIkBmb250LWZhY2Uge1xuICBmb250LWZhbWlseTogJ09wZW5TYW5zJztcbiAgc3JjOiB1cmwoXCIuLi8uLi8uLi9hc3NldHMvZm9udHMvT3Blbl9TYW5zL09wZW5TYW5zLVJlZ3VsYXIudHRmXCIpO1xufVxuXG5AZm9udC1mYWNlIHtcbiAgZm9udC1mYW1pbHk6ICdWb2xsa29ybic7XG4gIHNyYzogdXJsKFwiLi4vLi4vLi4vYXNzZXRzL2ZvbnRzL1ZvbGxrb3JuL1ZvbGxrb3JuLUJvbGQudHRmXCIpO1xufVxuXG5oMXtcbiAgZm9udC1mYW1pbHk6ICdWb2xsa29ybicsIFRpbWVzLCBzZXJpZjtcbiAgbWFyZ2luOiAyMHB4IDA7XG4gIGZvbnQtc2l6ZTogMS42ZW07XG59XG5cbi5idG5Kb2luIGJ1dHRvbixcbnB7XG4gIGZvbnQtZmFtaWx5OiAnT3BlblNhbnMnLCBIZWx2ZXRpY2EsIEFyaWFsLCBTYW5zLVNlcmlmO1xuICBtYXJnaW46IDEwcHggMDtcbiAgZm9udC1zaXplOiAxZW07XG59XG5cblxuXG5he1xuICBjb2xvcjogIzAwNTdhMztcbiAgdGV4dC1kZWNvcmF0aW9uOiB1bmRlcmxpbmU7XG59XG5cbi53cmFwcGVyIHtcbiAgcGFkZGluZzogMDtcbiAgbWFyZ2luOiAwO1xuICBwb3NpdGlvbjogYWJzb2x1dGU7XG4gIHdpZHRoOiAxMDAlO1xuICB0b3A6IDkwcHg7XG59XG5cbi53cmFwcGVyQ29udGVudHtcbiAgd2lkdGg6IDcwJTtcbiAgbWFyZ2luOiAyMHB4IGF1dG87XG59XG5cbi5idG5Kb2lue1xuICBwb3NpdGlvbjogZml4ZWQ7XG4gIGJvdHRvbTogMDtcbiAgei1pbmRleDogNTtcbiAgd2lkdGg6IDEwMCU7XG4gIGhlaWdodDogODBweDtcbiAgbWFyZ2luOiAwO1xuICBwYWRkaW5nOiAwO1xuICBib3JkZXItdG9wOiAxNXB4IHNvbGlkICM0OTQ5NDk7XG4gIGNvbG9yOiAjZmZmZmZmO1xufVxuXG4uYnRuSm9pbiAuaWNve1xuICBoZWlnaHQ6IDUwcHg7XG4gIHdpZHRoOiA1MHB4O1xuICBmbG9hdDpsZWZ0O1xuICBiYWNrZ3JvdW5kLWltYWdlOiB1cmwoXCIuLi8uLi8uLi9hc3NldHMvaWNvbnMvV2FwcGVuSWNvbnMucG5nXCIpO1xuICBiYWNrZ3JvdW5kLXBvc2l0aW9uOiAtMTBweCA1MHB4O1xuICBiYWNrZ3JvdW5kLXNpemU6IDEwMDAlO1xuICBtYXJnaW46IDE1cHg7XG59XG5cbi5idG5Kb2luIC5tc2d7XG4gIG1hcmdpbjogMTVweCAxNXB4IDBweCAwcHg7XG59XG5cbi5idG5Kb2luIGJ1dHRvbntcbiAgb3V0bGluZTogbm9uZTtcbiAgYm9yZGVyOiBub25lO1xuICBwb3NpdGlvbjogYWJzb2x1dGU7XG4gIGhlaWdodDogODBweDtcbiAgd2lkdGg6IDEwMCU7XG4gIHRvcDowcHg7XG4gIGxlZnQ6IDgwcHg7XG4gIHRleHQtYWxpZ246IGxlZnQ7XG4gIG1hcmdpbjogMDtcbiAgcGFkZGluZzogMDtcbiAgY29sb3I6ICNmZmZmZmY7XG4gIGJhY2tncm91bmQ6IHRyYW5zcGFyZW50O1xuICBmb250LXNpemU6IDEuM2VtO1xufVxuXG4uYnRuQmFja3tcbiAgcG9zaXRpb246YWJzb2x1dGU7XG4gIGJvcmRlcjogbm9uZTtcbiAgb3V0bGluZTogbm9uZTtcbiAgaGVpZ2h0OiA1MHB4O1xuICBiYWNrZ3JvdW5kLWNvbG9yOiAjNDk0OTQ5O1xuICBtYXJnaW46IDIwcHggMjBweCAwcHggMjBweDtcbiAgYmFja2dyb3VuZC1zaXplOiA1MHB4O1xuICB3aWR0aDogMTAwcHg7XG4gIGJhY2tncm91bmQtcG9zaXRpb246IDEwJTtcbiAgYmFja2dyb3VuZC1yZXBlYXQ6IG5vLXJlcGVhdDtcbiAgei1pbmRleDogLTE7XG59XG5cbi5idG5CYWNrIGltZ3tcbiAgZmlsdGVyOiBpbnZlcnQoOTklKSBzZXBpYSg3JSkgc2F0dXJhdGUoOTAlKSBodWUtcm90YXRlKDIyNmRlZykgYnJpZ2h0bmVzcygxMjAlKSBjb250cmFzdCgxMDAlKTtcbiAgaGVpZ2h0OiAzNnB4O1xuICBtYXJnaW46IDdweCAwcHggMHB4IDUwcHg7XG59XG5cbi5idG5Kb2luRGlzYWJsZWR7XG4gIHBvc2l0aW9uOiBmaXhlZDtcbiAgYm90dG9tOiAwO1xuICB6LWluZGV4OiA2O1xuICBoZWlnaHQ6IDk1cHg7XG4gIHdpZHRoOiAxMDAlO1xuICBiYWNrZ3JvdW5kOiAjNjY2NjY2O1xuICBvcGFjaXR5OiAwLjU7XG59XG5cblxuLlNlY181MDIgLmJ0bkpvaW57IGJhY2tncm91bmQtY29sb3I6ICM1YzQxNmE7IH1cbi5TZWNfNTAyIC5ub3RleyB0ZXh0LWFsaWduOiBjZW50ZXI7IGNvbG9yOiAjNWM0MTZhOyB9XG5cblxuXG5AbWVkaWEgKG1heC13aWR0aDogMzcwcHgpIHtcbiAgLmJ0bkpvaW4gYnV0dG9ue1xuICAgIGZvbnQtc2l6ZTogMWVtO1xuICB9XG5cbiAgLmJ0bkpvaW4gcHtcbiAgICBmb250LXNpemU6IDAuOGVtO1xuICB9XG59XG4iXX0= */"

/***/ }),

/***/ "./src/app/components/content-table-notify-on/content-table-notify-on.component.html":
/*!*******************************************************************************************!*\
  !*** ./src/app/components/content-table-notify-on/content-table-notify-on.component.html ***!
  \*******************************************************************************************/
/*! no static exports found */
/***/ (function(module, exports) {

module.exports = "<div class=\"wrapper Sec_{{location.parentId}}\">\n  <div class=\"wrapperContent\">\n    <section style=\"vertical-align: center\">\n      <mat-icon style=\"color:green; width: 40px; font-size: 40px; float:left;\">check_circle</mat-icon>\n      <h1>{{ 'notifiyExhibitOn.connectedMsg' | translate }}</h1>\n    </section>\n\n    <div *ngFor=\"let cont of location.contents\">\n      <p *ngIf=\"cont.contentTypeId == 1\">{{cont.content}}</p>\n      <img *ngIf=\"cont.contentTypeId == 2\" src=\"{{cont.content}}\" />\n    </div>\n\n    <p>{{ 'notifiyExhibitOn.connectionMsg' | translate }}</p>\n    <p>{{ 'notifiyExhibitOn.disconnectInfo' | translate }}</p>\n  </div>\n\n  <div class=\"btnJoin\">\n    <div class=\"ico\"></div>\n    <div class=\"msg\">\n      <div>\n        <button (click)=\"disconnectFromExhibit()\">{{ 'notifiyExhibitOn.disconnectButton' | translate }}</button>\n      </div>\n    </div>\n  </div>\n</div>\n"

/***/ }),

/***/ "./src/app/components/content-table-notify-on/content-table-notify-on.component.ts":
/*!*****************************************************************************************!*\
  !*** ./src/app/components/content-table-notify-on/content-table-notify-on.component.ts ***!
  \*****************************************************************************************/
/*! exports provided: ContentTableNotifyOnComponent */
/***/ (function(module, __webpack_exports__, __webpack_require__) {

"use strict";
__webpack_require__.r(__webpack_exports__);
/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, "ContentTableNotifyOnComponent", function() { return ContentTableNotifyOnComponent; });
/* harmony import */ var _angular_core__WEBPACK_IMPORTED_MODULE_0__ = __webpack_require__(/*! @angular/core */ "./node_modules/@angular/core/fesm5/core.js");
/* harmony import */ var _services_god_god_service__WEBPACK_IMPORTED_MODULE_1__ = __webpack_require__(/*! ../../services/god/god.service */ "./src/app/services/god/god.service.ts");
/* harmony import */ var _services_exhibit_exhibit_service__WEBPACK_IMPORTED_MODULE_2__ = __webpack_require__(/*! ../../services/exhibit/exhibit.service */ "./src/app/services/exhibit/exhibit.service.ts");
/* harmony import */ var _services_location_service__WEBPACK_IMPORTED_MODULE_3__ = __webpack_require__(/*! ../../services/location.service */ "./src/app/services/location.service.ts");
/* harmony import */ var _services_native_native_communication_service__WEBPACK_IMPORTED_MODULE_4__ = __webpack_require__(/*! ../../services/native/native-communication.service */ "./src/app/services/native/native-communication.service.ts");
/* harmony import */ var _store_actions_LocationActions__WEBPACK_IMPORTED_MODULE_5__ = __webpack_require__(/*! ../../store/actions/LocationActions */ "./src/app/store/actions/LocationActions.ts");
var __decorate = (undefined && undefined.__decorate) || function (decorators, target, key, desc) {
    var c = arguments.length, r = c < 3 ? target : desc === null ? desc = Object.getOwnPropertyDescriptor(target, key) : desc, d;
    if (typeof Reflect === "object" && typeof Reflect.decorate === "function") r = Reflect.decorate(decorators, target, key, desc);
    else for (var i = decorators.length - 1; i >= 0; i--) if (d = decorators[i]) r = (c < 3 ? d(r) : c > 3 ? d(target, key, r) : d(target, key)) || r;
    return c > 3 && r && Object.defineProperty(target, key, r), r;
};
var __metadata = (undefined && undefined.__metadata) || function (k, v) {
    if (typeof Reflect === "object" && typeof Reflect.metadata === "function") return Reflect.metadata(k, v);
};
var __param = (undefined && undefined.__param) || function (paramIndex, decorator) {
    return function (target, key) { decorator(target, key, paramIndex); }
};






var ContentTableNotifyOnComponent = /** @class */ (function () {
    function ContentTableNotifyOnComponent(godService, exhibitService, locationService, nativeCommunicationService, appStore, locationActions) {
        this.godService = godService;
        this.exhibitService = exhibitService;
        this.locationService = locationService;
        this.nativeCommunicationService = nativeCommunicationService;
        this.appStore = appStore;
        this.locationActions = locationActions;
    }
    ContentTableNotifyOnComponent.prototype.ngOnInit = function () {
        this.location = this.locationService.currentLocation.value;
        this.appStore.dispatch(this.locationActions.changeOnExhibit(false));
        this.locationService.stopLocationScanning();
    };
    ContentTableNotifyOnComponent.prototype.disconnectFromExhibit = function () {
        this.exhibitService.transmitGodDisconnect(this.location);
    };
    ContentTableNotifyOnComponent.prototype.ngOnDestroy = function () {
        this.locationService.startLocationScanning();
    };
    ContentTableNotifyOnComponent = __decorate([
        Object(_angular_core__WEBPACK_IMPORTED_MODULE_0__["Component"])({
            selector: 'app-content-table-notify-on',
            template: __webpack_require__(/*! ./content-table-notify-on.component.html */ "./src/app/components/content-table-notify-on/content-table-notify-on.component.html"),
            styles: [__webpack_require__(/*! ./content-table-notify-on.component.css */ "./src/app/components/content-table-notify-on/content-table-notify-on.component.css")]
        }),
        __param(4, Object(_angular_core__WEBPACK_IMPORTED_MODULE_0__["Inject"])('AppStore')),
        __metadata("design:paramtypes", [_services_god_god_service__WEBPACK_IMPORTED_MODULE_1__["GodService"],
            _services_exhibit_exhibit_service__WEBPACK_IMPORTED_MODULE_2__["ExhibitService"],
            _services_location_service__WEBPACK_IMPORTED_MODULE_3__["LocationService"],
            _services_native_native_communication_service__WEBPACK_IMPORTED_MODULE_4__["NativeCommunicationService"], Object, _store_actions_LocationActions__WEBPACK_IMPORTED_MODULE_5__["LocationActions"]])
    ], ContentTableNotifyOnComponent);
    return ContentTableNotifyOnComponent;
}());



/***/ }),

/***/ "./src/app/components/content-table-on/content-table-on.component.css":
/*!****************************************************************************!*\
  !*** ./src/app/components/content-table-on/content-table-on.component.css ***!
  \****************************************************************************/
/*! no static exports found */
/***/ (function(module, exports) {

module.exports = ".wrapper {\n  padding: 50px 40px 0 40px;\n}\n\n/*# sourceMappingURL=data:application/json;base64,eyJ2ZXJzaW9uIjozLCJzb3VyY2VzIjpbInNyYy9hcHAvY29tcG9uZW50cy9jb250ZW50LXRhYmxlLW9uL2NvbnRlbnQtdGFibGUtb24uY29tcG9uZW50LmNzcyJdLCJuYW1lcyI6W10sIm1hcHBpbmdzIjoiQUFBQTtFQUNFLHlCQUF5QjtBQUMzQiIsImZpbGUiOiJzcmMvYXBwL2NvbXBvbmVudHMvY29udGVudC10YWJsZS1vbi9jb250ZW50LXRhYmxlLW9uLmNvbXBvbmVudC5jc3MiLCJzb3VyY2VzQ29udGVudCI6WyIud3JhcHBlciB7XG4gIHBhZGRpbmc6IDUwcHggNDBweCAwIDQwcHg7XG59XG4iXX0= */"

/***/ }),

/***/ "./src/app/components/content-table-on/content-table-on.component.html":
/*!*****************************************************************************!*\
  !*** ./src/app/components/content-table-on/content-table-on.component.html ***!
  \*****************************************************************************/
/*! no static exports found */
/***/ (function(module, exports) {

module.exports = "<div class=\"wrapper\">\n    <h1>\n      Willkommen bei {{locationName}}\n    </h1>\n    <div *ngIf=\"connectionSuccess; else elseBlock\">\n      <h3>\n        <mat-icon style=\"color:green; width: 80px; font-size: 80px;\">check_circle</mat-icon>\n        Verbindung zum Table erfolgreich aufgebaut.\n        <br />\n        <br />\n        <button mat-raised-button color=\"primary\" (click)=\"sendMessageToExhibit()\">Send Message</button>\n      </h3>\n    </div>\n    <ng-template #elseBlock>\n      <mat-spinner></mat-spinner>\n      <h3>\n        Verbindung zum Table wird aufgebaut.\n      </h3>\n    </ng-template>\n\n    <button mat-raised-button color=\"primary\" (click)=\"disconnectFromExhibit()\">Disconnect Exhibit</button>\n</div>\n"

/***/ }),

/***/ "./src/app/components/content-table-on/content-table-on.component.ts":
/*!***************************************************************************!*\
  !*** ./src/app/components/content-table-on/content-table-on.component.ts ***!
  \***************************************************************************/
/*! exports provided: ContentTableOnComponent */
/***/ (function(module, __webpack_exports__, __webpack_require__) {

"use strict";
__webpack_require__.r(__webpack_exports__);
/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, "ContentTableOnComponent", function() { return ContentTableOnComponent; });
/* harmony import */ var _angular_core__WEBPACK_IMPORTED_MODULE_0__ = __webpack_require__(/*! @angular/core */ "./node_modules/@angular/core/fesm5/core.js");
/* harmony import */ var _services_god_god_service__WEBPACK_IMPORTED_MODULE_1__ = __webpack_require__(/*! ../../services/god/god.service */ "./src/app/services/god/god.service.ts");
/* harmony import */ var _services_location_service__WEBPACK_IMPORTED_MODULE_2__ = __webpack_require__(/*! ../../services/location.service */ "./src/app/services/location.service.ts");
/* harmony import */ var _services_exhibit_exhibit_service__WEBPACK_IMPORTED_MODULE_3__ = __webpack_require__(/*! ../../services/exhibit/exhibit.service */ "./src/app/services/exhibit/exhibit.service.ts");
/* harmony import */ var _store_actions_LocationActions__WEBPACK_IMPORTED_MODULE_4__ = __webpack_require__(/*! ../../store/actions/LocationActions */ "./src/app/store/actions/LocationActions.ts");
/* harmony import */ var _services_native_native_communication_service__WEBPACK_IMPORTED_MODULE_5__ = __webpack_require__(/*! ../../services/native/native-communication.service */ "./src/app/services/native/native-communication.service.ts");
var __decorate = (undefined && undefined.__decorate) || function (decorators, target, key, desc) {
    var c = arguments.length, r = c < 3 ? target : desc === null ? desc = Object.getOwnPropertyDescriptor(target, key) : desc, d;
    if (typeof Reflect === "object" && typeof Reflect.decorate === "function") r = Reflect.decorate(decorators, target, key, desc);
    else for (var i = decorators.length - 1; i >= 0; i--) if (d = decorators[i]) r = (c < 3 ? d(r) : c > 3 ? d(target, key, r) : d(target, key)) || r;
    return c > 3 && r && Object.defineProperty(target, key, r), r;
};
var __metadata = (undefined && undefined.__metadata) || function (k, v) {
    if (typeof Reflect === "object" && typeof Reflect.metadata === "function") return Reflect.metadata(k, v);
};
var __param = (undefined && undefined.__param) || function (paramIndex, decorator) {
    return function (target, key) { decorator(target, key, paramIndex); }
};






var ContentTableOnComponent = /** @class */ (function () {
    function ContentTableOnComponent(godService, exhibitService, locationService, nativeCommunicationService, appStore, locationActions) {
        var _this = this;
        this.godService = godService;
        this.exhibitService = exhibitService;
        this.locationService = locationService;
        this.nativeCommunicationService = nativeCommunicationService;
        this.appStore = appStore;
        this.locationActions = locationActions;
        this._unsubscribe = this.appStore.subscribe(function () {
            var state = _this.appStore.getState();
            _this.connectionSuccess = state.connectedToExhibit;
        });
    }
    ContentTableOnComponent.prototype.ngOnInit = function () {
        this._location = this.locationService.currentLocation.value;
        this.locationName = this._location.description;
        var parentLocation = this.locationService.findLocation(this._location.parentId);
        // TODO: get IP address from LocationService
        var url = 'http://' + parentLocation.ipAddress + ':8100';
        this.exhibitService.establishExhibitConnection(url);
        this.exhibitService.connectOD();
        // localStorage.setItem('onExhibit', JSON.stringify(true));
        this.appStore.dispatch(this.locationActions.changeOnExhibit(false));
        this.locationService.stopLocationScanning();
    };
    ContentTableOnComponent.prototype.ngOnDestroy = function () {
        this.exhibitService.disconnect();
        this._unsubscribe();
        this.locationService.startLocationScanning();
    };
    ContentTableOnComponent.prototype.disconnectFromExhibit = function () {
        this.exhibitService.disconnect();
    };
    ContentTableOnComponent.prototype.sendMessageToExhibit = function () {
        this.exhibitService.sendMessage();
    };
    ContentTableOnComponent = __decorate([
        Object(_angular_core__WEBPACK_IMPORTED_MODULE_0__["Component"])({
            selector: 'app-content-table-on',
            template: __webpack_require__(/*! ./content-table-on.component.html */ "./src/app/components/content-table-on/content-table-on.component.html"),
            styles: [__webpack_require__(/*! ./content-table-on.component.css */ "./src/app/components/content-table-on/content-table-on.component.css")]
        }),
        __param(4, Object(_angular_core__WEBPACK_IMPORTED_MODULE_0__["Inject"])('AppStore')),
        __metadata("design:paramtypes", [_services_god_god_service__WEBPACK_IMPORTED_MODULE_1__["GodService"],
            _services_exhibit_exhibit_service__WEBPACK_IMPORTED_MODULE_3__["ExhibitService"],
            _services_location_service__WEBPACK_IMPORTED_MODULE_2__["LocationService"],
            _services_native_native_communication_service__WEBPACK_IMPORTED_MODULE_5__["NativeCommunicationService"], Object, _store_actions_LocationActions__WEBPACK_IMPORTED_MODULE_4__["LocationActions"]])
    ], ContentTableOnComponent);
    return ContentTableOnComponent;
}());



/***/ }),

/***/ "./src/app/components/delete-dialog/delete-dialog.component.css":
/*!**********************************************************************!*\
  !*** ./src/app/components/delete-dialog/delete-dialog.component.css ***!
  \**********************************************************************/
/*! no static exports found */
/***/ (function(module, exports) {

module.exports = ".wrapper {\n  padding: 50px 40px 0 40px;\n}\n\n@font-face {\n  font-family: 'OpenSans';\n  src: url('OpenSans-Regular.ttf');\n}\n\n@font-face {\n  font-family: 'Vollkorn';\n  src: url('Vollkorn-Bold.ttf');\n}\n\nh1{\n  font-family: 'Vollkorn', Times, serif;\n    margin: 20px;\n    text-align: center;\n    font-size: 1.6em;\n}\n\np{\n  font-family: 'OpenSans', Helvetica, Arial, Sans-Serif;\n  margin: 0px;\n  text-align: center;\n  font-size: 1em;\n}\n\n.btnConfirm{\n  border: none;\n  outline: none;\n  text-transform: uppercase;\n  font-size: 1em;\n  font-family: 'OpenSans', Helvetica, Arial, Sans-Serif;\n  display: block;\n  margin: 10px auto;\n  background: #494949;\n  color: #ffffff;\n  min-width: 180px;\n  padding: 0.8em;\n}\n\n.btnCancel{\n    margin: -10px 0px 0px 0px;\n    float: right;\n    cursor: pointer;\n    font-size: 35px;\n}\n\n/*# sourceMappingURL=data:application/json;base64,eyJ2ZXJzaW9uIjozLCJzb3VyY2VzIjpbInNyYy9hcHAvY29tcG9uZW50cy9kZWxldGUtZGlhbG9nL2RlbGV0ZS1kaWFsb2cuY29tcG9uZW50LmNzcyJdLCJuYW1lcyI6W10sIm1hcHBpbmdzIjoiQUFBQTtFQUNFLHlCQUF5QjtBQUMzQjs7QUFFQTtFQUNFLHVCQUF1QjtFQUN2QixnQ0FBZ0U7QUFDbEU7O0FBRUE7RUFDRSx1QkFBdUI7RUFDdkIsNkJBQTREO0FBQzlEOztBQUVBO0VBQ0UscUNBQXFDO0lBQ25DLFlBQVk7SUFDWixrQkFBa0I7SUFDbEIsZ0JBQWdCO0FBQ3BCOztBQUVBO0VBQ0UscURBQXFEO0VBQ3JELFdBQVc7RUFDWCxrQkFBa0I7RUFDbEIsY0FBYztBQUNoQjs7QUFFQTtFQUNFLFlBQVk7RUFDWixhQUFhO0VBQ2IseUJBQXlCO0VBQ3pCLGNBQWM7RUFDZCxxREFBcUQ7RUFDckQsY0FBYztFQUNkLGlCQUFpQjtFQUNqQixtQkFBbUI7RUFDbkIsY0FBYztFQUNkLGdCQUFnQjtFQUNoQixjQUFjO0FBQ2hCOztBQUVBO0lBQ0kseUJBQXlCO0lBQ3pCLFlBQVk7SUFDWixlQUFlO0lBQ2YsZUFBZTtBQUNuQiIsImZpbGUiOiJzcmMvYXBwL2NvbXBvbmVudHMvZGVsZXRlLWRpYWxvZy9kZWxldGUtZGlhbG9nLmNvbXBvbmVudC5jc3MiLCJzb3VyY2VzQ29udGVudCI6WyIud3JhcHBlciB7XG4gIHBhZGRpbmc6IDUwcHggNDBweCAwIDQwcHg7XG59XG5cbkBmb250LWZhY2Uge1xuICBmb250LWZhbWlseTogJ09wZW5TYW5zJztcbiAgc3JjOiB1cmwoXCIuLi8uLi8uLi9hc3NldHMvZm9udHMvT3Blbl9TYW5zL09wZW5TYW5zLVJlZ3VsYXIudHRmXCIpO1xufVxuXG5AZm9udC1mYWNlIHtcbiAgZm9udC1mYW1pbHk6ICdWb2xsa29ybic7XG4gIHNyYzogdXJsKFwiLi4vLi4vLi4vYXNzZXRzL2ZvbnRzL1ZvbGxrb3JuL1ZvbGxrb3JuLUJvbGQudHRmXCIpO1xufVxuXG5oMXtcbiAgZm9udC1mYW1pbHk6ICdWb2xsa29ybicsIFRpbWVzLCBzZXJpZjtcbiAgICBtYXJnaW46IDIwcHg7XG4gICAgdGV4dC1hbGlnbjogY2VudGVyO1xuICAgIGZvbnQtc2l6ZTogMS42ZW07XG59XG5cbnB7XG4gIGZvbnQtZmFtaWx5OiAnT3BlblNhbnMnLCBIZWx2ZXRpY2EsIEFyaWFsLCBTYW5zLVNlcmlmO1xuICBtYXJnaW46IDBweDtcbiAgdGV4dC1hbGlnbjogY2VudGVyO1xuICBmb250LXNpemU6IDFlbTtcbn1cblxuLmJ0bkNvbmZpcm17XG4gIGJvcmRlcjogbm9uZTtcbiAgb3V0bGluZTogbm9uZTtcbiAgdGV4dC10cmFuc2Zvcm06IHVwcGVyY2FzZTtcbiAgZm9udC1zaXplOiAxZW07XG4gIGZvbnQtZmFtaWx5OiAnT3BlblNhbnMnLCBIZWx2ZXRpY2EsIEFyaWFsLCBTYW5zLVNlcmlmO1xuICBkaXNwbGF5OiBibG9jaztcbiAgbWFyZ2luOiAxMHB4IGF1dG87XG4gIGJhY2tncm91bmQ6ICM0OTQ5NDk7XG4gIGNvbG9yOiAjZmZmZmZmO1xuICBtaW4td2lkdGg6IDE4MHB4O1xuICBwYWRkaW5nOiAwLjhlbTtcbn1cblxuLmJ0bkNhbmNlbHtcbiAgICBtYXJnaW46IC0xMHB4IDBweCAwcHggMHB4O1xuICAgIGZsb2F0OiByaWdodDtcbiAgICBjdXJzb3I6IHBvaW50ZXI7XG4gICAgZm9udC1zaXplOiAzNXB4O1xufVxuIl19 */"

/***/ }),

/***/ "./src/app/components/delete-dialog/delete-dialog.component.html":
/*!***********************************************************************!*\
  !*** ./src/app/components/delete-dialog/delete-dialog.component.html ***!
  \***********************************************************************/
/*! no static exports found */
/***/ (function(module, exports) {

module.exports = "<mat-icon class=\"btnCancel\" (tap)=\"cancelDialog()\">close</mat-icon>\n<h1 matDialogTitle>{{ 'deleteDialog.title' | translate }}</h1>\n<div mat-dialog-content>\n  <p>{{ 'deleteDialog.text' | translate }} {{data.username}}?</p>\n</div>\n<mat-dialog-actions align=\"end\">\n  <button class=\"btnConfirm\" (tap)=\"confirmDialog()\">{{ 'deleteDialog.yesOption' | translate }}</button>\n</mat-dialog-actions>"

/***/ }),

/***/ "./src/app/components/delete-dialog/delete-dialog.component.ts":
/*!*********************************************************************!*\
  !*** ./src/app/components/delete-dialog/delete-dialog.component.ts ***!
  \*********************************************************************/
/*! exports provided: DeleteDialogComponent */
/***/ (function(module, __webpack_exports__, __webpack_require__) {

"use strict";
__webpack_require__.r(__webpack_exports__);
/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, "DeleteDialogComponent", function() { return DeleteDialogComponent; });
/* harmony import */ var _angular_core__WEBPACK_IMPORTED_MODULE_0__ = __webpack_require__(/*! @angular/core */ "./node_modules/@angular/core/fesm5/core.js");
/* harmony import */ var _angular_material__WEBPACK_IMPORTED_MODULE_1__ = __webpack_require__(/*! @angular/material */ "./node_modules/@angular/material/esm5/material.es5.js");
var __decorate = (undefined && undefined.__decorate) || function (decorators, target, key, desc) {
    var c = arguments.length, r = c < 3 ? target : desc === null ? desc = Object.getOwnPropertyDescriptor(target, key) : desc, d;
    if (typeof Reflect === "object" && typeof Reflect.decorate === "function") r = Reflect.decorate(decorators, target, key, desc);
    else for (var i = decorators.length - 1; i >= 0; i--) if (d = decorators[i]) r = (c < 3 ? d(r) : c > 3 ? d(target, key, r) : d(target, key)) || r;
    return c > 3 && r && Object.defineProperty(target, key, r), r;
};
var __metadata = (undefined && undefined.__metadata) || function (k, v) {
    if (typeof Reflect === "object" && typeof Reflect.metadata === "function") return Reflect.metadata(k, v);
};
var __param = (undefined && undefined.__param) || function (paramIndex, decorator) {
    return function (target, key) { decorator(target, key, paramIndex); }
};


var DeleteDialogComponent = /** @class */ (function () {
    function DeleteDialogComponent(thisDialogRef, data) {
        this.thisDialogRef = thisDialogRef;
        this.data = data;
    }
    DeleteDialogComponent.prototype.ngOnInit = function () {
    };
    DeleteDialogComponent.prototype.cancelDialog = function () {
        this.thisDialogRef.close('cancel');
    };
    DeleteDialogComponent.prototype.confirmDialog = function () {
        this.thisDialogRef.close('confirm');
    };
    DeleteDialogComponent = __decorate([
        Object(_angular_core__WEBPACK_IMPORTED_MODULE_0__["Component"])({
            selector: 'app-delete-dialog',
            template: __webpack_require__(/*! ./delete-dialog.component.html */ "./src/app/components/delete-dialog/delete-dialog.component.html"),
            styles: [__webpack_require__(/*! ./delete-dialog.component.css */ "./src/app/components/delete-dialog/delete-dialog.component.css")]
        }),
        __param(1, Object(_angular_core__WEBPACK_IMPORTED_MODULE_0__["Inject"])(_angular_material__WEBPACK_IMPORTED_MODULE_1__["MAT_DIALOG_DATA"])),
        __metadata("design:paramtypes", [_angular_material__WEBPACK_IMPORTED_MODULE_1__["MatDialogRef"], Object])
    ], DeleteDialogComponent);
    return DeleteDialogComponent;
}());



/***/ }),

/***/ "./src/app/components/education-quiz/education-quiz.component.css":
/*!************************************************************************!*\
  !*** ./src/app/components/education-quiz/education-quiz.component.css ***!
  \************************************************************************/
/*! no static exports found */
/***/ (function(module, exports) {

module.exports = "@font-face {\n    font-family: 'OpenSans';\n    src: url('OpenSans-Regular.ttf');\n}\n\n.wrapper h2{\n    font-family: 'OpenSans', Helvetica, Arial, Sans-Serif;\n    margin: 20px 50px;\n    text-align: center;\n    font-size: 1em;\n}\n\n.wrapper {\n    padding: 0;\n    margin: 0;\n    position: absolute;\n    width: 100%;\n    top: 90px;\n  }\n\n.optionsWrapper img{\n    width: 200px;\n    display: block;\n    position: relative;\n    margin: 1.5em auto;\n}\n\n.optionsWrapper{\n    width: 70%;\n    margin: 20px auto;\n}\n\n.btnOptions{\n    border: none;\n    outline: none;\n    text-transform: uppercase;\n    font-size: 1em;\n    font-family: 'OpenSans', Helvetica, Arial, Sans-Serif;\n    display: block;\n    margin: 1em auto 10px auto;\n    background: #494949;\n    color: #ffffff;\n    min-width: 180px;\n    padding: 0.8em;\n}\n\n.btnOptions.answer{\n    background: #93272c;\n}\n\n.btnOptions.Bernhardinus{\n    background: #1B5E20;\n}\n\n.success,\n  .error{\n    font-family: 'OpenSans', Helvetica, Arial, Sans-Serif;\n    text-align: center;\n    height: 2em;\n    font-size: 0.9em;\n  }\n\n.error{\n    color: #93272c;\n  }\n\n.success{\n    color: #1B5E20;\n  }\n\n.toolbar button{\n      border: none;\n      outline: none;\n      height: 50px;\n      width: 50px;\n      margin: 20px 20px 0px 20px; \n      background: #ffffff;\n  }\n\n.toolbar .closebutton{\n      float: right; \n      background: #494949;\n      color:#ffffff;\n  }\n\n.toolbar .closebutton mat-icon{\n      margin: 4px 0 0 -15px;\n      font-size: 40px;\n  }\n\n@media (max-height: 650px) {\n    .wrapper h2{\n      font-size: 0.8em;\n      margin: 10px 40px;\n    }\n  }\n  \n/*# sourceMappingURL=data:application/json;base64,eyJ2ZXJzaW9uIjozLCJzb3VyY2VzIjpbInNyYy9hcHAvY29tcG9uZW50cy9lZHVjYXRpb24tcXVpei9lZHVjYXRpb24tcXVpei5jb21wb25lbnQuY3NzIl0sIm5hbWVzIjpbXSwibWFwcGluZ3MiOiJBQUFBO0lBQ0ksdUJBQXVCO0lBQ3ZCLGdDQUFnRTtBQUNwRTs7QUFFQTtJQUNJLHFEQUFxRDtJQUNyRCxpQkFBaUI7SUFDakIsa0JBQWtCO0lBQ2xCLGNBQWM7QUFDbEI7O0FBRUE7SUFDSSxVQUFVO0lBQ1YsU0FBUztJQUNULGtCQUFrQjtJQUNsQixXQUFXO0lBQ1gsU0FBUztFQUNYOztBQUVGO0lBQ0ksWUFBWTtJQUNaLGNBQWM7SUFDZCxrQkFBa0I7SUFDbEIsa0JBQWtCO0FBQ3RCOztBQUVBO0lBQ0ksVUFBVTtJQUNWLGlCQUFpQjtBQUNyQjs7QUFFQTtJQUNJLFlBQVk7SUFDWixhQUFhO0lBQ2IseUJBQXlCO0lBQ3pCLGNBQWM7SUFDZCxxREFBcUQ7SUFDckQsY0FBYztJQUNkLDBCQUEwQjtJQUMxQixtQkFBbUI7SUFDbkIsY0FBYztJQUNkLGdCQUFnQjtJQUNoQixjQUFjO0FBQ2xCOztBQUVBO0lBQ0ksbUJBQW1CO0FBQ3ZCOztBQUVBO0lBQ0ksbUJBQW1CO0FBQ3ZCOztBQUVBOztJQUVJLHFEQUFxRDtJQUNyRCxrQkFBa0I7SUFDbEIsV0FBVztJQUNYLGdCQUFnQjtFQUNsQjs7QUFFQTtJQUNFLGNBQWM7RUFDaEI7O0FBRUE7SUFDRSxjQUFjO0VBQ2hCOztBQUVBO01BQ0ksWUFBWTtNQUNaLGFBQWE7TUFDYixZQUFZO01BQ1osV0FBVztNQUNYLDBCQUEwQjtNQUMxQixtQkFBbUI7RUFDdkI7O0FBRUE7TUFDSSxZQUFZO01BQ1osbUJBQW1CO01BQ25CLGFBQWE7RUFDakI7O0FBRUE7TUFDSSxxQkFBcUI7TUFDckIsZUFBZTtFQUNuQjs7QUFHQTtJQUNFO01BQ0UsZ0JBQWdCO01BQ2hCLGlCQUFpQjtJQUNuQjtFQUNGIiwiZmlsZSI6InNyYy9hcHAvY29tcG9uZW50cy9lZHVjYXRpb24tcXVpei9lZHVjYXRpb24tcXVpei5jb21wb25lbnQuY3NzIiwic291cmNlc0NvbnRlbnQiOlsiQGZvbnQtZmFjZSB7XG4gICAgZm9udC1mYW1pbHk6ICdPcGVuU2Fucyc7XG4gICAgc3JjOiB1cmwoXCIuLi8uLi8uLi9hc3NldHMvZm9udHMvT3Blbl9TYW5zL09wZW5TYW5zLVJlZ3VsYXIudHRmXCIpO1xufVxuXG4ud3JhcHBlciBoMntcbiAgICBmb250LWZhbWlseTogJ09wZW5TYW5zJywgSGVsdmV0aWNhLCBBcmlhbCwgU2Fucy1TZXJpZjtcbiAgICBtYXJnaW46IDIwcHggNTBweDtcbiAgICB0ZXh0LWFsaWduOiBjZW50ZXI7XG4gICAgZm9udC1zaXplOiAxZW07XG59XG4gIFxuLndyYXBwZXIge1xuICAgIHBhZGRpbmc6IDA7XG4gICAgbWFyZ2luOiAwO1xuICAgIHBvc2l0aW9uOiBhYnNvbHV0ZTtcbiAgICB3aWR0aDogMTAwJTtcbiAgICB0b3A6IDkwcHg7XG4gIH1cblxuLm9wdGlvbnNXcmFwcGVyIGltZ3tcbiAgICB3aWR0aDogMjAwcHg7XG4gICAgZGlzcGxheTogYmxvY2s7XG4gICAgcG9zaXRpb246IHJlbGF0aXZlO1xuICAgIG1hcmdpbjogMS41ZW0gYXV0bztcbn1cbiAgXG4ub3B0aW9uc1dyYXBwZXJ7XG4gICAgd2lkdGg6IDcwJTtcbiAgICBtYXJnaW46IDIwcHggYXV0bztcbn1cbiAgXG4uYnRuT3B0aW9uc3tcbiAgICBib3JkZXI6IG5vbmU7XG4gICAgb3V0bGluZTogbm9uZTtcbiAgICB0ZXh0LXRyYW5zZm9ybTogdXBwZXJjYXNlO1xuICAgIGZvbnQtc2l6ZTogMWVtO1xuICAgIGZvbnQtZmFtaWx5OiAnT3BlblNhbnMnLCBIZWx2ZXRpY2EsIEFyaWFsLCBTYW5zLVNlcmlmO1xuICAgIGRpc3BsYXk6IGJsb2NrO1xuICAgIG1hcmdpbjogMWVtIGF1dG8gMTBweCBhdXRvO1xuICAgIGJhY2tncm91bmQ6ICM0OTQ5NDk7XG4gICAgY29sb3I6ICNmZmZmZmY7XG4gICAgbWluLXdpZHRoOiAxODBweDtcbiAgICBwYWRkaW5nOiAwLjhlbTtcbn1cblxuLmJ0bk9wdGlvbnMuYW5zd2Vye1xuICAgIGJhY2tncm91bmQ6ICM5MzI3MmM7XG59XG5cbi5idG5PcHRpb25zLkJlcm5oYXJkaW51c3tcbiAgICBiYWNrZ3JvdW5kOiAjMUI1RTIwO1xufVxuICBcbi5zdWNjZXNzLFxuICAuZXJyb3J7XG4gICAgZm9udC1mYW1pbHk6ICdPcGVuU2FucycsIEhlbHZldGljYSwgQXJpYWwsIFNhbnMtU2VyaWY7XG4gICAgdGV4dC1hbGlnbjogY2VudGVyO1xuICAgIGhlaWdodDogMmVtO1xuICAgIGZvbnQtc2l6ZTogMC45ZW07XG4gIH1cblxuICAuZXJyb3J7XG4gICAgY29sb3I6ICM5MzI3MmM7XG4gIH1cblxuICAuc3VjY2Vzc3tcbiAgICBjb2xvcjogIzFCNUUyMDtcbiAgfVxuICBcbiAgLnRvb2xiYXIgYnV0dG9ue1xuICAgICAgYm9yZGVyOiBub25lO1xuICAgICAgb3V0bGluZTogbm9uZTtcbiAgICAgIGhlaWdodDogNTBweDtcbiAgICAgIHdpZHRoOiA1MHB4O1xuICAgICAgbWFyZ2luOiAyMHB4IDIwcHggMHB4IDIwcHg7IFxuICAgICAgYmFja2dyb3VuZDogI2ZmZmZmZjtcbiAgfVxuICBcbiAgLnRvb2xiYXIgLmNsb3NlYnV0dG9ue1xuICAgICAgZmxvYXQ6IHJpZ2h0OyBcbiAgICAgIGJhY2tncm91bmQ6ICM0OTQ5NDk7XG4gICAgICBjb2xvcjojZmZmZmZmO1xuICB9XG4gIFxuICAudG9vbGJhciAuY2xvc2VidXR0b24gbWF0LWljb257XG4gICAgICBtYXJnaW46IDRweCAwIDAgLTE1cHg7XG4gICAgICBmb250LXNpemU6IDQwcHg7XG4gIH1cbiAgXG4gIFxuICBAbWVkaWEgKG1heC1oZWlnaHQ6IDY1MHB4KSB7XG4gICAgLndyYXBwZXIgaDJ7XG4gICAgICBmb250LXNpemU6IDAuOGVtO1xuICAgICAgbWFyZ2luOiAxMHB4IDQwcHg7XG4gICAgfVxuICB9XG4gICJdfQ== */"

/***/ }),

/***/ "./src/app/components/education-quiz/education-quiz.component.html":
/*!*************************************************************************!*\
  !*** ./src/app/components/education-quiz/education-quiz.component.html ***!
  \*************************************************************************/
/*! no static exports found */
/***/ (function(module, exports) {

module.exports = "<div class=\"toolbar\">\n  <button class=\"closebutton\" (click)=\"closeWindow()\"><mat-icon>close</mat-icon></button>\n</div> \n<div class=\"wrapper\">\n  <h2>{{ 'interactiveExhibit.quizQuestion' | translate }}</h2>\n\n  <div class=\"optionsWrapper\">\n    <img src=\"./assets/img/educationQuiz.png\" />\n    <button *ngFor=\"let option of options\" [className]=\"(trialSuccess || trialError) ? 'answer '+ option +' btnOptions' : 'btnOptions'\" (click)=\"answer(option)\" >{{option}}</button>\n    \n    <p *ngIf=\"trialSuccess\" class=\"success\">{{ 'interactiveExhibit.quizRight' | translate }}</p> \n    <p *ngIf=\"trialError\" class=\"error\">{{ 'interactiveExhibit.quizWrong' | translate }}</p>\n  </div>\n</div>\n"

/***/ }),

/***/ "./src/app/components/education-quiz/education-quiz.component.ts":
/*!***********************************************************************!*\
  !*** ./src/app/components/education-quiz/education-quiz.component.ts ***!
  \***********************************************************************/
/*! exports provided: EducationQuizComponent */
/***/ (function(module, __webpack_exports__, __webpack_require__) {

"use strict";
__webpack_require__.r(__webpack_exports__);
/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, "EducationQuizComponent", function() { return EducationQuizComponent; });
/* harmony import */ var _angular_core__WEBPACK_IMPORTED_MODULE_0__ = __webpack_require__(/*! @angular/core */ "./node_modules/@angular/core/fesm5/core.js");
/* harmony import */ var _angular_router__WEBPACK_IMPORTED_MODULE_1__ = __webpack_require__(/*! @angular/router */ "./node_modules/@angular/router/fesm5/router.js");
/* harmony import */ var _services_native_native_communication_service__WEBPACK_IMPORTED_MODULE_2__ = __webpack_require__(/*! ../../services/native/native-communication.service */ "./src/app/services/native/native-communication.service.ts");
var __decorate = (undefined && undefined.__decorate) || function (decorators, target, key, desc) {
    var c = arguments.length, r = c < 3 ? target : desc === null ? desc = Object.getOwnPropertyDescriptor(target, key) : desc, d;
    if (typeof Reflect === "object" && typeof Reflect.decorate === "function") r = Reflect.decorate(decorators, target, key, desc);
    else for (var i = decorators.length - 1; i >= 0; i--) if (d = decorators[i]) r = (c < 3 ? d(r) : c > 3 ? d(target, key, r) : d(target, key)) || r;
    return c > 3 && r && Object.defineProperty(target, key, r), r;
};
var __metadata = (undefined && undefined.__metadata) || function (k, v) {
    if (typeof Reflect === "object" && typeof Reflect.metadata === "function") return Reflect.metadata(k, v);
};



var EducationQuizComponent = /** @class */ (function () {
    function EducationQuizComponent(router, nativeCommunicationService) {
        this.router = router;
        this.nativeCommunicationService = nativeCommunicationService;
        this.correctAnswer = 'Bernhardinus';
        this.options = ['Benedictus', 'Bernhardinus', 'Bartholomäus', 'Basilius'];
        this.trialSuccess = false;
        this.trialError = false;
    }
    EducationQuizComponent.prototype.ngOnInit = function () {
        this.options = this.shuffle(this.options);
    };
    EducationQuizComponent.prototype.closeWindow = function () {
        var _this = this;
        this.router.navigate(['interactive']).then(function () {
            _this.nativeCommunicationService.sendToNative('Interactive', 'print');
        });
    };
    EducationQuizComponent.prototype.answer = function (option) {
        (option === this.correctAnswer) ? this.trialSuccess = true : this.trialError = true;
    };
    EducationQuizComponent.prototype.shuffle = function (array) {
        var currentIndex = array.length, temporaryValue, randomIndex;
        while (0 !== currentIndex) {
            randomIndex = Math.floor(Math.random() * currentIndex);
            currentIndex -= 1;
            temporaryValue = array[currentIndex];
            array[currentIndex] = array[randomIndex];
            array[randomIndex] = temporaryValue;
        }
        return array;
    };
    EducationQuizComponent = __decorate([
        Object(_angular_core__WEBPACK_IMPORTED_MODULE_0__["Component"])({
            selector: 'app-education-quiz',
            template: __webpack_require__(/*! ./education-quiz.component.html */ "./src/app/components/education-quiz/education-quiz.component.html"),
            styles: [__webpack_require__(/*! ./education-quiz.component.css */ "./src/app/components/education-quiz/education-quiz.component.css")]
        }),
        __metadata("design:paramtypes", [_angular_router__WEBPACK_IMPORTED_MODULE_1__["Router"], _services_native_native_communication_service__WEBPACK_IMPORTED_MODULE_2__["NativeCommunicationService"]])
    ], EducationQuizComponent);
    return EducationQuizComponent;
}());



/***/ }),

/***/ "./src/app/components/language-start/language-start.component.css":
/*!************************************************************************!*\
  !*** ./src/app/components/language-start/language-start.component.css ***!
  \************************************************************************/
/*! no static exports found */
/***/ (function(module, exports) {

module.exports = ".registerForm {\n  margin: 50px 0;\n}\n\n@font-face {\n  font-family: 'OpenSans';\n  src: url('OpenSans-Regular.ttf');\n}\n\n.wrapper h2{\n    font-family: 'OpenSans', Helvetica, Arial, Sans-Serif;\n    margin: 20px;\n    text-align: center;\n    font-size: 1em;\n}\n\n.wrapper {\n  padding: 0;\n  margin: 0;\n  position: absolute;\n  width: 100%;\n  top: 90px;\n}\n\n.btnDe, .btnEn {\n  padding: 0;\n  height: 120px;\n  border: none;\n  outline: none;\n  display: block;\n  margin: 50px auto 0 auto;\n}\n\n.btnEn img,\n.btnDe img{\n  height: 120px;\n}\n\n.selected{\n  box-shadow: 0px 0px 18px #888888;\n}\n\n.notSelected{\n  opacity: 0.5;\n}\n\n/*# sourceMappingURL=data:application/json;base64,eyJ2ZXJzaW9uIjozLCJzb3VyY2VzIjpbInNyYy9hcHAvY29tcG9uZW50cy9sYW5ndWFnZS1zdGFydC9sYW5ndWFnZS1zdGFydC5jb21wb25lbnQuY3NzIl0sIm5hbWVzIjpbXSwibWFwcGluZ3MiOiJBQUFBO0VBQ0UsY0FBYztBQUNoQjs7QUFFQTtFQUNFLHVCQUF1QjtFQUN2QixnQ0FBZ0U7QUFDbEU7O0FBRUE7SUFDSSxxREFBcUQ7SUFDckQsWUFBWTtJQUNaLGtCQUFrQjtJQUNsQixjQUFjO0FBQ2xCOztBQUVBO0VBQ0UsVUFBVTtFQUNWLFNBQVM7RUFDVCxrQkFBa0I7RUFDbEIsV0FBVztFQUNYLFNBQVM7QUFDWDs7QUFFQTtFQUNFLFVBQVU7RUFDVixhQUFhO0VBQ2IsWUFBWTtFQUNaLGFBQWE7RUFDYixjQUFjO0VBQ2Qsd0JBQXdCO0FBQzFCOztBQUVBOztFQUVFLGFBQWE7QUFDZjs7QUFFQTtFQUNFLGdDQUFnQztBQUNsQzs7QUFFQTtFQUNFLFlBQVk7QUFDZCIsImZpbGUiOiJzcmMvYXBwL2NvbXBvbmVudHMvbGFuZ3VhZ2Utc3RhcnQvbGFuZ3VhZ2Utc3RhcnQuY29tcG9uZW50LmNzcyIsInNvdXJjZXNDb250ZW50IjpbIi5yZWdpc3RlckZvcm0ge1xuICBtYXJnaW46IDUwcHggMDtcbn1cblxuQGZvbnQtZmFjZSB7XG4gIGZvbnQtZmFtaWx5OiAnT3BlblNhbnMnO1xuICBzcmM6IHVybChcIi4uLy4uLy4uL2Fzc2V0cy9mb250cy9PcGVuX1NhbnMvT3BlblNhbnMtUmVndWxhci50dGZcIik7XG59XG5cbi53cmFwcGVyIGgye1xuICAgIGZvbnQtZmFtaWx5OiAnT3BlblNhbnMnLCBIZWx2ZXRpY2EsIEFyaWFsLCBTYW5zLVNlcmlmO1xuICAgIG1hcmdpbjogMjBweDtcbiAgICB0ZXh0LWFsaWduOiBjZW50ZXI7XG4gICAgZm9udC1zaXplOiAxZW07XG59XG5cbi53cmFwcGVyIHtcbiAgcGFkZGluZzogMDtcbiAgbWFyZ2luOiAwO1xuICBwb3NpdGlvbjogYWJzb2x1dGU7XG4gIHdpZHRoOiAxMDAlO1xuICB0b3A6IDkwcHg7XG59XG5cbi5idG5EZSwgLmJ0bkVuIHtcbiAgcGFkZGluZzogMDtcbiAgaGVpZ2h0OiAxMjBweDtcbiAgYm9yZGVyOiBub25lO1xuICBvdXRsaW5lOiBub25lO1xuICBkaXNwbGF5OiBibG9jaztcbiAgbWFyZ2luOiA1MHB4IGF1dG8gMCBhdXRvO1xufVxuXG4uYnRuRW4gaW1nLFxuLmJ0bkRlIGltZ3tcbiAgaGVpZ2h0OiAxMjBweDtcbn1cblxuLnNlbGVjdGVke1xuICBib3gtc2hhZG93OiAwcHggMHB4IDE4cHggIzg4ODg4ODtcbn1cblxuLm5vdFNlbGVjdGVke1xuICBvcGFjaXR5OiAwLjU7XG59XG4iXX0= */"

/***/ }),

/***/ "./src/app/components/language-start/language-start.component.html":
/*!*************************************************************************!*\
  !*** ./src/app/components/language-start/language-start.component.html ***!
  \*************************************************************************/
/*! no static exports found */
/***/ (function(module, exports) {

module.exports = "<div class=\"wrapper\">\n  <h2>{{ 'languageStart.helpmessage' | translate }}</h2>\n  <button [className]=\" isSelected('de') ? 'selected btnDe' : 'notSelected btnDe'\"  (click)=\"changeLanguageToGerman()\"><img src=\"assets/img/de.png\"></button>\n  <button [className]=\" isSelected('en') ? 'selected btnEn' : 'notSelected btnEn'\" (click)=\"changeLanguageToEnglish()\"><img src=\"assets/img/en.png\"></button>\n</div>\n"

/***/ }),

/***/ "./src/app/components/language-start/language-start.component.ts":
/*!***********************************************************************!*\
  !*** ./src/app/components/language-start/language-start.component.ts ***!
  \***********************************************************************/
/*! exports provided: LanguageStartComponent */
/***/ (function(module, __webpack_exports__, __webpack_require__) {

"use strict";
__webpack_require__.r(__webpack_exports__);
/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, "LanguageStartComponent", function() { return LanguageStartComponent; });
/* harmony import */ var _angular_core__WEBPACK_IMPORTED_MODULE_0__ = __webpack_require__(/*! @angular/core */ "./node_modules/@angular/core/fesm5/core.js");
/* harmony import */ var _angular_router__WEBPACK_IMPORTED_MODULE_1__ = __webpack_require__(/*! @angular/router */ "./node_modules/@angular/router/fesm5/router.js");
/* harmony import */ var _WindowRef__WEBPACK_IMPORTED_MODULE_2__ = __webpack_require__(/*! ../../WindowRef */ "./src/app/WindowRef.ts");
/* harmony import */ var _services_language_service__WEBPACK_IMPORTED_MODULE_3__ = __webpack_require__(/*! ../../services/language.service */ "./src/app/services/language.service.ts");
/* harmony import */ var _ngx_translate_core__WEBPACK_IMPORTED_MODULE_4__ = __webpack_require__(/*! @ngx-translate/core */ "./node_modules/@ngx-translate/core/fesm5/ngx-translate-core.js");
/* harmony import */ var _config_LanguageTypes__WEBPACK_IMPORTED_MODULE_5__ = __webpack_require__(/*! ../../config/LanguageTypes */ "./src/app/config/LanguageTypes.ts");
var __decorate = (undefined && undefined.__decorate) || function (decorators, target, key, desc) {
    var c = arguments.length, r = c < 3 ? target : desc === null ? desc = Object.getOwnPropertyDescriptor(target, key) : desc, d;
    if (typeof Reflect === "object" && typeof Reflect.decorate === "function") r = Reflect.decorate(decorators, target, key, desc);
    else for (var i = decorators.length - 1; i >= 0; i--) if (d = decorators[i]) r = (c < 3 ? d(r) : c > 3 ? d(target, key, r) : d(target, key)) || r;
    return c > 3 && r && Object.defineProperty(target, key, r), r;
};
var __metadata = (undefined && undefined.__metadata) || function (k, v) {
    if (typeof Reflect === "object" && typeof Reflect.metadata === "function") return Reflect.metadata(k, v);
};
var __param = (undefined && undefined.__param) || function (paramIndex, decorator) {
    return function (target, key) { decorator(target, key, paramIndex); }
};






var LanguageStartComponent = /** @class */ (function () {
    function LanguageStartComponent(router, winRef, appStore, translate, languageService) {
        this.router = router;
        this.winRef = winRef;
        this.appStore = appStore;
        this.translate = translate;
        this.languageService = languageService;
    }
    LanguageStartComponent.prototype.ngOnInit = function () {
        this.language = this.languageService.getCurrentLanguageAsString();
    };
    LanguageStartComponent.prototype.changeLanguageToGerman = function () {
        this.language = 'de';
        this.languageService.transmitChangeAppLanguage(_config_LanguageTypes__WEBPACK_IMPORTED_MODULE_5__["DE"]);
    };
    LanguageStartComponent.prototype.changeLanguageToEnglish = function () {
        this.language = 'en';
        this.languageService.transmitChangeAppLanguage(_config_LanguageTypes__WEBPACK_IMPORTED_MODULE_5__["ENG"]);
    };
    LanguageStartComponent.prototype.isSelected = function (lang) {
        var selected = false;
        (this.language === lang) ? selected = true : selected = false;
        return selected;
    };
    LanguageStartComponent = __decorate([
        Object(_angular_core__WEBPACK_IMPORTED_MODULE_0__["Component"])({
            selector: 'app-language-start',
            template: __webpack_require__(/*! ./language-start.component.html */ "./src/app/components/language-start/language-start.component.html"),
            styles: [__webpack_require__(/*! ./language-start.component.css */ "./src/app/components/language-start/language-start.component.css")]
        }),
        Object(_angular_core__WEBPACK_IMPORTED_MODULE_0__["Injectable"])(),
        __param(2, Object(_angular_core__WEBPACK_IMPORTED_MODULE_0__["Inject"])('AppStore')),
        __metadata("design:paramtypes", [_angular_router__WEBPACK_IMPORTED_MODULE_1__["Router"],
            _WindowRef__WEBPACK_IMPORTED_MODULE_2__["WindowRef"], Object, _ngx_translate_core__WEBPACK_IMPORTED_MODULE_4__["TranslateService"],
            _services_language_service__WEBPACK_IMPORTED_MODULE_3__["LanguageService"]])
    ], LanguageStartComponent);
    return LanguageStartComponent;
}());



/***/ }),

/***/ "./src/app/components/legal/legal.component.css":
/*!******************************************************!*\
  !*** ./src/app/components/legal/legal.component.css ***!
  \******************************************************/
/*! no static exports found */
/***/ (function(module, exports) {

module.exports = "@font-face {\n    font-family: 'OpenSans';\n    src: url('OpenSans-Regular.ttf');\n}\n\n@font-face {\n    font-family: 'Vollkorn';\n    src: url('Vollkorn-Bold.ttf');\n}\n\nh1{\n    font-family: 'Vollkorn', Times, serif;\n    margin: 20px 0;\n    font-size: 1.6em;\n}\n\np{\n    font-family: 'OpenSans', Helvetica, Arial, Sans-Serif;\n    margin: 10px 0;\n    font-size: 1em;\n}\n\na{\n    color: #0057a3;\n    text-decoration: underline;\n}\n\na:after {\n    background-image: url('externallink.svg');\n    background-size: 16px 16px;\n    display: inline-block;\n    width: 16px; \n    height: 15px;\n    content:\"\";\n }\n\n.toolbar button{\n    border: none;\n    outline: none;\n    height: 50px;\n    width: 50px;\n    margin: 20px 20px 0px 20px; \n    background: #ffffff;\n}\n\n.toolbar .closebutton{\n    float: right; \n    background: #494949;\n    color:#ffffff;\n}\n\n.toolbar .closebutton mat-icon{\n    margin: 4px 0 0 -15px;\n    font-size: 40px;\n}\n\n.wrapper {\n    padding: 0;\n    margin: 0;\n    position: absolute;\n    width: 100%;\n    top: 90px;\n  }\n\n.infoWrapper{\n    width: 70%;\n    margin: 20px auto;\n  }\n/*# sourceMappingURL=data:application/json;base64,eyJ2ZXJzaW9uIjozLCJzb3VyY2VzIjpbInNyYy9hcHAvY29tcG9uZW50cy9sZWdhbC9sZWdhbC5jb21wb25lbnQuY3NzIl0sIm5hbWVzIjpbXSwibWFwcGluZ3MiOiJBQUFBO0lBQ0ksdUJBQXVCO0lBQ3ZCLGdDQUFnRTtBQUNwRTs7QUFFQTtJQUNJLHVCQUF1QjtJQUN2Qiw2QkFBNEQ7QUFDaEU7O0FBRUE7SUFDSSxxQ0FBcUM7SUFDckMsY0FBYztJQUNkLGdCQUFnQjtBQUNwQjs7QUFFQTtJQUNJLHFEQUFxRDtJQUNyRCxjQUFjO0lBQ2QsY0FBYztBQUNsQjs7QUFFQTtJQUNJLGNBQWM7SUFDZCwwQkFBMEI7QUFDOUI7O0FBRUE7SUFDSSx5Q0FBK0Q7SUFDL0QsMEJBQTBCO0lBQzFCLHFCQUFxQjtJQUNyQixXQUFXO0lBQ1gsWUFBWTtJQUNaLFVBQVU7Q0FDYjs7QUFFRDtJQUNJLFlBQVk7SUFDWixhQUFhO0lBQ2IsWUFBWTtJQUNaLFdBQVc7SUFDWCwwQkFBMEI7SUFDMUIsbUJBQW1CO0FBQ3ZCOztBQUVBO0lBQ0ksWUFBWTtJQUNaLG1CQUFtQjtJQUNuQixhQUFhO0FBQ2pCOztBQUVBO0lBQ0kscUJBQXFCO0lBQ3JCLGVBQWU7QUFDbkI7O0FBRUE7SUFDSSxVQUFVO0lBQ1YsU0FBUztJQUNULGtCQUFrQjtJQUNsQixXQUFXO0lBQ1gsU0FBUztFQUNYOztBQUVBO0lBQ0UsVUFBVTtJQUNWLGlCQUFpQjtFQUNuQiIsImZpbGUiOiJzcmMvYXBwL2NvbXBvbmVudHMvbGVnYWwvbGVnYWwuY29tcG9uZW50LmNzcyIsInNvdXJjZXNDb250ZW50IjpbIkBmb250LWZhY2Uge1xuICAgIGZvbnQtZmFtaWx5OiAnT3BlblNhbnMnO1xuICAgIHNyYzogdXJsKFwiLi4vLi4vLi4vYXNzZXRzL2ZvbnRzL09wZW5fU2Fucy9PcGVuU2Fucy1SZWd1bGFyLnR0ZlwiKTtcbn1cblxuQGZvbnQtZmFjZSB7XG4gICAgZm9udC1mYW1pbHk6ICdWb2xsa29ybic7XG4gICAgc3JjOiB1cmwoXCIuLi8uLi8uLi9hc3NldHMvZm9udHMvVm9sbGtvcm4vVm9sbGtvcm4tQm9sZC50dGZcIik7XG59XG5cbmgxe1xuICAgIGZvbnQtZmFtaWx5OiAnVm9sbGtvcm4nLCBUaW1lcywgc2VyaWY7XG4gICAgbWFyZ2luOiAyMHB4IDA7XG4gICAgZm9udC1zaXplOiAxLjZlbTtcbn1cblxucHtcbiAgICBmb250LWZhbWlseTogJ09wZW5TYW5zJywgSGVsdmV0aWNhLCBBcmlhbCwgU2Fucy1TZXJpZjtcbiAgICBtYXJnaW46IDEwcHggMDtcbiAgICBmb250LXNpemU6IDFlbTtcbn1cblxuYXtcbiAgICBjb2xvcjogIzAwNTdhMztcbiAgICB0ZXh0LWRlY29yYXRpb246IHVuZGVybGluZTtcbn1cblxuYTphZnRlciB7XG4gICAgYmFja2dyb3VuZC1pbWFnZTogdXJsKFwiLi4vLi4vLi4vYXNzZXRzL2ljb25zL2V4dGVybmFsbGluay5zdmdcIik7XG4gICAgYmFja2dyb3VuZC1zaXplOiAxNnB4IDE2cHg7XG4gICAgZGlzcGxheTogaW5saW5lLWJsb2NrO1xuICAgIHdpZHRoOiAxNnB4OyBcbiAgICBoZWlnaHQ6IDE1cHg7XG4gICAgY29udGVudDpcIlwiO1xuIH1cblxuLnRvb2xiYXIgYnV0dG9ue1xuICAgIGJvcmRlcjogbm9uZTtcbiAgICBvdXRsaW5lOiBub25lO1xuICAgIGhlaWdodDogNTBweDtcbiAgICB3aWR0aDogNTBweDtcbiAgICBtYXJnaW46IDIwcHggMjBweCAwcHggMjBweDsgXG4gICAgYmFja2dyb3VuZDogI2ZmZmZmZjtcbn1cblxuLnRvb2xiYXIgLmNsb3NlYnV0dG9ue1xuICAgIGZsb2F0OiByaWdodDsgXG4gICAgYmFja2dyb3VuZDogIzQ5NDk0OTtcbiAgICBjb2xvcjojZmZmZmZmO1xufVxuXG4udG9vbGJhciAuY2xvc2VidXR0b24gbWF0LWljb257XG4gICAgbWFyZ2luOiA0cHggMCAwIC0xNXB4O1xuICAgIGZvbnQtc2l6ZTogNDBweDtcbn1cblxuLndyYXBwZXIge1xuICAgIHBhZGRpbmc6IDA7XG4gICAgbWFyZ2luOiAwO1xuICAgIHBvc2l0aW9uOiBhYnNvbHV0ZTtcbiAgICB3aWR0aDogMTAwJTtcbiAgICB0b3A6IDkwcHg7XG4gIH1cbiAgXG4gIC5pbmZvV3JhcHBlcntcbiAgICB3aWR0aDogNzAlO1xuICAgIG1hcmdpbjogMjBweCBhdXRvO1xuICB9Il19 */"

/***/ }),

/***/ "./src/app/components/legal/legal.component.html":
/*!*******************************************************!*\
  !*** ./src/app/components/legal/legal.component.html ***!
  \*******************************************************/
/*! no static exports found */
/***/ (function(module, exports) {

module.exports = "<div class=\"toolbar\">\n    <button class=\"closebutton\" (click)=\"closeWindow()\"><mat-icon>close</mat-icon></button>\n  </div> \n  \n  <div class=\"wrapper\">\n    <div class=\"infoWrapper\">\n      <h1>Legal Information</h1>\n      <p>Resolution possession discovered surrounded advantages has but few add. Yet walls times spoil put. Be it reserved contempt rendered smallest. Studied to passage it mention calling believe an. Get ten horrible remember pleasure two vicinity. Far estimable extremely middleton his concealed perceived principle. Any nay pleasure entrance prepared her.</p>\n      \n      <p>This application is a part of the MEETeUX project at the St. Pölten University of Applied Sciences. <br/><a src=\"\">Visit the website</a></p>\n    </div>\n  </div>"

/***/ }),

/***/ "./src/app/components/legal/legal.component.ts":
/*!*****************************************************!*\
  !*** ./src/app/components/legal/legal.component.ts ***!
  \*****************************************************/
/*! exports provided: LegalComponent */
/***/ (function(module, __webpack_exports__, __webpack_require__) {

"use strict";
__webpack_require__.r(__webpack_exports__);
/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, "LegalComponent", function() { return LegalComponent; });
/* harmony import */ var _angular_core__WEBPACK_IMPORTED_MODULE_0__ = __webpack_require__(/*! @angular/core */ "./node_modules/@angular/core/fesm5/core.js");
/* harmony import */ var _angular_router__WEBPACK_IMPORTED_MODULE_1__ = __webpack_require__(/*! @angular/router */ "./node_modules/@angular/router/fesm5/router.js");
/* harmony import */ var _services_native_native_communication_service__WEBPACK_IMPORTED_MODULE_2__ = __webpack_require__(/*! ../../services/native/native-communication.service */ "./src/app/services/native/native-communication.service.ts");
var __decorate = (undefined && undefined.__decorate) || function (decorators, target, key, desc) {
    var c = arguments.length, r = c < 3 ? target : desc === null ? desc = Object.getOwnPropertyDescriptor(target, key) : desc, d;
    if (typeof Reflect === "object" && typeof Reflect.decorate === "function") r = Reflect.decorate(decorators, target, key, desc);
    else for (var i = decorators.length - 1; i >= 0; i--) if (d = decorators[i]) r = (c < 3 ? d(r) : c > 3 ? d(target, key, r) : d(target, key)) || r;
    return c > 3 && r && Object.defineProperty(target, key, r), r;
};
var __metadata = (undefined && undefined.__metadata) || function (k, v) {
    if (typeof Reflect === "object" && typeof Reflect.metadata === "function") return Reflect.metadata(k, v);
};



var LegalComponent = /** @class */ (function () {
    function LegalComponent(router, nativeCommunicationService) {
        this.router = router;
        this.nativeCommunicationService = nativeCommunicationService;
    }
    LegalComponent.prototype.ngOnInit = function () {
    };
    LegalComponent.prototype.closeWindow = function () {
        var _this = this;
        this.router.navigate(['mainview']).then(function () {
            _this.nativeCommunicationService.sendToNative('Main View', 'print');
        });
    };
    LegalComponent = __decorate([
        Object(_angular_core__WEBPACK_IMPORTED_MODULE_0__["Component"])({
            selector: 'app-legal',
            template: __webpack_require__(/*! ./legal.component.html */ "./src/app/components/legal/legal.component.html"),
            styles: [__webpack_require__(/*! ./legal.component.css */ "./src/app/components/legal/legal.component.css")]
        }),
        __metadata("design:paramtypes", [_angular_router__WEBPACK_IMPORTED_MODULE_1__["Router"],
            _services_native_native_communication_service__WEBPACK_IMPORTED_MODULE_2__["NativeCommunicationService"]])
    ], LegalComponent);
    return LegalComponent;
}());



/***/ }),

/***/ "./src/app/components/login/login.component.css":
/*!******************************************************!*\
  !*** ./src/app/components/login/login.component.css ***!
  \******************************************************/
/*! no static exports found */
/***/ (function(module, exports) {

module.exports = "@font-face {\n  font-family: 'OpenSans';\n  src: url('OpenSans-Regular.ttf');\n}\n\n@font-face {\n  font-family: 'Vollkorn';\n  src: url('Vollkorn-Bold.ttf');\n}\n\n.wrapper h2{\n    font-family: 'OpenSans', Helvetica, Arial, Sans-Serif;\n    margin: 20px;\n    text-align: center;\n    font-size: 1em;\n}\n\n.wrapper {\n  padding: 0;\n  margin: 0;\n  position: absolute;\n  width: 100%;\n  top: 90px;\n}\n\n.loginFormWrapper{\n  width: 70%;\n  margin: 50px auto;\n}\n\n.btnLogin{\n  border: none;\n  outline: none;\n  text-transform: uppercase;\n  font-size: 1em;\n  font-family: 'OpenSans', Helvetica, Arial, Sans-Serif;\n  display: block;\n  margin: 30px auto 0 auto;\n  background: #494949;\n  color: #ffffff;\n  min-width: 180px;\n  padding: 0.8em;\n}\n\ninput{\n  font-family: 'Vollkorn', Times, serif;\n  margin-bottom: 6px;\n  font-size: 1.3em;\n  text-align: center; \n}\n\n.error{\n  font-family: 'OpenSans', Helvetica, Arial, Sans-Serif;\n  text-align: center;\n  height: 2em;\n  font-size: 0.9em;\n}\n\n@media (max-height: 650px) {\n  .wrapper h2{\n    font-size: 0.8em;\n    margin: 0;\n  }\n\n  input{\n    font-size: 0.9em;\n  }\n\n  .btnLogin{\n    margin: 0px auto 0 auto;\n    font-size: 0.8em;\n  }\n\n  .error{\n    height: auto;\n    font-size: 0.8em;\n  }\n}\n/*# sourceMappingURL=data:application/json;base64,eyJ2ZXJzaW9uIjozLCJzb3VyY2VzIjpbInNyYy9hcHAvY29tcG9uZW50cy9sb2dpbi9sb2dpbi5jb21wb25lbnQuY3NzIl0sIm5hbWVzIjpbXSwibWFwcGluZ3MiOiJBQUFBO0VBQ0UsdUJBQXVCO0VBQ3ZCLGdDQUFnRTtBQUNsRTs7QUFFQTtFQUNFLHVCQUF1QjtFQUN2Qiw2QkFBNEQ7QUFDOUQ7O0FBR0E7SUFDSSxxREFBcUQ7SUFDckQsWUFBWTtJQUNaLGtCQUFrQjtJQUNsQixjQUFjO0FBQ2xCOztBQUVBO0VBQ0UsVUFBVTtFQUNWLFNBQVM7RUFDVCxrQkFBa0I7RUFDbEIsV0FBVztFQUNYLFNBQVM7QUFDWDs7QUFFQTtFQUNFLFVBQVU7RUFDVixpQkFBaUI7QUFDbkI7O0FBRUE7RUFDRSxZQUFZO0VBQ1osYUFBYTtFQUNiLHlCQUF5QjtFQUN6QixjQUFjO0VBQ2QscURBQXFEO0VBQ3JELGNBQWM7RUFDZCx3QkFBd0I7RUFDeEIsbUJBQW1CO0VBQ25CLGNBQWM7RUFDZCxnQkFBZ0I7RUFDaEIsY0FBYztBQUNoQjs7QUFFQTtFQUNFLHFDQUFxQztFQUNyQyxrQkFBa0I7RUFDbEIsZ0JBQWdCO0VBQ2hCLGtCQUFrQjtBQUNwQjs7QUFFQTtFQUNFLHFEQUFxRDtFQUNyRCxrQkFBa0I7RUFDbEIsV0FBVztFQUNYLGdCQUFnQjtBQUNsQjs7QUFFQTtFQUNFO0lBQ0UsZ0JBQWdCO0lBQ2hCLFNBQVM7RUFDWDs7RUFFQTtJQUNFLGdCQUFnQjtFQUNsQjs7RUFFQTtJQUNFLHVCQUF1QjtJQUN2QixnQkFBZ0I7RUFDbEI7O0VBRUE7SUFDRSxZQUFZO0lBQ1osZ0JBQWdCO0VBQ2xCO0FBQ0YiLCJmaWxlIjoic3JjL2FwcC9jb21wb25lbnRzL2xvZ2luL2xvZ2luLmNvbXBvbmVudC5jc3MiLCJzb3VyY2VzQ29udGVudCI6WyJAZm9udC1mYWNlIHtcbiAgZm9udC1mYW1pbHk6ICdPcGVuU2Fucyc7XG4gIHNyYzogdXJsKFwiLi4vLi4vLi4vYXNzZXRzL2ZvbnRzL09wZW5fU2Fucy9PcGVuU2Fucy1SZWd1bGFyLnR0ZlwiKTtcbn1cblxuQGZvbnQtZmFjZSB7XG4gIGZvbnQtZmFtaWx5OiAnVm9sbGtvcm4nO1xuICBzcmM6IHVybChcIi4uLy4uLy4uL2Fzc2V0cy9mb250cy9Wb2xsa29ybi9Wb2xsa29ybi1Cb2xkLnR0ZlwiKTtcbn1cblxuXG4ud3JhcHBlciBoMntcbiAgICBmb250LWZhbWlseTogJ09wZW5TYW5zJywgSGVsdmV0aWNhLCBBcmlhbCwgU2Fucy1TZXJpZjtcbiAgICBtYXJnaW46IDIwcHg7XG4gICAgdGV4dC1hbGlnbjogY2VudGVyO1xuICAgIGZvbnQtc2l6ZTogMWVtO1xufVxuXG4ud3JhcHBlciB7XG4gIHBhZGRpbmc6IDA7XG4gIG1hcmdpbjogMDtcbiAgcG9zaXRpb246IGFic29sdXRlO1xuICB3aWR0aDogMTAwJTtcbiAgdG9wOiA5MHB4O1xufVxuXG4ubG9naW5Gb3JtV3JhcHBlcntcbiAgd2lkdGg6IDcwJTtcbiAgbWFyZ2luOiA1MHB4IGF1dG87XG59XG5cbi5idG5Mb2dpbntcbiAgYm9yZGVyOiBub25lO1xuICBvdXRsaW5lOiBub25lO1xuICB0ZXh0LXRyYW5zZm9ybTogdXBwZXJjYXNlO1xuICBmb250LXNpemU6IDFlbTtcbiAgZm9udC1mYW1pbHk6ICdPcGVuU2FucycsIEhlbHZldGljYSwgQXJpYWwsIFNhbnMtU2VyaWY7XG4gIGRpc3BsYXk6IGJsb2NrO1xuICBtYXJnaW46IDMwcHggYXV0byAwIGF1dG87XG4gIGJhY2tncm91bmQ6ICM0OTQ5NDk7XG4gIGNvbG9yOiAjZmZmZmZmO1xuICBtaW4td2lkdGg6IDE4MHB4O1xuICBwYWRkaW5nOiAwLjhlbTtcbn1cblxuaW5wdXR7XG4gIGZvbnQtZmFtaWx5OiAnVm9sbGtvcm4nLCBUaW1lcywgc2VyaWY7XG4gIG1hcmdpbi1ib3R0b206IDZweDtcbiAgZm9udC1zaXplOiAxLjNlbTtcbiAgdGV4dC1hbGlnbjogY2VudGVyOyBcbn1cblxuLmVycm9ye1xuICBmb250LWZhbWlseTogJ09wZW5TYW5zJywgSGVsdmV0aWNhLCBBcmlhbCwgU2Fucy1TZXJpZjtcbiAgdGV4dC1hbGlnbjogY2VudGVyO1xuICBoZWlnaHQ6IDJlbTtcbiAgZm9udC1zaXplOiAwLjllbTtcbn1cblxuQG1lZGlhIChtYXgtaGVpZ2h0OiA2NTBweCkge1xuICAud3JhcHBlciBoMntcbiAgICBmb250LXNpemU6IDAuOGVtO1xuICAgIG1hcmdpbjogMDtcbiAgfVxuXG4gIGlucHV0e1xuICAgIGZvbnQtc2l6ZTogMC45ZW07XG4gIH1cblxuICAuYnRuTG9naW57XG4gICAgbWFyZ2luOiAwcHggYXV0byAwIGF1dG87XG4gICAgZm9udC1zaXplOiAwLjhlbTtcbiAgfVxuXG4gIC5lcnJvcntcbiAgICBoZWlnaHQ6IGF1dG87XG4gICAgZm9udC1zaXplOiAwLjhlbTtcbiAgfVxufSJdfQ== */"

/***/ }),

/***/ "./src/app/components/login/login.component.html":
/*!*******************************************************!*\
  !*** ./src/app/components/login/login.component.html ***!
  \*******************************************************/
/*! no static exports found */
/***/ (function(module, exports) {

module.exports = "<div class=\"wrapper\">\n  \n  <div class=\"loginFormWrapper\">\n    <form name=\"loginForm\" [formGroup]=\"loginForm\">\n      <div class=\"fix-mat-form-field\">\n        <mat-form-field class=\"full-with-field\" appearance=\"outline\">\n          <input matInput placeholder=\"{{ 'login.username' | translate }}\" required [(ngModel)]=\"name\" [formControl]=\"nameFormControl\">\n          <mat-error *ngIf=\"nameFormControl.invalid\">{{getRequiredErrorMessage('name')}}</mat-error>\n        </mat-form-field>\n      </div>\n\n      <div class=\"fix-mat-form-field\">\n        <mat-form-field class=\"full-with-field\" appearance=\"outline\">\n          <input matInput placeholder=\"{{ 'login.password' | translate }}\" [(ngModel)]=\"password\" required [formControl]=\"passwordFormControl\">\n          <mat-error *ngIf=\"passwordFormControl.invalid\">{{getRequiredErrorMessage('password')}}</mat-error>\n        </mat-form-field>\n      </div>\n\n      <div class=\"error\"><mat-error *ngIf=\"wrongLogin\">{{getLoginErrorMessage()}}</mat-error></div>\n\n      <button class=\"btnLogin\" [disabled]=\"loginForm.invalid\" (click)=\"loginDevice()\">{{ 'login.btnSave' | translate }}</button>\n    </form>\n  </div>\n</div>\n"

/***/ }),

/***/ "./src/app/components/login/login.component.ts":
/*!*****************************************************!*\
  !*** ./src/app/components/login/login.component.ts ***!
  \*****************************************************/
/*! exports provided: LoginComponent */
/***/ (function(module, __webpack_exports__, __webpack_require__) {

"use strict";
__webpack_require__.r(__webpack_exports__);
/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, "LoginComponent", function() { return LoginComponent; });
/* harmony import */ var _angular_core__WEBPACK_IMPORTED_MODULE_0__ = __webpack_require__(/*! @angular/core */ "./node_modules/@angular/core/fesm5/core.js");
/* harmony import */ var _angular_router__WEBPACK_IMPORTED_MODULE_1__ = __webpack_require__(/*! @angular/router */ "./node_modules/@angular/router/fesm5/router.js");
/* harmony import */ var _WindowRef__WEBPACK_IMPORTED_MODULE_2__ = __webpack_require__(/*! ../../WindowRef */ "./src/app/WindowRef.ts");
/* harmony import */ var _store_actions_UserActions__WEBPACK_IMPORTED_MODULE_3__ = __webpack_require__(/*! ../../store/actions/UserActions */ "./src/app/store/actions/UserActions.ts");
/* harmony import */ var _services_native_native_communication_service__WEBPACK_IMPORTED_MODULE_4__ = __webpack_require__(/*! ../../services/native/native-communication.service */ "./src/app/services/native/native-communication.service.ts");
/* harmony import */ var _angular_forms__WEBPACK_IMPORTED_MODULE_5__ = __webpack_require__(/*! @angular/forms */ "./node_modules/@angular/forms/fesm5/forms.js");
/* harmony import */ var _services_alert_service__WEBPACK_IMPORTED_MODULE_6__ = __webpack_require__(/*! ../../services/alert.service */ "./src/app/services/alert.service.ts");
/* harmony import */ var _services_transmission_service__WEBPACK_IMPORTED_MODULE_7__ = __webpack_require__(/*! ../../services/transmission.service */ "./src/app/services/transmission.service.ts");
var __decorate = (undefined && undefined.__decorate) || function (decorators, target, key, desc) {
    var c = arguments.length, r = c < 3 ? target : desc === null ? desc = Object.getOwnPropertyDescriptor(target, key) : desc, d;
    if (typeof Reflect === "object" && typeof Reflect.decorate === "function") r = Reflect.decorate(decorators, target, key, desc);
    else for (var i = decorators.length - 1; i >= 0; i--) if (d = decorators[i]) r = (c < 3 ? d(r) : c > 3 ? d(target, key, r) : d(target, key)) || r;
    return c > 3 && r && Object.defineProperty(target, key, r), r;
};
var __metadata = (undefined && undefined.__metadata) || function (k, v) {
    if (typeof Reflect === "object" && typeof Reflect.metadata === "function") return Reflect.metadata(k, v);
};
var __param = (undefined && undefined.__param) || function (paramIndex, decorator) {
    return function (target, key) { decorator(target, key, paramIndex); }
};








var LoginComponent = /** @class */ (function () {
    function LoginComponent(router, transmissionService, winRef, appStore, userActions, nativeCommunicationService, fb, alertService) {
        var _this = this;
        this.router = router;
        this.transmissionService = transmissionService;
        this.winRef = winRef;
        this.appStore = appStore;
        this.userActions = userActions;
        this.nativeCommunicationService = nativeCommunicationService;
        this.fb = fb;
        this.alertService = alertService;
        this.nameFormControl = new _angular_forms__WEBPACK_IMPORTED_MODULE_5__["FormControl"]('', [_angular_forms__WEBPACK_IMPORTED_MODULE_5__["Validators"].required]);
        this.passwordFormControl = new _angular_forms__WEBPACK_IMPORTED_MODULE_5__["FormControl"]('', [_angular_forms__WEBPACK_IMPORTED_MODULE_5__["Validators"].required]);
        this.loginForm = new _angular_forms__WEBPACK_IMPORTED_MODULE_5__["FormGroup"]({
            name: this.nameFormControl,
            password: this.passwordFormControl
        });
        this.subscriptionWrongLogin = this.alertService.getMessageWrongLoginCheck().subscribe(function (message) {
            _this.wrongLogin = message;
            console.log('LoginComponent' + message);
        });
    }
    LoginComponent.prototype.loginDevice = function () {
        console.log('LoginComponentButton');
        this.transmissionService.loginName = this.nameFormControl.value;
        this.transmissionService.loginPassword = this.passwordFormControl.value;
        var state = this.appStore.getState();
        var platform = state.platform;
        // this.checkEmailValue(this.nameFormControl.value);
        this.transmissionService.transmitODLogin();
    };
    LoginComponent.prototype.ngOnInit = function () {
        this.loginName = '';
        this.loginPassword = '';
    };
    LoginComponent.prototype.getRequiredErrorMessage = function (field) {
        return this.loginForm.get(field).hasError('required') ? 'You must enter a value' : '';
    };
    LoginComponent.prototype.getLoginErrorMessage = function () {
        return 'These credentials don\'t match';
    };
    LoginComponent = __decorate([
        Object(_angular_core__WEBPACK_IMPORTED_MODULE_0__["Component"])({
            selector: 'app-login',
            template: __webpack_require__(/*! ./login.component.html */ "./src/app/components/login/login.component.html"),
            styles: [__webpack_require__(/*! ./login.component.css */ "./src/app/components/login/login.component.css")]
        }),
        Object(_angular_core__WEBPACK_IMPORTED_MODULE_0__["Injectable"])(),
        __param(3, Object(_angular_core__WEBPACK_IMPORTED_MODULE_0__["Inject"])('AppStore')),
        __metadata("design:paramtypes", [_angular_router__WEBPACK_IMPORTED_MODULE_1__["Router"],
            _services_transmission_service__WEBPACK_IMPORTED_MODULE_7__["TransmissionService"],
            _WindowRef__WEBPACK_IMPORTED_MODULE_2__["WindowRef"], Object, _store_actions_UserActions__WEBPACK_IMPORTED_MODULE_3__["UserActions"],
            _services_native_native_communication_service__WEBPACK_IMPORTED_MODULE_4__["NativeCommunicationService"],
            _angular_forms__WEBPACK_IMPORTED_MODULE_5__["FormBuilder"],
            _services_alert_service__WEBPACK_IMPORTED_MODULE_6__["AlertService"]])
    ], LoginComponent);
    return LoginComponent;
}());



/***/ }),

/***/ "./src/app/components/main-view/main-view.component.css":
/*!**************************************************************!*\
  !*** ./src/app/components/main-view/main-view.component.css ***!
  \**************************************************************/
/*! no static exports found */
/***/ (function(module, exports) {

module.exports = "@font-face {\n  font-family: 'Vollkorn';\n  src: url('Vollkorn-Bold.ttf');\n}\n\n@font-face {\n  font-family: 'OpenSans';\n  src: url('OpenSans-Regular.ttf');\n  /*font-weight: bold;*/\n}\n\nh1, h2, h3, h4, h5, h6{\n  font-family: 'Vollkorn', Times, serif;\n  margin: 0;\n}\n\np{\n  font-family: 'OpenSans', Helvetica, Arial, Sans-Serif;\n  margin: 0;\n}\n\n#woodcut{\n  position: fixed;\n  top: 0;\n  height: 100%;\n  width: 100%;\n  /*opacity: 0.2;*/\n  z-index: -2;\n}\n\n#woodcut.Sec10{\n  background: url('Section1BG.png') 50% 50% fixed;\n  background-size: 100%;\n}\n\n#woodcut.Sec20{\n  background: url('Section2BG.png') 50% 50% fixed;\n  background-size: 100%;\n}\n\n#woodcut.Sec30{\n  background: url('Section3BG.png') 50% 50% fixed;\n  background-size: 100%;\n}\n\n#woodcut.Sec40{\n  background: url('Section4BG.png') 50% 50% fixed;\n  background-size: 100%;\n}\n\n#woodcut.Sec50{\n  background: url('Section5BG.png') 50% 50% fixed;\n  background-size: 100%;\n}\n\n#woodcut.Sec60{\n  background: url('Section6BG.png') 50% 50% fixed;\n  background-size: 100%;\n}\n\n.card{\n  background: #ffffff;\n}\n\n.card.lckfalse:hover{\n  background: #cacaca;\n}\n\n.card.lcktrue{\n  opacity: 0.5;\n}\n\n.card.lckfalse.near{\n  box-shadow: 5px 0px 18px #888888;\n  z-index: 1;\n}\n\n.card.title{\n  width: 65%;\n  height: 90px;\n  position: absolute;\n  top: 25px;\n  left: 32px;\n}\n\n.card img{\n  width: 15%;\n  float: left;\n  margin: 6% 0 0 5%;\n}\n\n.card.exhibit{\n  width: 56%;\n  height: 90px;\n}\n\n.card h1{\n  width: 70%;\n  font-size: 110%;\n  float: right;\n  margin: 3% 5% 0% 5%;\n}\n\n.card h2{\n  margin: 0% 5%;\n  font-size: 110%;\n  word-break: break-all;\n}\n\n.wrapIcon{\n  width: 30px;\n  float: right;\n  height: 100%;\n}\n\n.coaIcon, .actIcon{\n  border-radius: 25px;\n  width: 24px;\n  height: 24px;\n}\n\n.coaIcon{\n  position: absolute;\n  bottom: 33px;\n  right: 4.5px;\n  background-image: url('WappenIcons.png');\n  background-position: 27px -28px;\n  background-size: 240px;\n}\n\n.actIcon{\n  position: absolute;\n  bottom: 4.5px;\n  right: 4.5px;\n  background-image: url('WappenIcons.png');\n  background-position: -3px -28px;\n  background-size: 240px;\n}\n\n.card .timespan{\n  font-size: 80%;\n  margin: 5% 5% 0% 5%;\n}\n\n.card.Sec1 img{\n  -webkit-filter: invert(88%) sepia(88%) saturate(6586%) hue-rotate(290deg) brightness(101%) contrast(100%);\n          filter: invert(88%) sepia(88%) saturate(6586%) hue-rotate(290deg) brightness(101%) contrast(100%);\n}\n\n.card.Sec10{ border: 2px solid #823a3a; }\n\n.card.Sec20{ border: 2px solid #305978; }\n\n.card.Sec30{ border: 2px solid #755300; }\n\n.card.Sec40{ border: 2px solid #1d635d; }\n\n.card.Sec50{ border: 2px solid #5c416a; }\n\n.card.Sec60{ border: 2px solid #32633a; }\n\n.card.Sec10 .timespan{ color: #823a3a; }\n\n.card.Sec20 .timespan{ color: #305978; }\n\n.card.Sec30 .timespan{ color: #755300; }\n\n.card.Sec40 .timespan{ color: #1d635d; }\n\n.card.Sec50 .timespan{ color: #5c416a; }\n\n.card.Sec60 .timespan{ color: #32633a; }\n\n.card.Sec10 .wrapIcon div, #timelineAxis.Sec10{ background-color: #823a3a; }\n\n.card.Sec20 .wrapIcon div, #timelineAxis.Sec20{ background-color: #305978; }\n\n.card.Sec30 .wrapIcon div, #timelineAxis.Sec30{ background-color: #755300; }\n\n.card.Sec40 .wrapIcon div, #timelineAxis.Sec40{ background-color: #1d635d; }\n\n.card.Sec50 .wrapIcon div, #timelineAxis.Sec50{ background-color: #5c416a; }\n\n.card.Sec60 .wrapIcon div, #timelineAxis.Sec60{ background-color: #32633a; }\n\n#timelineAxis{\n  margin: 0;\n  padding: 0;\n  height: 100%;\n  width: 34px;\n  position: fixed;\n  left: 0;\n  top: 0;\n  z-index: -1;\n}\n\n#timeline{\n  margin: 200px 0px 400px 0px;\n  padding: 0;\n  height: 1000px;\n  width: 100%;\n}\n\n.toolbar{\n  width: 65px;\n  height: 100%;\n  position: fixed;\n  right: 0;\n  top: 0;\n}\n\n.toolbar mat-icon{\n  font-size: 35px;\n  margin: 5px 0 0 -11px;\n  color:#ffffff;\n}\n\n.toolbar button{\n  float:right;\n  border: none;\n  outline: none;\n  height: 50px;\n  width: 50px;\n  background-color: #494949;\n}\n\n.wappenbutton{ \n  background: url('WappenIcons.png') 54px 48px;\n  background-size: 450px;\n  margin: 90px 20px 0px 0px;\n}\n\n.locationbutton{\n  margin: 0;\n  border-radius: 25px;\n  position: fixed;\n  right: 0;\n  bottom: 110px;\n  margin: 20px 20px 0px 0px;\n  background-image: url('location.svg');\n  background-position: center;\n  background-size: 40px;\n  background-repeat: no-repeat;\n}\n\n.toolbar button.disabled{\n  background-color: #aaaaaa;\n}\n\n.timelineSectionNav{\n  position: fixed;\n  bottom: 0;\n  z-index: 5;\n  width: 100%;\n}\n\n.timelineSectionNav ul{\n  list-style-type: none;\n  margin: 0;\n  padding: 0;\n  height: 80px;\n  border-top: 15px solid #494949;\n  background: #494949;\n}\n\n.timelineSectionNav ul li{\n  background: #fff;\n  float: left;\n  width: 16%; \n  height: 100%;\n}\n\n.timelineSectionNav ul li.selected{\n  background: #494949;\n}\n\n.timelineSectionNav .Sec20,\n.timelineSectionNav .Sec30,\n.timelineSectionNav .Sec40,\n.timelineSectionNav .Sec50,\n.timelineSectionNav .Sec60 {\n  margin-left: 0.8%;\n}\n\n.timelineSectionNav ul li button{\n  display: block;\n  margin: 5px auto;\n  width: 100%; \n  height: 70px;\n  border: none;\n  outline: none;\n  background: #fff;\n}\n\n.timelineSectionNav ul li button img{\n  width: 45px; \n  height: 45px;\n}\n\n@media (max-width: 320px) {\n  .card h1{\n    font-size: 100%;\n  }\n}\n\n.selected_Section10 img, .title.Sec10 img{\n  -webkit-filter: invert(30%) sepia(40%) saturate(842%) hue-rotate(314deg) brightness(81%) contrast(88%);\n          filter: invert(30%) sepia(40%) saturate(842%) hue-rotate(314deg) brightness(81%) contrast(88%);\n}\n\n.selected_Section20 img, .title.Sec20 img{\n  -webkit-filter: invert(34%) sepia(18%) saturate(1288%) hue-rotate(163deg) brightness(88%) contrast(93%);\n          filter: invert(34%) sepia(18%) saturate(1288%) hue-rotate(163deg) brightness(88%) contrast(93%);\n}\n\n.selected_Section30 img, .title.Sec30 img{\n  -webkit-filter: invert(34%) sepia(7%) saturate(7087%) hue-rotate(11deg) brightness(94%) contrast(101%);\n          filter: invert(34%) sepia(7%) saturate(7087%) hue-rotate(11deg) brightness(94%) contrast(101%);\n}\n\n.selected_Section40 img, .title.Sec40 img{\n  -webkit-filter: invert(29%) sepia(81%) saturate(323%) hue-rotate(126deg) brightness(97%) contrast(97%);\n          filter: invert(29%) sepia(81%) saturate(323%) hue-rotate(126deg) brightness(97%) contrast(97%);\n}\n\n.selected_Section50 img, .title.Sec50 img{\n  -webkit-filter: invert(29%) sepia(18%) saturate(1061%) hue-rotate(235deg) brightness(91%) contrast(93%);\n          filter: invert(29%) sepia(18%) saturate(1061%) hue-rotate(235deg) brightness(91%) contrast(93%);\n}\n\n.selected_Section60 img, .title.Sec60 img{\n  -webkit-filter: invert(31%) sepia(25%) saturate(876%) hue-rotate(78deg) brightness(95%) contrast(88%);\n          filter: invert(31%) sepia(25%) saturate(876%) hue-rotate(78deg) brightness(95%) contrast(88%);\n}\n\n.timelineSectionNav.selected_Section10 li.Sec10 img,\n.timelineSectionNav.selected_Section20 li.Sec20 img,\n.timelineSectionNav.selected_Section30 li.Sec30 img,\n.timelineSectionNav.selected_Section40 li.Sec40 img,\n.timelineSectionNav.selected_Section50 li.Sec50 img,\n.timelineSectionNav.selected_Section60 li.Sec60 img{\n  -webkit-filter: invert(99%) sepia(7%) saturate(90%) hue-rotate(226deg) brightness(120%) contrast(100%);\n          filter: invert(99%) sepia(7%) saturate(90%) hue-rotate(226deg) brightness(120%) contrast(100%);\n}\n\n.timelineSectionNav.selected_Section10 ul li.Sec10, .timelineSectionNav.selected_Section10 ul li.Sec10 button,\n.timelineSectionNav.selected_Section20 ul li.Sec20, .timelineSectionNav.selected_Section20 ul li.Sec20 button,\n.timelineSectionNav.selected_Section30 ul li.Sec30, .timelineSectionNav.selected_Section30 ul li.Sec30 button,\n.timelineSectionNav.selected_Section40 ul li.Sec40, .timelineSectionNav.selected_Section40 ul li.Sec40 button,\n.timelineSectionNav.selected_Section50 ul li.Sec50, .timelineSectionNav.selected_Section50 ul li.Sec50 button,\n.timelineSectionNav.selected_Section60 ul li.Sec60, .timelineSectionNav.selected_Section60 ul li.Sec60 button{\n  background: #494949;\n}\n\n.webdevtools {\n  margin-bottom: 80px;\n  margin-left: 50px;\n}\n\n.webdevtools button {\n  margin-left: 10px;\n}\n\n.hiddenbutton{\n  display: none;\n}\n\n@media (min-width: 550px) {\n  .card img{\n    width: 55px;\n    margin: 15px;\n  }\n  \n  .card .timespan{\n    font-size: 80%;\n    margin: 15px 0px 0px 15px;\n  }\n\n  .card h1{\n    float: left;\n    margin: 15px 0px 0px 0px;\n  }\n  \n  .card h2{\n    margin: 0px 0px 0px 15px;\n  }\n}\n/*# sourceMappingURL=data:application/json;base64,eyJ2ZXJzaW9uIjozLCJzb3VyY2VzIjpbInNyYy9hcHAvY29tcG9uZW50cy9tYWluLXZpZXcvbWFpbi12aWV3LmNvbXBvbmVudC5jc3MiXSwibmFtZXMiOltdLCJtYXBwaW5ncyI6IkFBQUE7RUFDRSx1QkFBdUI7RUFDdkIsNkJBQTREO0FBQzlEOztBQUVBO0VBQ0UsdUJBQXVCO0VBQ3ZCLGdDQUFnRTtFQUNoRSxxQkFBcUI7QUFDdkI7O0FBRUE7RUFDRSxxQ0FBcUM7RUFDckMsU0FBUztBQUNYOztBQUVBO0VBQ0UscURBQXFEO0VBQ3JELFNBQVM7QUFDWDs7QUFFQTtFQUNFLGVBQWU7RUFDZixNQUFNO0VBQ04sWUFBWTtFQUNaLFdBQVc7RUFDWCxnQkFBZ0I7RUFDaEIsV0FBVztBQUNiOztBQUVBO0VBQ0UsK0NBQTRFO0VBQzVFLHFCQUFxQjtBQUN2Qjs7QUFFQTtFQUNFLCtDQUE0RTtFQUM1RSxxQkFBcUI7QUFDdkI7O0FBRUE7RUFDRSwrQ0FBNEU7RUFDNUUscUJBQXFCO0FBQ3ZCOztBQUVBO0VBQ0UsK0NBQTRFO0VBQzVFLHFCQUFxQjtBQUN2Qjs7QUFFQTtFQUNFLCtDQUE0RTtFQUM1RSxxQkFBcUI7QUFDdkI7O0FBRUE7RUFDRSwrQ0FBNEU7RUFDNUUscUJBQXFCO0FBQ3ZCOztBQUVBO0VBQ0UsbUJBQW1CO0FBQ3JCOztBQUVBO0VBQ0UsbUJBQW1CO0FBQ3JCOztBQUVBO0VBQ0UsWUFBWTtBQUNkOztBQUVBO0VBQ0UsZ0NBQWdDO0VBQ2hDLFVBQVU7QUFDWjs7QUFFQTtFQUNFLFVBQVU7RUFDVixZQUFZO0VBQ1osa0JBQWtCO0VBQ2xCLFNBQVM7RUFDVCxVQUFVO0FBQ1o7O0FBRUE7RUFDRSxVQUFVO0VBQ1YsV0FBVztFQUNYLGlCQUFpQjtBQUNuQjs7QUFFQTtFQUNFLFVBQVU7RUFDVixZQUFZO0FBQ2Q7O0FBRUE7RUFDRSxVQUFVO0VBQ1YsZUFBZTtFQUNmLFlBQVk7RUFDWixtQkFBbUI7QUFDckI7O0FBRUE7RUFDRSxhQUFhO0VBQ2IsZUFBZTtFQUNmLHFCQUFxQjtBQUN2Qjs7QUFFQTtFQUNFLFdBQVc7RUFDWCxZQUFZO0VBQ1osWUFBWTtBQUNkOztBQUVBO0VBQ0UsbUJBQW1CO0VBQ25CLFdBQVc7RUFDWCxZQUFZO0FBQ2Q7O0FBRUE7RUFDRSxrQkFBa0I7RUFDbEIsWUFBWTtFQUNaLFlBQVk7RUFDWix3Q0FBOEQ7RUFDOUQsK0JBQStCO0VBQy9CLHNCQUFzQjtBQUN4Qjs7QUFFQTtFQUNFLGtCQUFrQjtFQUNsQixhQUFhO0VBQ2IsWUFBWTtFQUNaLHdDQUE4RDtFQUM5RCwrQkFBK0I7RUFDL0Isc0JBQXNCO0FBQ3hCOztBQUVBO0VBQ0UsY0FBYztFQUNkLG1CQUFtQjtBQUNyQjs7QUFFQTtFQUNFLHlHQUFpRztVQUFqRyxpR0FBaUc7QUFDbkc7O0FBRUEsYUFBYSx5QkFBeUIsRUFBRTs7QUFDeEMsYUFBYSx5QkFBeUIsRUFBRTs7QUFDeEMsYUFBYSx5QkFBeUIsRUFBRTs7QUFDeEMsYUFBYSx5QkFBeUIsRUFBRTs7QUFDeEMsYUFBYSx5QkFBeUIsRUFBRTs7QUFDeEMsYUFBYSx5QkFBeUIsRUFBRTs7QUFFeEMsdUJBQXVCLGNBQWMsRUFBRTs7QUFDdkMsdUJBQXVCLGNBQWMsRUFBRTs7QUFDdkMsdUJBQXVCLGNBQWMsRUFBRTs7QUFDdkMsdUJBQXVCLGNBQWMsRUFBRTs7QUFDdkMsdUJBQXVCLGNBQWMsRUFBRTs7QUFDdkMsdUJBQXVCLGNBQWMsRUFBRTs7QUFFdkMsZ0RBQWdELHlCQUF5QixFQUFFOztBQUMzRSxnREFBZ0QseUJBQXlCLEVBQUU7O0FBQzNFLGdEQUFnRCx5QkFBeUIsRUFBRTs7QUFDM0UsZ0RBQWdELHlCQUF5QixFQUFFOztBQUMzRSxnREFBZ0QseUJBQXlCLEVBQUU7O0FBQzNFLGdEQUFnRCx5QkFBeUIsRUFBRTs7QUFFM0U7RUFDRSxTQUFTO0VBQ1QsVUFBVTtFQUNWLFlBQVk7RUFDWixXQUFXO0VBQ1gsZUFBZTtFQUNmLE9BQU87RUFDUCxNQUFNO0VBQ04sV0FBVztBQUNiOztBQUVBO0VBQ0UsMkJBQTJCO0VBQzNCLFVBQVU7RUFDVixjQUFjO0VBQ2QsV0FBVztBQUNiOztBQUVBO0VBQ0UsV0FBVztFQUNYLFlBQVk7RUFDWixlQUFlO0VBQ2YsUUFBUTtFQUNSLE1BQU07QUFDUjs7QUFFQTtFQUNFLGVBQWU7RUFDZixxQkFBcUI7RUFDckIsYUFBYTtBQUNmOztBQUVBO0VBQ0UsV0FBVztFQUNYLFlBQVk7RUFDWixhQUFhO0VBQ2IsWUFBWTtFQUNaLFdBQVc7RUFDWCx5QkFBeUI7QUFDM0I7O0FBRUE7RUFDRSw0Q0FBa0U7RUFDbEUsc0JBQXNCO0VBQ3RCLHlCQUF5QjtBQUMzQjs7QUFFQTtFQUNFLFNBQVM7RUFDVCxtQkFBbUI7RUFDbkIsZUFBZTtFQUNmLFFBQVE7RUFDUixhQUFhO0VBQ2IseUJBQXlCO0VBQ3pCLHFDQUEyRDtFQUMzRCwyQkFBMkI7RUFDM0IscUJBQXFCO0VBQ3JCLDRCQUE0QjtBQUM5Qjs7QUFFQTtFQUNFLHlCQUF5QjtBQUMzQjs7QUFFQTtFQUNFLGVBQWU7RUFDZixTQUFTO0VBQ1QsVUFBVTtFQUNWLFdBQVc7QUFDYjs7QUFFQTtFQUNFLHFCQUFxQjtFQUNyQixTQUFTO0VBQ1QsVUFBVTtFQUNWLFlBQVk7RUFDWiw4QkFBOEI7RUFDOUIsbUJBQW1CO0FBQ3JCOztBQUVBO0VBQ0UsZ0JBQWdCO0VBQ2hCLFdBQVc7RUFDWCxVQUFVO0VBQ1YsWUFBWTtBQUNkOztBQUVBO0VBQ0UsbUJBQW1CO0FBQ3JCOztBQUVBOzs7OztFQUtFLGlCQUFpQjtBQUNuQjs7QUFFQTtFQUNFLGNBQWM7RUFDZCxnQkFBZ0I7RUFDaEIsV0FBVztFQUNYLFlBQVk7RUFDWixZQUFZO0VBQ1osYUFBYTtFQUNiLGdCQUFnQjtBQUNsQjs7QUFFQTtFQUNFLFdBQVc7RUFDWCxZQUFZO0FBQ2Q7O0FBRUE7RUFDRTtJQUNFLGVBQWU7RUFDakI7QUFDRjs7QUFFQTtFQUNFLHNHQUE4RjtVQUE5Riw4RkFBOEY7QUFDaEc7O0FBRUE7RUFDRSx1R0FBK0Y7VUFBL0YsK0ZBQStGO0FBQ2pHOztBQUVBO0VBQ0Usc0dBQThGO1VBQTlGLDhGQUE4RjtBQUNoRzs7QUFFQTtFQUNFLHNHQUE4RjtVQUE5Riw4RkFBOEY7QUFDaEc7O0FBRUE7RUFDRSx1R0FBK0Y7VUFBL0YsK0ZBQStGO0FBQ2pHOztBQUVBO0VBQ0UscUdBQTZGO1VBQTdGLDZGQUE2RjtBQUMvRjs7QUFFQTs7Ozs7O0VBTUUsc0dBQThGO1VBQTlGLDhGQUE4RjtBQUNoRzs7QUFFQTs7Ozs7O0VBTUUsbUJBQW1CO0FBQ3JCOztBQUVBO0VBQ0UsbUJBQW1CO0VBQ25CLGlCQUFpQjtBQUNuQjs7QUFFQTtFQUNFLGlCQUFpQjtBQUNuQjs7QUFFQTtFQUNFLGFBQWE7QUFDZjs7QUFFQTtFQUNFO0lBQ0UsV0FBVztJQUNYLFlBQVk7RUFDZDs7RUFFQTtJQUNFLGNBQWM7SUFDZCx5QkFBeUI7RUFDM0I7O0VBRUE7SUFDRSxXQUFXO0lBQ1gsd0JBQXdCO0VBQzFCOztFQUVBO0lBQ0Usd0JBQXdCO0VBQzFCO0FBQ0YiLCJmaWxlIjoic3JjL2FwcC9jb21wb25lbnRzL21haW4tdmlldy9tYWluLXZpZXcuY29tcG9uZW50LmNzcyIsInNvdXJjZXNDb250ZW50IjpbIkBmb250LWZhY2Uge1xuICBmb250LWZhbWlseTogJ1ZvbGxrb3JuJztcbiAgc3JjOiB1cmwoXCIuLi8uLi8uLi9hc3NldHMvZm9udHMvVm9sbGtvcm4vVm9sbGtvcm4tQm9sZC50dGZcIik7XG59XG5cbkBmb250LWZhY2Uge1xuICBmb250LWZhbWlseTogJ09wZW5TYW5zJztcbiAgc3JjOiB1cmwoXCIuLi8uLi8uLi9hc3NldHMvZm9udHMvT3Blbl9TYW5zL09wZW5TYW5zLVJlZ3VsYXIudHRmXCIpO1xuICAvKmZvbnQtd2VpZ2h0OiBib2xkOyovXG59XG5cbmgxLCBoMiwgaDMsIGg0LCBoNSwgaDZ7XG4gIGZvbnQtZmFtaWx5OiAnVm9sbGtvcm4nLCBUaW1lcywgc2VyaWY7XG4gIG1hcmdpbjogMDtcbn1cblxucHtcbiAgZm9udC1mYW1pbHk6ICdPcGVuU2FucycsIEhlbHZldGljYSwgQXJpYWwsIFNhbnMtU2VyaWY7XG4gIG1hcmdpbjogMDtcbn1cblxuI3dvb2RjdXR7XG4gIHBvc2l0aW9uOiBmaXhlZDtcbiAgdG9wOiAwO1xuICBoZWlnaHQ6IDEwMCU7XG4gIHdpZHRoOiAxMDAlO1xuICAvKm9wYWNpdHk6IDAuMjsqL1xuICB6LWluZGV4OiAtMjtcbn1cblxuI3dvb2RjdXQuU2VjMTB7XG4gIGJhY2tncm91bmQ6IHVybChcIi4uLy4uLy4uL2Fzc2V0cy9pbWcvd29vZGN1dHMvU2VjdGlvbjFCRy5wbmdcIikgNTAlIDUwJSBmaXhlZDtcbiAgYmFja2dyb3VuZC1zaXplOiAxMDAlO1xufVxuXG4jd29vZGN1dC5TZWMyMHtcbiAgYmFja2dyb3VuZDogdXJsKFwiLi4vLi4vLi4vYXNzZXRzL2ltZy93b29kY3V0cy9TZWN0aW9uMkJHLnBuZ1wiKSA1MCUgNTAlIGZpeGVkO1xuICBiYWNrZ3JvdW5kLXNpemU6IDEwMCU7XG59XG5cbiN3b29kY3V0LlNlYzMwe1xuICBiYWNrZ3JvdW5kOiB1cmwoXCIuLi8uLi8uLi9hc3NldHMvaW1nL3dvb2RjdXRzL1NlY3Rpb24zQkcucG5nXCIpIDUwJSA1MCUgZml4ZWQ7XG4gIGJhY2tncm91bmQtc2l6ZTogMTAwJTtcbn1cblxuI3dvb2RjdXQuU2VjNDB7XG4gIGJhY2tncm91bmQ6IHVybChcIi4uLy4uLy4uL2Fzc2V0cy9pbWcvd29vZGN1dHMvU2VjdGlvbjRCRy5wbmdcIikgNTAlIDUwJSBmaXhlZDtcbiAgYmFja2dyb3VuZC1zaXplOiAxMDAlO1xufVxuXG4jd29vZGN1dC5TZWM1MHtcbiAgYmFja2dyb3VuZDogdXJsKFwiLi4vLi4vLi4vYXNzZXRzL2ltZy93b29kY3V0cy9TZWN0aW9uNUJHLnBuZ1wiKSA1MCUgNTAlIGZpeGVkO1xuICBiYWNrZ3JvdW5kLXNpemU6IDEwMCU7XG59XG5cbiN3b29kY3V0LlNlYzYwe1xuICBiYWNrZ3JvdW5kOiB1cmwoXCIuLi8uLi8uLi9hc3NldHMvaW1nL3dvb2RjdXRzL1NlY3Rpb242QkcucG5nXCIpIDUwJSA1MCUgZml4ZWQ7XG4gIGJhY2tncm91bmQtc2l6ZTogMTAwJTtcbn1cblxuLmNhcmR7XG4gIGJhY2tncm91bmQ6ICNmZmZmZmY7XG59XG5cbi5jYXJkLmxja2ZhbHNlOmhvdmVye1xuICBiYWNrZ3JvdW5kOiAjY2FjYWNhO1xufVxuXG4uY2FyZC5sY2t0cnVle1xuICBvcGFjaXR5OiAwLjU7XG59XG5cbi5jYXJkLmxja2ZhbHNlLm5lYXJ7XG4gIGJveC1zaGFkb3c6IDVweCAwcHggMThweCAjODg4ODg4O1xuICB6LWluZGV4OiAxO1xufVxuXG4uY2FyZC50aXRsZXtcbiAgd2lkdGg6IDY1JTtcbiAgaGVpZ2h0OiA5MHB4O1xuICBwb3NpdGlvbjogYWJzb2x1dGU7XG4gIHRvcDogMjVweDtcbiAgbGVmdDogMzJweDtcbn1cblxuLmNhcmQgaW1ne1xuICB3aWR0aDogMTUlO1xuICBmbG9hdDogbGVmdDtcbiAgbWFyZ2luOiA2JSAwIDAgNSU7XG59XG5cbi5jYXJkLmV4aGliaXR7XG4gIHdpZHRoOiA1NiU7XG4gIGhlaWdodDogOTBweDtcbn1cblxuLmNhcmQgaDF7XG4gIHdpZHRoOiA3MCU7XG4gIGZvbnQtc2l6ZTogMTEwJTtcbiAgZmxvYXQ6IHJpZ2h0O1xuICBtYXJnaW46IDMlIDUlIDAlIDUlO1xufVxuXG4uY2FyZCBoMntcbiAgbWFyZ2luOiAwJSA1JTtcbiAgZm9udC1zaXplOiAxMTAlO1xuICB3b3JkLWJyZWFrOiBicmVhay1hbGw7XG59XG5cbi53cmFwSWNvbntcbiAgd2lkdGg6IDMwcHg7XG4gIGZsb2F0OiByaWdodDtcbiAgaGVpZ2h0OiAxMDAlO1xufVxuXG4uY29hSWNvbiwgLmFjdEljb257XG4gIGJvcmRlci1yYWRpdXM6IDI1cHg7XG4gIHdpZHRoOiAyNHB4O1xuICBoZWlnaHQ6IDI0cHg7XG59XG5cbi5jb2FJY29ue1xuICBwb3NpdGlvbjogYWJzb2x1dGU7XG4gIGJvdHRvbTogMzNweDtcbiAgcmlnaHQ6IDQuNXB4O1xuICBiYWNrZ3JvdW5kLWltYWdlOiB1cmwoXCIuLi8uLi8uLi9hc3NldHMvaWNvbnMvV2FwcGVuSWNvbnMucG5nXCIpO1xuICBiYWNrZ3JvdW5kLXBvc2l0aW9uOiAyN3B4IC0yOHB4O1xuICBiYWNrZ3JvdW5kLXNpemU6IDI0MHB4O1xufVxuXG4uYWN0SWNvbntcbiAgcG9zaXRpb246IGFic29sdXRlO1xuICBib3R0b206IDQuNXB4O1xuICByaWdodDogNC41cHg7XG4gIGJhY2tncm91bmQtaW1hZ2U6IHVybChcIi4uLy4uLy4uL2Fzc2V0cy9pY29ucy9XYXBwZW5JY29ucy5wbmdcIik7XG4gIGJhY2tncm91bmQtcG9zaXRpb246IC0zcHggLTI4cHg7XG4gIGJhY2tncm91bmQtc2l6ZTogMjQwcHg7XG59XG5cbi5jYXJkIC50aW1lc3BhbntcbiAgZm9udC1zaXplOiA4MCU7XG4gIG1hcmdpbjogNSUgNSUgMCUgNSU7XG59XG5cbi5jYXJkLlNlYzEgaW1ne1xuICBmaWx0ZXI6IGludmVydCg4OCUpIHNlcGlhKDg4JSkgc2F0dXJhdGUoNjU4NiUpIGh1ZS1yb3RhdGUoMjkwZGVnKSBicmlnaHRuZXNzKDEwMSUpIGNvbnRyYXN0KDEwMCUpO1xufVxuXG4uY2FyZC5TZWMxMHsgYm9yZGVyOiAycHggc29saWQgIzgyM2EzYTsgfVxuLmNhcmQuU2VjMjB7IGJvcmRlcjogMnB4IHNvbGlkICMzMDU5Nzg7IH1cbi5jYXJkLlNlYzMweyBib3JkZXI6IDJweCBzb2xpZCAjNzU1MzAwOyB9XG4uY2FyZC5TZWM0MHsgYm9yZGVyOiAycHggc29saWQgIzFkNjM1ZDsgfVxuLmNhcmQuU2VjNTB7IGJvcmRlcjogMnB4IHNvbGlkICM1YzQxNmE7IH1cbi5jYXJkLlNlYzYweyBib3JkZXI6IDJweCBzb2xpZCAjMzI2MzNhOyB9XG5cbi5jYXJkLlNlYzEwIC50aW1lc3BhbnsgY29sb3I6ICM4MjNhM2E7IH1cbi5jYXJkLlNlYzIwIC50aW1lc3BhbnsgY29sb3I6ICMzMDU5Nzg7IH1cbi5jYXJkLlNlYzMwIC50aW1lc3BhbnsgY29sb3I6ICM3NTUzMDA7IH1cbi5jYXJkLlNlYzQwIC50aW1lc3BhbnsgY29sb3I6ICMxZDYzNWQ7IH1cbi5jYXJkLlNlYzUwIC50aW1lc3BhbnsgY29sb3I6ICM1YzQxNmE7IH1cbi5jYXJkLlNlYzYwIC50aW1lc3BhbnsgY29sb3I6ICMzMjYzM2E7IH1cblxuLmNhcmQuU2VjMTAgLndyYXBJY29uIGRpdiwgI3RpbWVsaW5lQXhpcy5TZWMxMHsgYmFja2dyb3VuZC1jb2xvcjogIzgyM2EzYTsgfVxuLmNhcmQuU2VjMjAgLndyYXBJY29uIGRpdiwgI3RpbWVsaW5lQXhpcy5TZWMyMHsgYmFja2dyb3VuZC1jb2xvcjogIzMwNTk3ODsgfVxuLmNhcmQuU2VjMzAgLndyYXBJY29uIGRpdiwgI3RpbWVsaW5lQXhpcy5TZWMzMHsgYmFja2dyb3VuZC1jb2xvcjogIzc1NTMwMDsgfVxuLmNhcmQuU2VjNDAgLndyYXBJY29uIGRpdiwgI3RpbWVsaW5lQXhpcy5TZWM0MHsgYmFja2dyb3VuZC1jb2xvcjogIzFkNjM1ZDsgfVxuLmNhcmQuU2VjNTAgLndyYXBJY29uIGRpdiwgI3RpbWVsaW5lQXhpcy5TZWM1MHsgYmFja2dyb3VuZC1jb2xvcjogIzVjNDE2YTsgfVxuLmNhcmQuU2VjNjAgLndyYXBJY29uIGRpdiwgI3RpbWVsaW5lQXhpcy5TZWM2MHsgYmFja2dyb3VuZC1jb2xvcjogIzMyNjMzYTsgfVxuXG4jdGltZWxpbmVBeGlze1xuICBtYXJnaW46IDA7XG4gIHBhZGRpbmc6IDA7XG4gIGhlaWdodDogMTAwJTtcbiAgd2lkdGg6IDM0cHg7XG4gIHBvc2l0aW9uOiBmaXhlZDtcbiAgbGVmdDogMDtcbiAgdG9wOiAwO1xuICB6LWluZGV4OiAtMTtcbn1cblxuI3RpbWVsaW5le1xuICBtYXJnaW46IDIwMHB4IDBweCA0MDBweCAwcHg7XG4gIHBhZGRpbmc6IDA7XG4gIGhlaWdodDogMTAwMHB4O1xuICB3aWR0aDogMTAwJTtcbn1cblxuLnRvb2xiYXJ7XG4gIHdpZHRoOiA2NXB4O1xuICBoZWlnaHQ6IDEwMCU7XG4gIHBvc2l0aW9uOiBmaXhlZDtcbiAgcmlnaHQ6IDA7XG4gIHRvcDogMDtcbn1cblxuLnRvb2xiYXIgbWF0LWljb257XG4gIGZvbnQtc2l6ZTogMzVweDtcbiAgbWFyZ2luOiA1cHggMCAwIC0xMXB4O1xuICBjb2xvcjojZmZmZmZmO1xufVxuXG4udG9vbGJhciBidXR0b257XG4gIGZsb2F0OnJpZ2h0O1xuICBib3JkZXI6IG5vbmU7XG4gIG91dGxpbmU6IG5vbmU7XG4gIGhlaWdodDogNTBweDtcbiAgd2lkdGg6IDUwcHg7XG4gIGJhY2tncm91bmQtY29sb3I6ICM0OTQ5NDk7XG59XG5cbi53YXBwZW5idXR0b257IFxuICBiYWNrZ3JvdW5kOiB1cmwoXCIuLi8uLi8uLi9hc3NldHMvaWNvbnMvV2FwcGVuSWNvbnMucG5nXCIpIDU0cHggNDhweDtcbiAgYmFja2dyb3VuZC1zaXplOiA0NTBweDtcbiAgbWFyZ2luOiA5MHB4IDIwcHggMHB4IDBweDtcbn1cbiBcbi5sb2NhdGlvbmJ1dHRvbntcbiAgbWFyZ2luOiAwO1xuICBib3JkZXItcmFkaXVzOiAyNXB4O1xuICBwb3NpdGlvbjogZml4ZWQ7XG4gIHJpZ2h0OiAwO1xuICBib3R0b206IDExMHB4O1xuICBtYXJnaW46IDIwcHggMjBweCAwcHggMHB4O1xuICBiYWNrZ3JvdW5kLWltYWdlOiB1cmwoXCIuLi8uLi8uLi9hc3NldHMvaWNvbnMvbG9jYXRpb24uc3ZnXCIpO1xuICBiYWNrZ3JvdW5kLXBvc2l0aW9uOiBjZW50ZXI7XG4gIGJhY2tncm91bmQtc2l6ZTogNDBweDtcbiAgYmFja2dyb3VuZC1yZXBlYXQ6IG5vLXJlcGVhdDtcbn1cblxuLnRvb2xiYXIgYnV0dG9uLmRpc2FibGVke1xuICBiYWNrZ3JvdW5kLWNvbG9yOiAjYWFhYWFhO1xufVxuXG4udGltZWxpbmVTZWN0aW9uTmF2e1xuICBwb3NpdGlvbjogZml4ZWQ7XG4gIGJvdHRvbTogMDtcbiAgei1pbmRleDogNTtcbiAgd2lkdGg6IDEwMCU7XG59XG5cbi50aW1lbGluZVNlY3Rpb25OYXYgdWx7XG4gIGxpc3Qtc3R5bGUtdHlwZTogbm9uZTtcbiAgbWFyZ2luOiAwO1xuICBwYWRkaW5nOiAwO1xuICBoZWlnaHQ6IDgwcHg7XG4gIGJvcmRlci10b3A6IDE1cHggc29saWQgIzQ5NDk0OTtcbiAgYmFja2dyb3VuZDogIzQ5NDk0OTtcbn1cblxuLnRpbWVsaW5lU2VjdGlvbk5hdiB1bCBsaXtcbiAgYmFja2dyb3VuZDogI2ZmZjtcbiAgZmxvYXQ6IGxlZnQ7XG4gIHdpZHRoOiAxNiU7IFxuICBoZWlnaHQ6IDEwMCU7XG59XG5cbi50aW1lbGluZVNlY3Rpb25OYXYgdWwgbGkuc2VsZWN0ZWR7XG4gIGJhY2tncm91bmQ6ICM0OTQ5NDk7XG59XG5cbi50aW1lbGluZVNlY3Rpb25OYXYgLlNlYzIwLFxuLnRpbWVsaW5lU2VjdGlvbk5hdiAuU2VjMzAsXG4udGltZWxpbmVTZWN0aW9uTmF2IC5TZWM0MCxcbi50aW1lbGluZVNlY3Rpb25OYXYgLlNlYzUwLFxuLnRpbWVsaW5lU2VjdGlvbk5hdiAuU2VjNjAge1xuICBtYXJnaW4tbGVmdDogMC44JTtcbn1cblxuLnRpbWVsaW5lU2VjdGlvbk5hdiB1bCBsaSBidXR0b257XG4gIGRpc3BsYXk6IGJsb2NrO1xuICBtYXJnaW46IDVweCBhdXRvO1xuICB3aWR0aDogMTAwJTsgXG4gIGhlaWdodDogNzBweDtcbiAgYm9yZGVyOiBub25lO1xuICBvdXRsaW5lOiBub25lO1xuICBiYWNrZ3JvdW5kOiAjZmZmO1xufVxuXG4udGltZWxpbmVTZWN0aW9uTmF2IHVsIGxpIGJ1dHRvbiBpbWd7XG4gIHdpZHRoOiA0NXB4OyBcbiAgaGVpZ2h0OiA0NXB4O1xufVxuXG5AbWVkaWEgKG1heC13aWR0aDogMzIwcHgpIHtcbiAgLmNhcmQgaDF7XG4gICAgZm9udC1zaXplOiAxMDAlO1xuICB9XG59XG5cbi5zZWxlY3RlZF9TZWN0aW9uMTAgaW1nLCAudGl0bGUuU2VjMTAgaW1ne1xuICBmaWx0ZXI6IGludmVydCgzMCUpIHNlcGlhKDQwJSkgc2F0dXJhdGUoODQyJSkgaHVlLXJvdGF0ZSgzMTRkZWcpIGJyaWdodG5lc3MoODElKSBjb250cmFzdCg4OCUpO1xufVxuXG4uc2VsZWN0ZWRfU2VjdGlvbjIwIGltZywgLnRpdGxlLlNlYzIwIGltZ3tcbiAgZmlsdGVyOiBpbnZlcnQoMzQlKSBzZXBpYSgxOCUpIHNhdHVyYXRlKDEyODglKSBodWUtcm90YXRlKDE2M2RlZykgYnJpZ2h0bmVzcyg4OCUpIGNvbnRyYXN0KDkzJSk7XG59XG5cbi5zZWxlY3RlZF9TZWN0aW9uMzAgaW1nLCAudGl0bGUuU2VjMzAgaW1ne1xuICBmaWx0ZXI6IGludmVydCgzNCUpIHNlcGlhKDclKSBzYXR1cmF0ZSg3MDg3JSkgaHVlLXJvdGF0ZSgxMWRlZykgYnJpZ2h0bmVzcyg5NCUpIGNvbnRyYXN0KDEwMSUpO1xufVxuXG4uc2VsZWN0ZWRfU2VjdGlvbjQwIGltZywgLnRpdGxlLlNlYzQwIGltZ3tcbiAgZmlsdGVyOiBpbnZlcnQoMjklKSBzZXBpYSg4MSUpIHNhdHVyYXRlKDMyMyUpIGh1ZS1yb3RhdGUoMTI2ZGVnKSBicmlnaHRuZXNzKDk3JSkgY29udHJhc3QoOTclKTtcbn1cblxuLnNlbGVjdGVkX1NlY3Rpb241MCBpbWcsIC50aXRsZS5TZWM1MCBpbWd7XG4gIGZpbHRlcjogaW52ZXJ0KDI5JSkgc2VwaWEoMTglKSBzYXR1cmF0ZSgxMDYxJSkgaHVlLXJvdGF0ZSgyMzVkZWcpIGJyaWdodG5lc3MoOTElKSBjb250cmFzdCg5MyUpO1xufVxuXG4uc2VsZWN0ZWRfU2VjdGlvbjYwIGltZywgLnRpdGxlLlNlYzYwIGltZ3tcbiAgZmlsdGVyOiBpbnZlcnQoMzElKSBzZXBpYSgyNSUpIHNhdHVyYXRlKDg3NiUpIGh1ZS1yb3RhdGUoNzhkZWcpIGJyaWdodG5lc3MoOTUlKSBjb250cmFzdCg4OCUpO1xufVxuXG4udGltZWxpbmVTZWN0aW9uTmF2LnNlbGVjdGVkX1NlY3Rpb24xMCBsaS5TZWMxMCBpbWcsXG4udGltZWxpbmVTZWN0aW9uTmF2LnNlbGVjdGVkX1NlY3Rpb24yMCBsaS5TZWMyMCBpbWcsXG4udGltZWxpbmVTZWN0aW9uTmF2LnNlbGVjdGVkX1NlY3Rpb24zMCBsaS5TZWMzMCBpbWcsXG4udGltZWxpbmVTZWN0aW9uTmF2LnNlbGVjdGVkX1NlY3Rpb240MCBsaS5TZWM0MCBpbWcsXG4udGltZWxpbmVTZWN0aW9uTmF2LnNlbGVjdGVkX1NlY3Rpb241MCBsaS5TZWM1MCBpbWcsXG4udGltZWxpbmVTZWN0aW9uTmF2LnNlbGVjdGVkX1NlY3Rpb242MCBsaS5TZWM2MCBpbWd7XG4gIGZpbHRlcjogaW52ZXJ0KDk5JSkgc2VwaWEoNyUpIHNhdHVyYXRlKDkwJSkgaHVlLXJvdGF0ZSgyMjZkZWcpIGJyaWdodG5lc3MoMTIwJSkgY29udHJhc3QoMTAwJSk7XG59XG5cbi50aW1lbGluZVNlY3Rpb25OYXYuc2VsZWN0ZWRfU2VjdGlvbjEwIHVsIGxpLlNlYzEwLCAudGltZWxpbmVTZWN0aW9uTmF2LnNlbGVjdGVkX1NlY3Rpb24xMCB1bCBsaS5TZWMxMCBidXR0b24sXG4udGltZWxpbmVTZWN0aW9uTmF2LnNlbGVjdGVkX1NlY3Rpb24yMCB1bCBsaS5TZWMyMCwgLnRpbWVsaW5lU2VjdGlvbk5hdi5zZWxlY3RlZF9TZWN0aW9uMjAgdWwgbGkuU2VjMjAgYnV0dG9uLFxuLnRpbWVsaW5lU2VjdGlvbk5hdi5zZWxlY3RlZF9TZWN0aW9uMzAgdWwgbGkuU2VjMzAsIC50aW1lbGluZVNlY3Rpb25OYXYuc2VsZWN0ZWRfU2VjdGlvbjMwIHVsIGxpLlNlYzMwIGJ1dHRvbixcbi50aW1lbGluZVNlY3Rpb25OYXYuc2VsZWN0ZWRfU2VjdGlvbjQwIHVsIGxpLlNlYzQwLCAudGltZWxpbmVTZWN0aW9uTmF2LnNlbGVjdGVkX1NlY3Rpb240MCB1bCBsaS5TZWM0MCBidXR0b24sXG4udGltZWxpbmVTZWN0aW9uTmF2LnNlbGVjdGVkX1NlY3Rpb241MCB1bCBsaS5TZWM1MCwgLnRpbWVsaW5lU2VjdGlvbk5hdi5zZWxlY3RlZF9TZWN0aW9uNTAgdWwgbGkuU2VjNTAgYnV0dG9uLFxuLnRpbWVsaW5lU2VjdGlvbk5hdi5zZWxlY3RlZF9TZWN0aW9uNjAgdWwgbGkuU2VjNjAsIC50aW1lbGluZVNlY3Rpb25OYXYuc2VsZWN0ZWRfU2VjdGlvbjYwIHVsIGxpLlNlYzYwIGJ1dHRvbntcbiAgYmFja2dyb3VuZDogIzQ5NDk0OTtcbn1cblxuLndlYmRldnRvb2xzIHtcbiAgbWFyZ2luLWJvdHRvbTogODBweDtcbiAgbWFyZ2luLWxlZnQ6IDUwcHg7XG59XG5cbi53ZWJkZXZ0b29scyBidXR0b24ge1xuICBtYXJnaW4tbGVmdDogMTBweDtcbn1cblxuLmhpZGRlbmJ1dHRvbntcbiAgZGlzcGxheTogbm9uZTtcbn1cblxuQG1lZGlhIChtaW4td2lkdGg6IDU1MHB4KSB7XG4gIC5jYXJkIGltZ3tcbiAgICB3aWR0aDogNTVweDtcbiAgICBtYXJnaW46IDE1cHg7XG4gIH1cbiAgXG4gIC5jYXJkIC50aW1lc3BhbntcbiAgICBmb250LXNpemU6IDgwJTtcbiAgICBtYXJnaW46IDE1cHggMHB4IDBweCAxNXB4O1xuICB9XG5cbiAgLmNhcmQgaDF7XG4gICAgZmxvYXQ6IGxlZnQ7XG4gICAgbWFyZ2luOiAxNXB4IDBweCAwcHggMHB4O1xuICB9XG4gIFxuICAuY2FyZCBoMntcbiAgICBtYXJnaW46IDBweCAwcHggMHB4IDE1cHg7XG4gIH1cbn0iXX0= */"

/***/ }),

/***/ "./src/app/components/main-view/main-view.component.html":
/*!***************************************************************!*\
  !*** ./src/app/components/main-view/main-view.component.html ***!
  \***************************************************************/
/*! no static exports found */
/***/ (function(module, exports) {

module.exports = "<div id=\"woodcut\" class=\"Sec{{currentSection}}\"></div>\n<div class=\"toolbar\">\n    <button class=\"wappenbutton\" (click)=\"userCoA()\"></button>\n    <button [className]=\"closestExhibit ? 'enabled locationbutton' : 'disabled locationbutton'\" (click)=\"goToClosestExhibit()\"></button>\n</div>\n\n<div id=\"timelineAxis\" class=\"Sec{{currentSection}}\"></div>\n<div id=\"timeline\"></div>\n\n<ng-container  *ngFor=\"let loc of currentEntrance\" >\n  <div *ngIf=\"loc.parentId == currentSection\" [className]=\"isClose(loc.id) ? 'near card title lck'+loc.locked+' Sec'+loc.parentId : 'card title lck'+loc.locked+' Sec'+loc.parentId\" \n  id=\"exh_{{loc.id}}\" (click)=\"requestRegisterLocation(loc.id, loc.parentId, loc.locked)\">\n    <img src=\"./assets/icons/Timeline/{{getSectionIcon(currentSection)}}.png\" />\n    <h1> {{loc.description}} {{loc.id}} </h1>\n  </div>\n</ng-container>\n\n<ng-container  *ngFor=\"let loc of timelineLocations\" >\n  <div *ngIf=\"loc.locationTypeId != 5\" \n  [className]=\"isClose(loc.id) ? 'near card exhibit lck'+loc.locked+' type'+loc.locationTypeId+' Sec'+loc.parentId+' '+currentSection : 'card exhibit lck'+loc.locked+' type'+loc.locationTypeId+' Sec'+loc.parentId+' '+currentSection\" \n  id=\"exh_{{loc.id}}\" (click)=\"requestRegisterLocation(loc.id, loc.parentId, loc.locked)\">\n    <div class=\"wrapIcon\">\n      <div class=\"coaIcon\" *ngIf=\"loc.unlockCoa\"></div>\n      <div class=\"actIcon\" *ngIf=\"loc.locationTypeId == 3 || loc.locationTypeId == 6\"></div>\n    </div>\n    <p class=\"timespan\">{{loc.startDate}} - {{loc.endDate}}</p>\n    <h2> {{loc.description}} {{loc.id}} </h2>\n  </div>\n</ng-container>\n\n<div class=\"timelineSectionNav selected_Section{{currentSection}}\">\n    <ul>\n        <li *ngFor=\"let section of sectionList\" class=\"Sec{{section.code}}\">\n            <button (click)=\"displaySection(section.code, false)\">\n                <img src=\"./assets/icons/Timeline/{{section.icon}}.png\" />\n            </button>\n        </li>\n    </ul>\n</div> \n\n<div class=\"webdevtools\" *ngIf=\"isWeb\">\n  <button mat-raised-button class=\"control-button\" color=\"primary\" (click)=\"requestRegisterLocationTableAt()\">1000/10</button>\n  <button mat-raised-button class=\"control-button\" color=\"primary\" (click)=\"requestRegisterLocationTableAtBehavior()\">301/30</button>\n  <button mat-raised-button class=\"control-button\" color=\"primary\" (click)=\"requestRegisterLocationPassive()\">102/10</button>\n  <button mat-raised-button class=\"control-button\" color=\"primary\" (click)=\"requestRegisterLocationTableOn()\">2002/20</button>\n  <button mat-raised-button class=\"control-button\" color=\"primary\" (click)=\"requestRegisterNotifyLocation()\">502/50</button>\n  <button mat-raised-button class=\"control-button\" color=\"secondary\" (click)=\"checkWifiForWeb()\">Check Wifi SSID</button>\n</div>\n\n<button id=\"ghostScrollbutton\" class=\"hiddenbutton\" (click)=\"scroll()\">Ghost</button>\n"

/***/ }),

/***/ "./src/app/components/main-view/main-view.component.ts":
/*!*************************************************************!*\
  !*** ./src/app/components/main-view/main-view.component.ts ***!
  \*************************************************************/
/*! exports provided: MainViewComponent */
/***/ (function(module, __webpack_exports__, __webpack_require__) {

"use strict";
__webpack_require__.r(__webpack_exports__);
/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, "MainViewComponent", function() { return MainViewComponent; });
/* harmony import */ var _angular_core__WEBPACK_IMPORTED_MODULE_0__ = __webpack_require__(/*! @angular/core */ "./node_modules/@angular/core/fesm5/core.js");
/* harmony import */ var _services_native_native_response_service__WEBPACK_IMPORTED_MODULE_1__ = __webpack_require__(/*! ../../services/native/native-response.service */ "./src/app/services/native/native-response.service.ts");
/* harmony import */ var _services_location_service__WEBPACK_IMPORTED_MODULE_2__ = __webpack_require__(/*! ../../services/location.service */ "./src/app/services/location.service.ts");
/* harmony import */ var _store_actions_UserActions__WEBPACK_IMPORTED_MODULE_3__ = __webpack_require__(/*! ../../store/actions/UserActions */ "./src/app/store/actions/UserActions.ts");
/* harmony import */ var _store_actions_LocationActions__WEBPACK_IMPORTED_MODULE_4__ = __webpack_require__(/*! ../../store/actions/LocationActions */ "./src/app/store/actions/LocationActions.ts");
/* harmony import */ var _services_native_native_communication_service__WEBPACK_IMPORTED_MODULE_5__ = __webpack_require__(/*! ../../services/native/native-communication.service */ "./src/app/services/native/native-communication.service.ts");
/* harmony import */ var _angular_material__WEBPACK_IMPORTED_MODULE_6__ = __webpack_require__(/*! @angular/material */ "./node_modules/@angular/material/esm5/material.es5.js");
/* harmony import */ var _services_alert_service__WEBPACK_IMPORTED_MODULE_7__ = __webpack_require__(/*! ../../services/alert.service */ "./src/app/services/alert.service.ts");
/* harmony import */ var _angular_router__WEBPACK_IMPORTED_MODULE_8__ = __webpack_require__(/*! @angular/router */ "./node_modules/@angular/router/fesm5/router.js");
/* harmony import */ var _services_transmission_service__WEBPACK_IMPORTED_MODULE_9__ = __webpack_require__(/*! ../../services/transmission.service */ "./src/app/services/transmission.service.ts");
/* harmony import */ var d3__WEBPACK_IMPORTED_MODULE_10__ = __webpack_require__(/*! d3 */ "./node_modules/d3/index.js");
var __decorate = (undefined && undefined.__decorate) || function (decorators, target, key, desc) {
    var c = arguments.length, r = c < 3 ? target : desc === null ? desc = Object.getOwnPropertyDescriptor(target, key) : desc, d;
    if (typeof Reflect === "object" && typeof Reflect.decorate === "function") r = Reflect.decorate(decorators, target, key, desc);
    else for (var i = decorators.length - 1; i >= 0; i--) if (d = decorators[i]) r = (c < 3 ? d(r) : c > 3 ? d(target, key, r) : d(target, key)) || r;
    return c > 3 && r && Object.defineProperty(target, key, r), r;
};
var __metadata = (undefined && undefined.__metadata) || function (k, v) {
    if (typeof Reflect === "object" && typeof Reflect.metadata === "function") return Reflect.metadata(k, v);
};
var __param = (undefined && undefined.__param) || function (paramIndex, decorator) {
    return function (target, key) { decorator(target, key, paramIndex); }
};











var MainViewComponent = /** @class */ (function () {
    function MainViewComponent(transmissionService, locationService, appStore, userActions, locationActions, nativeCommunicationService, nativeResponseService, dialog, router, alertService) {
        var _this = this;
        this.transmissionService = transmissionService;
        this.locationService = locationService;
        this.appStore = appStore;
        this.userActions = userActions;
        this.locationActions = locationActions;
        this.nativeCommunicationService = nativeCommunicationService;
        this.nativeResponseService = nativeResponseService;
        this.dialog = dialog;
        this.router = router;
        this.alertService = alertService;
        /////////////////////
        this.stringDates = ['1450', '1600'];
        this.parseDate = d3__WEBPACK_IMPORTED_MODULE_10__["timeParse"]('%Y');
        this.svgHeight = 3000;
        this.svgWidth = 320;
        this.currentSection = 10;
        this.sectionList = [
            { code: 10, icon: 'Trumpet', primaryColor: '#823a3a', secondaryColor: '#a85757' },
            { code: 20, icon: 'DocumentSword', primaryColor: '#305978', secondaryColor: '#4b799c' },
            { code: 30, icon: 'Maximilian', primaryColor: '#755300', secondaryColor: '#906e1b' },
            { code: 40, icon: 'Veil', primaryColor: '#1d635d', secondaryColor: '#3c7f7a' },
            { code: 50, icon: 'Shrine', primaryColor: '#5c416a', secondaryColor: '#785d86' },
            { code: 60, icon: 'Tombstone', primaryColor: '#32633a', secondaryColor: '#4c7d54' }
        ];
        this.currentEntrance = [];
        this.sortedExhbits = [];
        this.mergedDates = [];
        this.cardPositions = [];
        this.redirected = false;
        this._unsubscribe = this.appStore.subscribe(function () {
            var state = _this.appStore.getState();
            _this.closestExhibit = state.closestExhibit;
            _this.timelineLocations = _this.locationService.getTimelineLocations();
            _this.sortLocationData();
        });
        this.subscriptionLocationid = this.alertService.getMessageLocationid().subscribe(function (message) {
            _this.registerLocationmessage = message;
        });
    }
    MainViewComponent.prototype.ngOnDestroy = function () {
        this._unsubscribe();
        if (this.subscriptionBack) {
            this.subscriptionBack.unsubscribe();
        }
        if (this.subscriptionLocationid) {
            this.subscriptionLocationid.unsubscribe();
        }
    };
    MainViewComponent.prototype.requestRegisterLocation = function (id, parentId, locked) {
        if (!locked && id && parentId) {
            this.transmissionService.transmitLocationRegister({ minor: id, major: parentId });
        }
    };
    MainViewComponent.prototype.ngOnInit = function () {
        var state = this.appStore.getState();
        this.user = state.user;
        this.locationService.lookuptable = state.lookupTable;
        this.timelineLocations = this.locationService.getTimelineLocations();
        this.closestExhibit = state.closestExhibit;
        this.startSection(this.closestExhibit);
        this.isWeb = this.nativeCommunicationService.isWeb;
        this.sortLocationData();
    };
    MainViewComponent.prototype.ngAfterViewChecked = function () {
        // If boxes lose position after content update, call reDraw()
        if (d3__WEBPACK_IMPORTED_MODULE_10__["select"]('#exh_101').style('position') !== 'absolute') {
            this.reDraw();
            this.goToClosestExhibit();
        }
        if (this.redirected) {
            this.redirected = false;
            this.goToClosestExhibit();
        }
    };
    MainViewComponent.prototype.startSection = function (closestExhibit) {
        closestExhibit ? this.currentSection = +((closestExhibit).toString().substring(0, 2)) : this.currentSection = 10;
    };
    MainViewComponent.prototype.ngAfterViewInit = function () {
        var _this = this;
        // Draw Timeline
        this.y = d3__WEBPACK_IMPORTED_MODULE_10__["scaleTime"]()
            .domain(d3__WEBPACK_IMPORTED_MODULE_10__["extent"](this.stringDates, function (d) { return _this.parseDate(d); }))
            .range([0, this.svgHeight]);
        var svg = d3__WEBPACK_IMPORTED_MODULE_10__["select"]('#timeline').append('svg')
            .attr('height', this.svgHeight).attr('width', this.svgWidth);
        var axis = svg.append('g')
            .attr('class', 'y axis').attr('transform', 'translate(0,0)').style('margin-top', '200px')
            .call(d3__WEBPACK_IMPORTED_MODULE_10__["axisLeft"](this.y).ticks(15).tickFormat(d3__WEBPACK_IMPORTED_MODULE_10__["timeFormat"]('%Y')))
            .selectAll('text').attr('y', 6).attr('x', 6).style('text-anchor', 'start').style('color', '#ffffff');
        svg.select('.domain').attr('stroke-width', '0');
        this.whichY = d3__WEBPACK_IMPORTED_MODULE_10__["scaleLinear"]()
            .domain([1450, 1600]).range([0, this.svgHeight]);
        /* Draw and place exhibitions */
        this.sortedExhbits[0].forEach(function (currentExhibits) {
            var lineX = 50;
            var prevStart = 0;
            var prevEnd = 0;
            _this.mergedDates.length = 0;
            currentExhibits.forEach(function (exh, index) {
                var boxY = exh.startDate;
                var timespan = exh.endDate - exh.startDate;
                // Look at previous: If not the first, check time overlap with previous event
                // If same timespan -> merge them. If not -> increase x of new line
                if (exh.id !== currentExhibits[0].id && !(exh.startDate >= prevEnd || exh.endDate <= prevStart)) {
                    if (exh.startDate === prevStart && exh.endDate === prevEnd) {
                        var qtDates = _this.mergeDate(exh.startDate);
                        boxY = boxY + (4.6 * qtDates);
                    }
                    else {
                        lineX = lineX + 20;
                    }
                }
                prevStart = exh.startDate;
                prevEnd = exh.endDate;
                // Look at next: If there is an event to be displayed next but the timespan is to short: move card
                if (currentExhibits[index + 1] && currentExhibits[index + 1].endDate !== exh.endDate) {
                    if (timespan < 5 && Math.abs(currentExhibits[index + 1].startDate - exh.startDate) < 5) {
                        boxY = boxY - (4.6 - timespan);
                    }
                    else if (currentExhibits[index + 1].startDate === exh.startDate) {
                        boxY = boxY + 6;
                    }
                }
                // Draw event line and save card position
                var line = svg.append('line').attr('x1', lineX).attr('x2', lineX)
                    .attr('class', 'timespanline line_' + exh.parentId)
                    .attr('y1', _this.whichY(exh.startDate)).attr('y2', _this.whichY(exh.endDate))
                    .attr('stroke-width', '8').attr('stroke', _this.getSectionPrimaryColor(exh.parentId));
                _this.cardPositions.push({ id: exh.id, boxY: boxY, lineX: lineX });
            });
        });
    };
    MainViewComponent.prototype.mergeDate = function (mDate) {
        this.mergedDates.push(mDate);
        var count = 0;
        this.mergedDates.forEach(function (date) {
            if (date === mDate) {
                count++;
            }
        });
        return count;
    };
    MainViewComponent.prototype.reDraw = function () {
        var _this = this;
        // Get calculated positions and place cards
        this.cardPositions.forEach(function (pos) {
            var card = d3__WEBPACK_IMPORTED_MODULE_10__["select"]('#exh_' + pos.id).style('position', 'absolute')
                .style('top', (_this.whichY(pos.boxY) + 200) + 'px').style('left', (pos.lineX + 1) + 'px');
        });
        // Hide everything then show only selected section
        d3__WEBPACK_IMPORTED_MODULE_10__["selectAll"]('.card.exhibit').transition().style('display', 'none');
        d3__WEBPACK_IMPORTED_MODULE_10__["selectAll"]('.timespanline').transition().style('opacity', '0');
        d3__WEBPACK_IMPORTED_MODULE_10__["selectAll"]('.card.Sec' + this.currentSection).transition().style('display', 'inline');
        d3__WEBPACK_IMPORTED_MODULE_10__["selectAll"]('.line_' + this.currentSection).transition().style('opacity', '1');
    };
    MainViewComponent.prototype.setCurrentExhibits = function () {
        var _this = this;
        this.currentEntrance.length = 0;
        this.sortedExhbits.length = 0;
        var sec1Exhibits = [];
        var sec2Exhibits = [];
        var sec3Exhibits = [];
        var sec4Exhibits = [];
        var sec5Exhibits = [];
        var sec6Exhibits = [];
        this.timelineLocations.forEach(function (loc) {
            if (loc.locationTypeId === 5) {
                _this.currentEntrance.push(loc);
            }
            else {
                switch (loc.parentId) {
                    case 10:
                        sec1Exhibits.push(loc);
                        break;
                    case 20:
                        sec2Exhibits.push(loc);
                        break;
                    case 30:
                        sec3Exhibits.push(loc);
                        break;
                    case 40:
                        sec4Exhibits.push(loc);
                        break;
                    case 50:
                        sec5Exhibits.push(loc);
                        break;
                    case 60:
                        sec6Exhibits.push(loc);
                        break;
                }
            }
        });
        this.sortedExhbits.push([sec1Exhibits, sec2Exhibits, sec3Exhibits, sec4Exhibits, sec5Exhibits, sec6Exhibits,]);
    };
    MainViewComponent.prototype.sortLocationData = function () {
        var _this = this;
        var mtimelineLocations = this.timelineLocations;
        // console.log(this.timelineLocations);
        this.timelineLocations.forEach(function (exh, index) {
            if (_this.timelineLocations[index + 1] && exh.locationTypeId !== 5 && exh.parentId === _this.timelineLocations[index + 1].parentId) {
                if (!(exh.startDate >= _this.timelineLocations[index + 1].endDate || exh.endDate <= _this.timelineLocations[index + 1].startDate)) {
                    if (_this.timelineLocations[index + 1].startDate - exh.startDate < 5 && _this.timelineLocations[index + 1].endDate !== exh.endDate) {
                        mtimelineLocations[index] = _this.timelineLocations[index + 1];
                        mtimelineLocations[index + 1] = exh;
                    }
                }
            }
        });
        this.timelineLocations = mtimelineLocations;
        this.setCurrentExhibits();
    };
    MainViewComponent.prototype.getSectionIcon = function (sectionId) {
        var icon = '';
        this.sectionList.forEach(function (section) {
            if (section.code === sectionId) {
                icon = section.icon;
            }
        });
        return icon;
    };
    MainViewComponent.prototype.getSectionPrimaryColor = function (sectionId) {
        var color = '';
        this.sectionList.forEach(function (section) {
            if (section.code === sectionId) {
                color = section.primaryColor;
            }
        });
        return color;
    };
    MainViewComponent.prototype.getSectionSecondaryColor = function (sectionId) {
        var color = '';
        this.sectionList.forEach(function (section) {
            if (section.code === sectionId) {
                color = section.secondaryColor;
            }
        });
        return color;
    };
    MainViewComponent.prototype.displaySection = function (sectionId, auto) {
        this.currentSection = sectionId;
        this.reDraw();
        this.redirected = auto;
    };
    MainViewComponent.prototype.userCoA = function () {
        var _this = this;
        this.router.navigate(['wappen']).then(function () {
            _this.nativeCommunicationService.sendToNative('Coat of Arms', 'print');
        });
    };
    MainViewComponent.prototype.isClose = function (exhibit) {
        var state = false;
        (this.closestExhibit === exhibit) ? state = true : state = false;
        return state;
    };
    MainViewComponent.prototype.goToClosestExhibit = function () {
        if (this.closestExhibit) {
            var secCode = (this.closestExhibit).toString().substring(0, 2);
            if (secCode !== this.currentSection.toString()) {
                this.displaySection(+secCode, true);
            }
            else {
                this.scrollTo(this.closestExhibit);
            }
        }
    };
    MainViewComponent.prototype.scrollTo = function (id) {
        // console.log('scr to' + id);
        var el = document.getElementById('exh_' + id);
        el.scrollIntoView({ behavior: 'smooth' });
    };
    MainViewComponent.prototype.scroll = function () {
        var id = this.registerLocationmessage.location;
        var secCode = id.toString().substring(0, 2);
        if (secCode !== this.currentSection.toString()) {
            this.displaySection(+secCode, true);
        }
        var el = document.getElementById('exh_' + id);
        el.scrollIntoView({ behavior: 'smooth' });
        // el.scrollIntoView({behavior:'smooth'});*/
    };
    /*scrollBack() {
      const locationId = this.locationBackId;
      console.log(locationId + ` scrolling to ${locationId}`);
      const el = document.getElementById(locationId);
      el.scrollIntoView({behavior:'smooth'});
    }*/
    /*
    ------------------------------------------------------------
                        Helper functions
    ------------------------------------------------------------
    */
    MainViewComponent.prototype.requestRegisterLocationTableAt = function () {
        this.nativeResponseService.timelineUpdate({ minor: 1000, major: 10 });
    };
    MainViewComponent.prototype.requestRegisterLocationTableOn = function () {
        this.nativeResponseService.timelineUpdate({ minor: 2002, major: 20 });
    };
    MainViewComponent.prototype.requestRegisterLocationTableAtBehavior = function () {
        this.nativeResponseService.timelineUpdate({ minor: 301, major: 30 });
    };
    MainViewComponent.prototype.requestRegisterLocationPassive = function () {
        this.nativeResponseService.timelineUpdate({ minor: 102, major: 10 });
    };
    MainViewComponent.prototype.requestRegisterNotifyLocation = function () {
        this.nativeResponseService.timelineUpdate({ minor: 502, major: 50 });
    };
    MainViewComponent.prototype.checkWifiForWeb = function () {
        this.nativeResponseService.checkWifi({ ssid: 'FH_STP_WLAN' });
    };
    MainViewComponent = __decorate([
        Object(_angular_core__WEBPACK_IMPORTED_MODULE_0__["Component"])({
            selector: 'app-main-view',
            template: __webpack_require__(/*! ./main-view.component.html */ "./src/app/components/main-view/main-view.component.html"),
            styles: [__webpack_require__(/*! ./main-view.component.css */ "./src/app/components/main-view/main-view.component.css")]
        }),
        Object(_angular_core__WEBPACK_IMPORTED_MODULE_0__["Injectable"])(),
        __param(2, Object(_angular_core__WEBPACK_IMPORTED_MODULE_0__["Inject"])('AppStore')),
        __metadata("design:paramtypes", [_services_transmission_service__WEBPACK_IMPORTED_MODULE_9__["TransmissionService"],
            _services_location_service__WEBPACK_IMPORTED_MODULE_2__["LocationService"], Object, _store_actions_UserActions__WEBPACK_IMPORTED_MODULE_3__["UserActions"],
            _store_actions_LocationActions__WEBPACK_IMPORTED_MODULE_4__["LocationActions"],
            _services_native_native_communication_service__WEBPACK_IMPORTED_MODULE_5__["NativeCommunicationService"],
            _services_native_native_response_service__WEBPACK_IMPORTED_MODULE_1__["NativeResponseService"],
            _angular_material__WEBPACK_IMPORTED_MODULE_6__["MatDialog"],
            _angular_router__WEBPACK_IMPORTED_MODULE_8__["Router"],
            _services_alert_service__WEBPACK_IMPORTED_MODULE_7__["AlertService"]])
    ], MainViewComponent);
    return MainViewComponent;
}());



/***/ }),

/***/ "./src/app/components/native-setting-dialog/native-setting-dialog.component.html":
/*!***************************************************************************************!*\
  !*** ./src/app/components/native-setting-dialog/native-setting-dialog.component.html ***!
  \***************************************************************************************/
/*! no static exports found */
/***/ (function(module, exports) {

module.exports = "<h2 matDialogTitle>{{data.settingtype}} deactivated</h2>\n<div mat-dialog-content>\n  <p>To use the app, please turn on {{data.settingtype}}!</p>\n</div>\n<mat-dialog-actions align=\"end\">\n  <button mat-raised-button color=\"primary\" (tap)=\"cancelDialog()\">No</button>\n  <button mat-raised-button color=\"primary\" (tap)=\"confirmDialog()\">{{data.confirmDialogText}}</button>\n</mat-dialog-actions>\n\n"

/***/ }),

/***/ "./src/app/components/native-setting-dialog/native-setting-dialog.component.scss":
/*!***************************************************************************************!*\
  !*** ./src/app/components/native-setting-dialog/native-setting-dialog.component.scss ***!
  \***************************************************************************************/
/*! no static exports found */
/***/ (function(module, exports) {

module.exports = ".mat-badge-content{font-weight:600;font-size:12px;font-family:Roboto,\"Helvetica Neue\",sans-serif}.mat-badge-small .mat-badge-content{font-size:6px}.mat-badge-large .mat-badge-content{font-size:24px}.mat-h1,.mat-headline,.mat-typography h1{font:400 24px/32px Roboto,\"Helvetica Neue\",sans-serif;margin:0 0 16px}.mat-h2,.mat-title,.mat-typography h2{font:500 20px/32px Roboto,\"Helvetica Neue\",sans-serif;margin:0 0 16px}.mat-h3,.mat-subheading-2,.mat-typography h3{font:400 16px/28px Roboto,\"Helvetica Neue\",sans-serif;margin:0 0 16px}.mat-h4,.mat-subheading-1,.mat-typography h4{font:400 15px/24px Roboto,\"Helvetica Neue\",sans-serif;margin:0 0 16px}.mat-h5,.mat-typography h5{font:400 11.62px/20px Roboto,\"Helvetica Neue\",sans-serif;margin:0 0 12px}.mat-h6,.mat-typography h6{font:400 9.38px/20px Roboto,\"Helvetica Neue\",sans-serif;margin:0 0 12px}.mat-body-2,.mat-body-strong{font:500 14px/24px Roboto,\"Helvetica Neue\",sans-serif}.mat-body,.mat-body-1,.mat-typography{font:400 14px/20px Roboto,\"Helvetica Neue\",sans-serif}.mat-body p,.mat-body-1 p,.mat-typography p{margin:0 0 12px}.mat-caption,.mat-small{font:400 12px/20px Roboto,\"Helvetica Neue\",sans-serif}.mat-display-4,.mat-typography .mat-display-4{font:300 112px/112px Roboto,\"Helvetica Neue\",sans-serif;margin:0 0 56px;letter-spacing:-.05em}.mat-display-3,.mat-typography .mat-display-3{font:400 56px/56px Roboto,\"Helvetica Neue\",sans-serif;margin:0 0 64px;letter-spacing:-.02em}.mat-display-2,.mat-typography .mat-display-2{font:400 45px/48px Roboto,\"Helvetica Neue\",sans-serif;margin:0 0 64px;letter-spacing:-.005em}.mat-display-1,.mat-typography .mat-display-1{font:400 34px/40px Roboto,\"Helvetica Neue\",sans-serif;margin:0 0 64px}.mat-bottom-sheet-container{font:400 14px/20px Roboto,\"Helvetica Neue\",sans-serif}.mat-button,.mat-fab,.mat-flat-button,.mat-icon-button,.mat-mini-fab,.mat-raised-button,.mat-stroked-button{font-family:Roboto,\"Helvetica Neue\",sans-serif;font-size:14px;font-weight:500}.mat-button-toggle{font-family:Roboto,\"Helvetica Neue\",sans-serif}.mat-card{font-family:Roboto,\"Helvetica Neue\",sans-serif}.mat-card-title{font-size:24px;font-weight:500}.mat-card-header .mat-card-title{font-size:20px}.mat-card-content,.mat-card-subtitle{font-size:14px}.mat-checkbox{font-family:Roboto,\"Helvetica Neue\",sans-serif}.mat-checkbox-layout .mat-checkbox-label{line-height:24px}.mat-chip{font-size:14px;font-weight:500}.mat-chip .mat-chip-remove.mat-icon,.mat-chip .mat-chip-trailing-icon.mat-icon{font-size:18px}.mat-table{font-family:Roboto,\"Helvetica Neue\",sans-serif}.mat-header-cell{font-size:12px;font-weight:500}.mat-cell,.mat-footer-cell{font-size:14px}.mat-calendar{font-family:Roboto,\"Helvetica Neue\",sans-serif}.mat-calendar-body{font-size:13px}.mat-calendar-body-label,.mat-calendar-period-button{font-size:14px;font-weight:500}.mat-calendar-table-header th{font-size:11px;font-weight:400}.mat-dialog-title{font:500 20px/32px Roboto,\"Helvetica Neue\",sans-serif}.mat-expansion-panel-header{font-family:Roboto,\"Helvetica Neue\",sans-serif;font-size:15px;font-weight:400}.mat-expansion-panel-content{font:400 14px/20px Roboto,\"Helvetica Neue\",sans-serif}.mat-form-field{font-size:inherit;font-weight:400;line-height:1.125;font-family:Roboto,\"Helvetica Neue\",sans-serif}.mat-form-field-wrapper{padding-bottom:1.34375em}.mat-form-field-prefix .mat-icon,.mat-form-field-suffix .mat-icon{font-size:150%;line-height:1.125}.mat-form-field-prefix .mat-icon-button,.mat-form-field-suffix .mat-icon-button{height:1.5em;width:1.5em}.mat-form-field-prefix .mat-icon-button .mat-icon,.mat-form-field-suffix .mat-icon-button .mat-icon{height:1.125em;line-height:1.125}.mat-form-field-infix{padding:.5em 0;border-top:.84375em solid transparent}.mat-form-field-can-float .mat-input-server:focus+.mat-form-field-label-wrapper .mat-form-field-label,.mat-form-field-can-float.mat-form-field-should-float .mat-form-field-label{-webkit-transform:translateY(-1.34375em) scale(.75);transform:translateY(-1.34375em) scale(.75);width:133.33333%}.mat-form-field-can-float .mat-input-server[label]:not(:label-shown)+.mat-form-field-label-wrapper .mat-form-field-label{-webkit-transform:translateY(-1.34374em) scale(.75);transform:translateY(-1.34374em) scale(.75);width:133.33334%}.mat-form-field-label-wrapper{top:-.84375em;padding-top:.84375em}.mat-form-field-label{top:1.34375em}.mat-form-field-underline{bottom:1.34375em}.mat-form-field-subscript-wrapper{font-size:75%;margin-top:.66667em;top:calc(100% - 1.79167em)}.mat-form-field-appearance-legacy .mat-form-field-wrapper{padding-bottom:1.25em}.mat-form-field-appearance-legacy .mat-form-field-infix{padding:.4375em 0}.mat-form-field-appearance-legacy.mat-form-field-can-float .mat-input-server:focus+.mat-form-field-label-wrapper .mat-form-field-label,.mat-form-field-appearance-legacy.mat-form-field-can-float.mat-form-field-should-float .mat-form-field-label{-webkit-transform:translateY(-1.28125em) scale(.75) perspective(100px) translateZ(.001px);transform:translateY(-1.28125em) scale(.75) perspective(100px) translateZ(.001px);-ms-transform:translateY(-1.28125em) scale(.75);width:133.33333%}.mat-form-field-appearance-legacy.mat-form-field-can-float .mat-form-field-autofill-control:-webkit-autofill+.mat-form-field-label-wrapper .mat-form-field-label{-webkit-transform:translateY(-1.28125em) scale(.75) perspective(100px) translateZ(.00101px);transform:translateY(-1.28125em) scale(.75) perspective(100px) translateZ(.00101px);-ms-transform:translateY(-1.28124em) scale(.75);width:133.33334%}.mat-form-field-appearance-legacy.mat-form-field-can-float .mat-input-server[label]:not(:label-shown)+.mat-form-field-label-wrapper .mat-form-field-label{-webkit-transform:translateY(-1.28125em) scale(.75) perspective(100px) translateZ(.00102px);transform:translateY(-1.28125em) scale(.75) perspective(100px) translateZ(.00102px);-ms-transform:translateY(-1.28123em) scale(.75);width:133.33335%}.mat-form-field-appearance-legacy .mat-form-field-label{top:1.28125em}.mat-form-field-appearance-legacy .mat-form-field-underline{bottom:1.25em}.mat-form-field-appearance-legacy .mat-form-field-subscript-wrapper{margin-top:.54167em;top:calc(100% - 1.66667em)}@media print{.mat-form-field-appearance-legacy.mat-form-field-can-float .mat-input-server:focus+.mat-form-field-label-wrapper .mat-form-field-label,.mat-form-field-appearance-legacy.mat-form-field-can-float.mat-form-field-should-float .mat-form-field-label{-webkit-transform:translateY(-1.28122em) scale(.75);transform:translateY(-1.28122em) scale(.75)}.mat-form-field-appearance-legacy.mat-form-field-can-float .mat-form-field-autofill-control:-webkit-autofill+.mat-form-field-label-wrapper .mat-form-field-label{-webkit-transform:translateY(-1.28121em) scale(.75);transform:translateY(-1.28121em) scale(.75)}.mat-form-field-appearance-legacy.mat-form-field-can-float .mat-input-server[label]:not(:label-shown)+.mat-form-field-label-wrapper .mat-form-field-label{-webkit-transform:translateY(-1.2812em) scale(.75);transform:translateY(-1.2812em) scale(.75)}}.mat-form-field-appearance-fill .mat-form-field-infix{padding:.25em 0 .75em 0}.mat-form-field-appearance-fill .mat-form-field-label{top:1.09375em;margin-top:-.5em}.mat-form-field-appearance-fill.mat-form-field-can-float .mat-input-server:focus+.mat-form-field-label-wrapper .mat-form-field-label,.mat-form-field-appearance-fill.mat-form-field-can-float.mat-form-field-should-float .mat-form-field-label{-webkit-transform:translateY(-.59375em) scale(.75);transform:translateY(-.59375em) scale(.75);width:133.33333%}.mat-form-field-appearance-fill.mat-form-field-can-float .mat-input-server[label]:not(:label-shown)+.mat-form-field-label-wrapper .mat-form-field-label{-webkit-transform:translateY(-.59374em) scale(.75);transform:translateY(-.59374em) scale(.75);width:133.33334%}.mat-form-field-appearance-outline .mat-form-field-infix{padding:1em 0 1em 0}.mat-form-field-appearance-outline .mat-form-field-label{top:1.84375em;margin-top:-.25em}.mat-form-field-appearance-outline.mat-form-field-can-float .mat-input-server:focus+.mat-form-field-label-wrapper .mat-form-field-label,.mat-form-field-appearance-outline.mat-form-field-can-float.mat-form-field-should-float .mat-form-field-label{-webkit-transform:translateY(-1.59375em) scale(.75);transform:translateY(-1.59375em) scale(.75);width:133.33333%}.mat-form-field-appearance-outline.mat-form-field-can-float .mat-input-server[label]:not(:label-shown)+.mat-form-field-label-wrapper .mat-form-field-label{-webkit-transform:translateY(-1.59374em) scale(.75);transform:translateY(-1.59374em) scale(.75);width:133.33334%}.mat-grid-tile-footer,.mat-grid-tile-header{font-size:14px}.mat-grid-tile-footer .mat-line,.mat-grid-tile-header .mat-line{white-space:nowrap;overflow:hidden;text-overflow:ellipsis;display:block;box-sizing:border-box}.mat-grid-tile-footer .mat-line:nth-child(n+2),.mat-grid-tile-header .mat-line:nth-child(n+2){font-size:12px}input.mat-input-element{margin-top:-.0625em}.mat-menu-item{font-family:Roboto,\"Helvetica Neue\",sans-serif;font-size:14px;font-weight:400}.mat-paginator,.mat-paginator-page-size .mat-select-trigger{font-family:Roboto,\"Helvetica Neue\",sans-serif;font-size:12px}.mat-radio-button{font-family:Roboto,\"Helvetica Neue\",sans-serif}.mat-select{font-family:Roboto,\"Helvetica Neue\",sans-serif}.mat-select-trigger{height:1.125em}.mat-slide-toggle-content{font-family:Roboto,\"Helvetica Neue\",sans-serif}.mat-slider-thumb-label-text{font-family:Roboto,\"Helvetica Neue\",sans-serif;font-size:12px;font-weight:500}.mat-stepper-horizontal,.mat-stepper-vertical{font-family:Roboto,\"Helvetica Neue\",sans-serif}.mat-step-label{font-size:14px;font-weight:400}.mat-step-sub-label-error{font-weight:400}.mat-step-label-error{font-size:14px}.mat-step-label-selected{font-size:14px;font-weight:500}.mat-tab-group{font-family:Roboto,\"Helvetica Neue\",sans-serif}.mat-tab-label,.mat-tab-link{font-family:Roboto,\"Helvetica Neue\",sans-serif;font-size:14px;font-weight:500}.mat-toolbar,.mat-toolbar h1,.mat-toolbar h2,.mat-toolbar h3,.mat-toolbar h4,.mat-toolbar h5,.mat-toolbar h6{font:500 20px/32px Roboto,\"Helvetica Neue\",sans-serif;margin:0}.mat-tooltip{font-family:Roboto,\"Helvetica Neue\",sans-serif;font-size:10px;padding-top:6px;padding-bottom:6px}.mat-tooltip-handset{font-size:14px;padding-top:8px;padding-bottom:8px}.mat-list-item{font-family:Roboto,\"Helvetica Neue\",sans-serif}.mat-list-option{font-family:Roboto,\"Helvetica Neue\",sans-serif}.mat-list-base .mat-list-item{font-size:16px}.mat-list-base .mat-list-item .mat-line{white-space:nowrap;overflow:hidden;text-overflow:ellipsis;display:block;box-sizing:border-box}.mat-list-base .mat-list-item .mat-line:nth-child(n+2){font-size:14px}.mat-list-base .mat-list-option{font-size:16px}.mat-list-base .mat-list-option .mat-line{white-space:nowrap;overflow:hidden;text-overflow:ellipsis;display:block;box-sizing:border-box}.mat-list-base .mat-list-option .mat-line:nth-child(n+2){font-size:14px}.mat-list-base .mat-subheader{font-family:Roboto,\"Helvetica Neue\",sans-serif;font-size:14px;font-weight:500}.mat-list-base[dense] .mat-list-item{font-size:12px}.mat-list-base[dense] .mat-list-item .mat-line{white-space:nowrap;overflow:hidden;text-overflow:ellipsis;display:block;box-sizing:border-box}.mat-list-base[dense] .mat-list-item .mat-line:nth-child(n+2){font-size:12px}.mat-list-base[dense] .mat-list-option{font-size:12px}.mat-list-base[dense] .mat-list-option .mat-line{white-space:nowrap;overflow:hidden;text-overflow:ellipsis;display:block;box-sizing:border-box}.mat-list-base[dense] .mat-list-option .mat-line:nth-child(n+2){font-size:12px}.mat-list-base[dense] .mat-subheader{font-family:Roboto,\"Helvetica Neue\",sans-serif;font-size:12px;font-weight:500}.mat-option{font-family:Roboto,\"Helvetica Neue\",sans-serif;font-size:16px}.mat-optgroup-label{font:500 14px/24px Roboto,\"Helvetica Neue\",sans-serif}.mat-simple-snackbar{font-family:Roboto,\"Helvetica Neue\",sans-serif;font-size:14px}.mat-simple-snackbar-action{line-height:1;font-family:inherit;font-size:inherit;font-weight:500}.mat-tree{font-family:Roboto,\"Helvetica Neue\",sans-serif}.mat-nested-tree-node,.mat-tree-node{font-weight:400;font-size:14px}.mat-ripple{overflow:hidden;position:relative}.mat-ripple.mat-ripple-unbounded{overflow:visible}.mat-ripple-element{position:absolute;border-radius:50%;pointer-events:none;transition:opacity,-webkit-transform 0s cubic-bezier(0,0,.2,1);transition:opacity,transform 0s cubic-bezier(0,0,.2,1);transition:opacity,transform 0s cubic-bezier(0,0,.2,1),-webkit-transform 0s cubic-bezier(0,0,.2,1);-webkit-transform:scale(0);transform:scale(0)}@media (-ms-high-contrast:active){.mat-ripple-element{display:none}}.cdk-visually-hidden{border:0;clip:rect(0 0 0 0);height:1px;margin:-1px;overflow:hidden;padding:0;position:absolute;width:1px;outline:0;-webkit-appearance:none;-moz-appearance:none}.cdk-global-overlay-wrapper,.cdk-overlay-container{pointer-events:none;top:0;left:0;height:100%;width:100%}.cdk-overlay-container{position:fixed;z-index:1000}.cdk-overlay-container:empty{display:none}.cdk-global-overlay-wrapper{display:flex;position:absolute;z-index:1000}.cdk-overlay-pane{position:absolute;pointer-events:auto;box-sizing:border-box;z-index:1000;display:flex;max-width:100%;max-height:100%}.cdk-overlay-backdrop{position:absolute;top:0;bottom:0;left:0;right:0;z-index:1000;pointer-events:auto;-webkit-tap-highlight-color:transparent;transition:opacity .4s cubic-bezier(.25,.8,.25,1);opacity:0}.cdk-overlay-backdrop.cdk-overlay-backdrop-showing{opacity:1}@media screen and (-ms-high-contrast:active){.cdk-overlay-backdrop.cdk-overlay-backdrop-showing{opacity:.6}}.cdk-overlay-dark-backdrop{background:rgba(0,0,0,.32)}.cdk-overlay-transparent-backdrop,.cdk-overlay-transparent-backdrop.cdk-overlay-backdrop-showing{opacity:0}.cdk-overlay-connected-position-bounding-box{position:absolute;z-index:1000;display:flex;flex-direction:column;min-width:1px;min-height:1px}.cdk-global-scrollblock{position:fixed;width:100%;overflow-y:scroll}@-webkit-keyframes cdk-text-field-autofill-start{/*!*/}@keyframes cdk-text-field-autofill-start{/*!*/}@-webkit-keyframes cdk-text-field-autofill-end{/*!*/}@keyframes cdk-text-field-autofill-end{/*!*/}.cdk-text-field-autofill-monitored:-webkit-autofill{-webkit-animation-name:cdk-text-field-autofill-start;animation-name:cdk-text-field-autofill-start}.cdk-text-field-autofill-monitored:not(:-webkit-autofill){-webkit-animation-name:cdk-text-field-autofill-end;animation-name:cdk-text-field-autofill-end}textarea.cdk-textarea-autosize{resize:none}textarea.cdk-textarea-autosize-measuring{height:auto!important;overflow:hidden!important;padding:2px 0!important;box-sizing:content-box!important}.mat-ripple-element{background-color:rgba(0,0,0,.1)}.mat-option{color:rgba(0,0,0,.87)}.mat-option:focus:not(.mat-option-disabled),.mat-option:hover:not(.mat-option-disabled){background:rgba(0,0,0,.04)}.mat-option.mat-selected:not(.mat-option-multiple):not(.mat-option-disabled){background:rgba(0,0,0,.04)}.mat-option.mat-active{background:rgba(0,0,0,.04);color:rgba(0,0,0,.87)}.mat-option.mat-option-disabled{color:rgba(0,0,0,.38)}.mat-primary .mat-option.mat-selected:not(.mat-option-disabled){color:#673ab7}.mat-accent .mat-option.mat-selected:not(.mat-option-disabled){color:#ffd740}.mat-warn .mat-option.mat-selected:not(.mat-option-disabled){color:#f44336}.mat-optgroup-label{color:rgba(0,0,0,.54)}.mat-optgroup-disabled .mat-optgroup-label{color:rgba(0,0,0,.38)}.mat-pseudo-checkbox{color:rgba(0,0,0,.54)}.mat-pseudo-checkbox::after{color:#fafafa}.mat-accent .mat-pseudo-checkbox-checked,.mat-accent .mat-pseudo-checkbox-indeterminate,.mat-pseudo-checkbox-checked,.mat-pseudo-checkbox-indeterminate{background:#ffd740}.mat-primary .mat-pseudo-checkbox-checked,.mat-primary .mat-pseudo-checkbox-indeterminate{background:#673ab7}.mat-warn .mat-pseudo-checkbox-checked,.mat-warn .mat-pseudo-checkbox-indeterminate{background:#f44336}.mat-pseudo-checkbox-checked.mat-pseudo-checkbox-disabled,.mat-pseudo-checkbox-indeterminate.mat-pseudo-checkbox-disabled{background:#b0b0b0}.mat-elevation-z0{box-shadow:0 0 0 0 rgba(0,0,0,.2),0 0 0 0 rgba(0,0,0,.14),0 0 0 0 rgba(0,0,0,.12)}.mat-elevation-z1{box-shadow:0 2px 1px -1px rgba(0,0,0,.2),0 1px 1px 0 rgba(0,0,0,.14),0 1px 3px 0 rgba(0,0,0,.12)}.mat-elevation-z2{box-shadow:0 3px 1px -2px rgba(0,0,0,.2),0 2px 2px 0 rgba(0,0,0,.14),0 1px 5px 0 rgba(0,0,0,.12)}.mat-elevation-z3{box-shadow:0 3px 3px -2px rgba(0,0,0,.2),0 3px 4px 0 rgba(0,0,0,.14),0 1px 8px 0 rgba(0,0,0,.12)}.mat-elevation-z4{box-shadow:0 2px 4px -1px rgba(0,0,0,.2),0 4px 5px 0 rgba(0,0,0,.14),0 1px 10px 0 rgba(0,0,0,.12)}.mat-elevation-z5{box-shadow:0 3px 5px -1px rgba(0,0,0,.2),0 5px 8px 0 rgba(0,0,0,.14),0 1px 14px 0 rgba(0,0,0,.12)}.mat-elevation-z6{box-shadow:0 3px 5px -1px rgba(0,0,0,.2),0 6px 10px 0 rgba(0,0,0,.14),0 1px 18px 0 rgba(0,0,0,.12)}.mat-elevation-z7{box-shadow:0 4px 5px -2px rgba(0,0,0,.2),0 7px 10px 1px rgba(0,0,0,.14),0 2px 16px 1px rgba(0,0,0,.12)}.mat-elevation-z8{box-shadow:0 5px 5px -3px rgba(0,0,0,.2),0 8px 10px 1px rgba(0,0,0,.14),0 3px 14px 2px rgba(0,0,0,.12)}.mat-elevation-z9{box-shadow:0 5px 6px -3px rgba(0,0,0,.2),0 9px 12px 1px rgba(0,0,0,.14),0 3px 16px 2px rgba(0,0,0,.12)}.mat-elevation-z10{box-shadow:0 6px 6px -3px rgba(0,0,0,.2),0 10px 14px 1px rgba(0,0,0,.14),0 4px 18px 3px rgba(0,0,0,.12)}.mat-elevation-z11{box-shadow:0 6px 7px -4px rgba(0,0,0,.2),0 11px 15px 1px rgba(0,0,0,.14),0 4px 20px 3px rgba(0,0,0,.12)}.mat-elevation-z12{box-shadow:0 7px 8px -4px rgba(0,0,0,.2),0 12px 17px 2px rgba(0,0,0,.14),0 5px 22px 4px rgba(0,0,0,.12)}.mat-elevation-z13{box-shadow:0 7px 8px -4px rgba(0,0,0,.2),0 13px 19px 2px rgba(0,0,0,.14),0 5px 24px 4px rgba(0,0,0,.12)}.mat-elevation-z14{box-shadow:0 7px 9px -4px rgba(0,0,0,.2),0 14px 21px 2px rgba(0,0,0,.14),0 5px 26px 4px rgba(0,0,0,.12)}.mat-elevation-z15{box-shadow:0 8px 9px -5px rgba(0,0,0,.2),0 15px 22px 2px rgba(0,0,0,.14),0 6px 28px 5px rgba(0,0,0,.12)}.mat-elevation-z16{box-shadow:0 8px 10px -5px rgba(0,0,0,.2),0 16px 24px 2px rgba(0,0,0,.14),0 6px 30px 5px rgba(0,0,0,.12)}.mat-elevation-z17{box-shadow:0 8px 11px -5px rgba(0,0,0,.2),0 17px 26px 2px rgba(0,0,0,.14),0 6px 32px 5px rgba(0,0,0,.12)}.mat-elevation-z18{box-shadow:0 9px 11px -5px rgba(0,0,0,.2),0 18px 28px 2px rgba(0,0,0,.14),0 7px 34px 6px rgba(0,0,0,.12)}.mat-elevation-z19{box-shadow:0 9px 12px -6px rgba(0,0,0,.2),0 19px 29px 2px rgba(0,0,0,.14),0 7px 36px 6px rgba(0,0,0,.12)}.mat-elevation-z20{box-shadow:0 10px 13px -6px rgba(0,0,0,.2),0 20px 31px 3px rgba(0,0,0,.14),0 8px 38px 7px rgba(0,0,0,.12)}.mat-elevation-z21{box-shadow:0 10px 13px -6px rgba(0,0,0,.2),0 21px 33px 3px rgba(0,0,0,.14),0 8px 40px 7px rgba(0,0,0,.12)}.mat-elevation-z22{box-shadow:0 10px 14px -6px rgba(0,0,0,.2),0 22px 35px 3px rgba(0,0,0,.14),0 8px 42px 7px rgba(0,0,0,.12)}.mat-elevation-z23{box-shadow:0 11px 14px -7px rgba(0,0,0,.2),0 23px 36px 3px rgba(0,0,0,.14),0 9px 44px 8px rgba(0,0,0,.12)}.mat-elevation-z24{box-shadow:0 11px 15px -7px rgba(0,0,0,.2),0 24px 38px 3px rgba(0,0,0,.14),0 9px 46px 8px rgba(0,0,0,.12)}.mat-app-background{background-color:#fafafa;color:rgba(0,0,0,.87)}.mat-theme-loaded-marker{display:none}.mat-autocomplete-panel{background:#fff;color:rgba(0,0,0,.87)}.mat-autocomplete-panel:not([class*=mat-elevation-z]){box-shadow:0 2px 4px -1px rgba(0,0,0,.2),0 4px 5px 0 rgba(0,0,0,.14),0 1px 10px 0 rgba(0,0,0,.12)}.mat-autocomplete-panel .mat-option.mat-selected:not(.mat-active):not(:hover){background:#fff}.mat-autocomplete-panel .mat-option.mat-selected:not(.mat-active):not(:hover):not(.mat-option-disabled){color:rgba(0,0,0,.87)}.mat-badge-content{color:#fff;background:#673ab7}@media (-ms-high-contrast:active){.mat-badge-content{outline:solid 1px;border-radius:0}}.mat-badge-accent .mat-badge-content{background:#ffd740;color:rgba(0,0,0,.87)}.mat-badge-warn .mat-badge-content{color:#fff;background:#f44336}.mat-badge{position:relative}.mat-badge-hidden .mat-badge-content{display:none}.mat-badge-disabled .mat-badge-content{background:#b9b9b9;color:rgba(0,0,0,.38)}.mat-badge-content{position:absolute;text-align:center;display:inline-block;border-radius:50%;transition:-webkit-transform .2s ease-in-out;transition:transform .2s ease-in-out;transition:transform .2s ease-in-out, -webkit-transform .2s ease-in-out;-webkit-transform:scale(.6);transform:scale(.6);overflow:hidden;white-space:nowrap;text-overflow:ellipsis;pointer-events:none}.mat-badge-content.mat-badge-active{-webkit-transform:none;transform:none}.mat-badge-small .mat-badge-content{width:16px;height:16px;line-height:16px}.mat-badge-small.mat-badge-above .mat-badge-content{top:-8px}.mat-badge-small.mat-badge-below .mat-badge-content{bottom:-8px}.mat-badge-small.mat-badge-before .mat-badge-content{left:-16px}[dir=rtl] .mat-badge-small.mat-badge-before .mat-badge-content{left:auto;right:-16px}.mat-badge-small.mat-badge-after .mat-badge-content{right:-16px}[dir=rtl] .mat-badge-small.mat-badge-after .mat-badge-content{right:auto;left:-16px}.mat-badge-small.mat-badge-overlap.mat-badge-before .mat-badge-content{left:-8px}[dir=rtl] .mat-badge-small.mat-badge-overlap.mat-badge-before .mat-badge-content{left:auto;right:-8px}.mat-badge-small.mat-badge-overlap.mat-badge-after .mat-badge-content{right:-8px}[dir=rtl] .mat-badge-small.mat-badge-overlap.mat-badge-after .mat-badge-content{right:auto;left:-8px}.mat-badge-medium .mat-badge-content{width:22px;height:22px;line-height:22px}.mat-badge-medium.mat-badge-above .mat-badge-content{top:-11px}.mat-badge-medium.mat-badge-below .mat-badge-content{bottom:-11px}.mat-badge-medium.mat-badge-before .mat-badge-content{left:-22px}[dir=rtl] .mat-badge-medium.mat-badge-before .mat-badge-content{left:auto;right:-22px}.mat-badge-medium.mat-badge-after .mat-badge-content{right:-22px}[dir=rtl] .mat-badge-medium.mat-badge-after .mat-badge-content{right:auto;left:-22px}.mat-badge-medium.mat-badge-overlap.mat-badge-before .mat-badge-content{left:-11px}[dir=rtl] .mat-badge-medium.mat-badge-overlap.mat-badge-before .mat-badge-content{left:auto;right:-11px}.mat-badge-medium.mat-badge-overlap.mat-badge-after .mat-badge-content{right:-11px}[dir=rtl] .mat-badge-medium.mat-badge-overlap.mat-badge-after .mat-badge-content{right:auto;left:-11px}.mat-badge-large .mat-badge-content{width:28px;height:28px;line-height:28px}.mat-badge-large.mat-badge-above .mat-badge-content{top:-14px}.mat-badge-large.mat-badge-below .mat-badge-content{bottom:-14px}.mat-badge-large.mat-badge-before .mat-badge-content{left:-28px}[dir=rtl] .mat-badge-large.mat-badge-before .mat-badge-content{left:auto;right:-28px}.mat-badge-large.mat-badge-after .mat-badge-content{right:-28px}[dir=rtl] .mat-badge-large.mat-badge-after .mat-badge-content{right:auto;left:-28px}.mat-badge-large.mat-badge-overlap.mat-badge-before .mat-badge-content{left:-14px}[dir=rtl] .mat-badge-large.mat-badge-overlap.mat-badge-before .mat-badge-content{left:auto;right:-14px}.mat-badge-large.mat-badge-overlap.mat-badge-after .mat-badge-content{right:-14px}[dir=rtl] .mat-badge-large.mat-badge-overlap.mat-badge-after .mat-badge-content{right:auto;left:-14px}.mat-bottom-sheet-container{box-shadow:0 8px 10px -5px rgba(0,0,0,.2),0 16px 24px 2px rgba(0,0,0,.14),0 6px 30px 5px rgba(0,0,0,.12);background:#fff;color:rgba(0,0,0,.87)}.mat-button,.mat-icon-button,.mat-stroked-button{color:inherit;background:0 0}.mat-button.mat-primary,.mat-icon-button.mat-primary,.mat-stroked-button.mat-primary{color:#673ab7}.mat-button.mat-accent,.mat-icon-button.mat-accent,.mat-stroked-button.mat-accent{color:#ffd740}.mat-button.mat-warn,.mat-icon-button.mat-warn,.mat-stroked-button.mat-warn{color:#f44336}.mat-button.mat-accent[disabled],.mat-button.mat-primary[disabled],.mat-button.mat-warn[disabled],.mat-button[disabled][disabled],.mat-icon-button.mat-accent[disabled],.mat-icon-button.mat-primary[disabled],.mat-icon-button.mat-warn[disabled],.mat-icon-button[disabled][disabled],.mat-stroked-button.mat-accent[disabled],.mat-stroked-button.mat-primary[disabled],.mat-stroked-button.mat-warn[disabled],.mat-stroked-button[disabled][disabled]{color:rgba(0,0,0,.26)}.mat-button.mat-primary .mat-button-focus-overlay,.mat-icon-button.mat-primary .mat-button-focus-overlay,.mat-stroked-button.mat-primary .mat-button-focus-overlay{background-color:#673ab7}.mat-button.mat-accent .mat-button-focus-overlay,.mat-icon-button.mat-accent .mat-button-focus-overlay,.mat-stroked-button.mat-accent .mat-button-focus-overlay{background-color:#ffd740}.mat-button.mat-warn .mat-button-focus-overlay,.mat-icon-button.mat-warn .mat-button-focus-overlay,.mat-stroked-button.mat-warn .mat-button-focus-overlay{background-color:#f44336}.mat-button[disabled] .mat-button-focus-overlay,.mat-icon-button[disabled] .mat-button-focus-overlay,.mat-stroked-button[disabled] .mat-button-focus-overlay{background-color:transparent}.mat-button .mat-ripple-element,.mat-icon-button .mat-ripple-element,.mat-stroked-button .mat-ripple-element{opacity:.1;background-color:currentColor}.mat-button-focus-overlay{background:#000}.mat-stroked-button:not([disabled]){border-color:rgba(0,0,0,.12)}.mat-fab,.mat-flat-button,.mat-mini-fab,.mat-raised-button{color:rgba(0,0,0,.87);background-color:#fff}.mat-fab.mat-primary,.mat-flat-button.mat-primary,.mat-mini-fab.mat-primary,.mat-raised-button.mat-primary{color:#fff}.mat-fab.mat-accent,.mat-flat-button.mat-accent,.mat-mini-fab.mat-accent,.mat-raised-button.mat-accent{color:rgba(0,0,0,.87)}.mat-fab.mat-warn,.mat-flat-button.mat-warn,.mat-mini-fab.mat-warn,.mat-raised-button.mat-warn{color:#fff}.mat-fab.mat-accent[disabled],.mat-fab.mat-primary[disabled],.mat-fab.mat-warn[disabled],.mat-fab[disabled][disabled],.mat-flat-button.mat-accent[disabled],.mat-flat-button.mat-primary[disabled],.mat-flat-button.mat-warn[disabled],.mat-flat-button[disabled][disabled],.mat-mini-fab.mat-accent[disabled],.mat-mini-fab.mat-primary[disabled],.mat-mini-fab.mat-warn[disabled],.mat-mini-fab[disabled][disabled],.mat-raised-button.mat-accent[disabled],.mat-raised-button.mat-primary[disabled],.mat-raised-button.mat-warn[disabled],.mat-raised-button[disabled][disabled]{color:rgba(0,0,0,.26)}.mat-fab.mat-primary,.mat-flat-button.mat-primary,.mat-mini-fab.mat-primary,.mat-raised-button.mat-primary{background-color:#673ab7}.mat-fab.mat-accent,.mat-flat-button.mat-accent,.mat-mini-fab.mat-accent,.mat-raised-button.mat-accent{background-color:#ffd740}.mat-fab.mat-warn,.mat-flat-button.mat-warn,.mat-mini-fab.mat-warn,.mat-raised-button.mat-warn{background-color:#f44336}.mat-fab.mat-accent[disabled],.mat-fab.mat-primary[disabled],.mat-fab.mat-warn[disabled],.mat-fab[disabled][disabled],.mat-flat-button.mat-accent[disabled],.mat-flat-button.mat-primary[disabled],.mat-flat-button.mat-warn[disabled],.mat-flat-button[disabled][disabled],.mat-mini-fab.mat-accent[disabled],.mat-mini-fab.mat-primary[disabled],.mat-mini-fab.mat-warn[disabled],.mat-mini-fab[disabled][disabled],.mat-raised-button.mat-accent[disabled],.mat-raised-button.mat-primary[disabled],.mat-raised-button.mat-warn[disabled],.mat-raised-button[disabled][disabled]{background-color:rgba(0,0,0,.12)}.mat-fab.mat-primary .mat-ripple-element,.mat-flat-button.mat-primary .mat-ripple-element,.mat-mini-fab.mat-primary .mat-ripple-element,.mat-raised-button.mat-primary .mat-ripple-element{background-color:rgba(255,255,255,.1)}.mat-fab.mat-accent .mat-ripple-element,.mat-flat-button.mat-accent .mat-ripple-element,.mat-mini-fab.mat-accent .mat-ripple-element,.mat-raised-button.mat-accent .mat-ripple-element{background-color:rgba(0,0,0,.1)}.mat-fab.mat-warn .mat-ripple-element,.mat-flat-button.mat-warn .mat-ripple-element,.mat-mini-fab.mat-warn .mat-ripple-element,.mat-raised-button.mat-warn .mat-ripple-element{background-color:rgba(255,255,255,.1)}.mat-flat-button:not([class*=mat-elevation-z]),.mat-stroked-button:not([class*=mat-elevation-z]){box-shadow:0 0 0 0 rgba(0,0,0,.2),0 0 0 0 rgba(0,0,0,.14),0 0 0 0 rgba(0,0,0,.12)}.mat-raised-button:not([class*=mat-elevation-z]){box-shadow:0 3px 1px -2px rgba(0,0,0,.2),0 2px 2px 0 rgba(0,0,0,.14),0 1px 5px 0 rgba(0,0,0,.12)}.mat-raised-button:not([disabled]):active:not([class*=mat-elevation-z]){box-shadow:0 5px 5px -3px rgba(0,0,0,.2),0 8px 10px 1px rgba(0,0,0,.14),0 3px 14px 2px rgba(0,0,0,.12)}.mat-raised-button[disabled]:not([class*=mat-elevation-z]){box-shadow:0 0 0 0 rgba(0,0,0,.2),0 0 0 0 rgba(0,0,0,.14),0 0 0 0 rgba(0,0,0,.12)}.mat-fab:not([class*=mat-elevation-z]),.mat-mini-fab:not([class*=mat-elevation-z]){box-shadow:0 3px 5px -1px rgba(0,0,0,.2),0 6px 10px 0 rgba(0,0,0,.14),0 1px 18px 0 rgba(0,0,0,.12)}.mat-fab:not([disabled]):active:not([class*=mat-elevation-z]),.mat-mini-fab:not([disabled]):active:not([class*=mat-elevation-z]){box-shadow:0 7px 8px -4px rgba(0,0,0,.2),0 12px 17px 2px rgba(0,0,0,.14),0 5px 22px 4px rgba(0,0,0,.12)}.mat-fab[disabled]:not([class*=mat-elevation-z]),.mat-mini-fab[disabled]:not([class*=mat-elevation-z]){box-shadow:0 0 0 0 rgba(0,0,0,.2),0 0 0 0 rgba(0,0,0,.14),0 0 0 0 rgba(0,0,0,.12)}.mat-button-toggle-group,.mat-button-toggle-standalone{box-shadow:0 3px 1px -2px rgba(0,0,0,.2),0 2px 2px 0 rgba(0,0,0,.14),0 1px 5px 0 rgba(0,0,0,.12)}.mat-button-toggle-group-appearance-standard,.mat-button-toggle-standalone.mat-button-toggle-appearance-standard{box-shadow:none}.mat-button-toggle{color:rgba(0,0,0,.38)}.mat-button-toggle .mat-button-toggle-focus-overlay{background-color:rgba(0,0,0,.12)}.mat-button-toggle-appearance-standard{color:rgba(0,0,0,.87);background:#fff}.mat-button-toggle-appearance-standard .mat-button-toggle-focus-overlay{background-color:#000}.mat-button-toggle-group-appearance-standard .mat-button-toggle+.mat-button-toggle{border-left:solid 1px rgba(0,0,0,.12)}[dir=rtl] .mat-button-toggle-group-appearance-standard .mat-button-toggle+.mat-button-toggle{border-left:none;border-right:solid 1px rgba(0,0,0,.12)}.mat-button-toggle-group-appearance-standard.mat-button-toggle-vertical .mat-button-toggle+.mat-button-toggle{border-left:none;border-right:none;border-top:solid 1px rgba(0,0,0,.12)}.mat-button-toggle-checked{background-color:#e0e0e0;color:rgba(0,0,0,.54)}.mat-button-toggle-checked.mat-button-toggle-appearance-standard{color:rgba(0,0,0,.87)}.mat-button-toggle-disabled{color:rgba(0,0,0,.26);background-color:#eee}.mat-button-toggle-disabled.mat-button-toggle-appearance-standard{background:#fff}.mat-button-toggle-disabled.mat-button-toggle-checked{background-color:#bdbdbd}.mat-button-toggle-group-appearance-standard,.mat-button-toggle-standalone.mat-button-toggle-appearance-standard{border:solid 1px rgba(0,0,0,.12)}.mat-card{background:#fff;color:rgba(0,0,0,.87)}.mat-card:not([class*=mat-elevation-z]){box-shadow:0 2px 1px -1px rgba(0,0,0,.2),0 1px 1px 0 rgba(0,0,0,.14),0 1px 3px 0 rgba(0,0,0,.12)}.mat-card.mat-card-flat:not([class*=mat-elevation-z]){box-shadow:0 0 0 0 rgba(0,0,0,.2),0 0 0 0 rgba(0,0,0,.14),0 0 0 0 rgba(0,0,0,.12)}.mat-card-subtitle{color:rgba(0,0,0,.54)}.mat-checkbox-frame{border-color:rgba(0,0,0,.54)}.mat-checkbox-checkmark{fill:#fafafa}.mat-checkbox-checkmark-path{stroke:#fafafa!important}@media (-ms-high-contrast:black-on-white){.mat-checkbox-checkmark-path{stroke:#000!important}}.mat-checkbox-mixedmark{background-color:#fafafa}.mat-checkbox-checked.mat-primary .mat-checkbox-background,.mat-checkbox-indeterminate.mat-primary .mat-checkbox-background{background-color:#673ab7}.mat-checkbox-checked.mat-accent .mat-checkbox-background,.mat-checkbox-indeterminate.mat-accent .mat-checkbox-background{background-color:#ffd740}.mat-checkbox-checked.mat-warn .mat-checkbox-background,.mat-checkbox-indeterminate.mat-warn .mat-checkbox-background{background-color:#f44336}.mat-checkbox-disabled.mat-checkbox-checked .mat-checkbox-background,.mat-checkbox-disabled.mat-checkbox-indeterminate .mat-checkbox-background{background-color:#b0b0b0}.mat-checkbox-disabled:not(.mat-checkbox-checked) .mat-checkbox-frame{border-color:#b0b0b0}.mat-checkbox-disabled .mat-checkbox-label{color:rgba(0,0,0,.54)}@media (-ms-high-contrast:active){.mat-checkbox-disabled{opacity:.5}}@media (-ms-high-contrast:active){.mat-checkbox-background{background:0 0}}.mat-checkbox:not(.mat-checkbox-disabled).mat-primary .mat-checkbox-ripple .mat-ripple-element{background-color:#673ab7}.mat-checkbox:not(.mat-checkbox-disabled).mat-accent .mat-checkbox-ripple .mat-ripple-element{background-color:#ffd740}.mat-checkbox:not(.mat-checkbox-disabled).mat-warn .mat-checkbox-ripple .mat-ripple-element{background-color:#f44336}.mat-chip.mat-standard-chip{background-color:#e0e0e0;color:rgba(0,0,0,.87)}.mat-chip.mat-standard-chip .mat-chip-remove{color:rgba(0,0,0,.87);opacity:.4}.mat-chip.mat-standard-chip:not(.mat-chip-disabled):active{box-shadow:0 3px 3px -2px rgba(0,0,0,.2),0 3px 4px 0 rgba(0,0,0,.14),0 1px 8px 0 rgba(0,0,0,.12)}.mat-chip.mat-standard-chip:not(.mat-chip-disabled) .mat-chip-remove:hover{opacity:.54}.mat-chip.mat-standard-chip.mat-chip-disabled{opacity:.4}.mat-chip.mat-standard-chip::after{background:#000}.mat-chip.mat-standard-chip.mat-chip-selected.mat-primary{background-color:#673ab7;color:#fff}.mat-chip.mat-standard-chip.mat-chip-selected.mat-primary .mat-chip-remove{color:#fff;opacity:.4}.mat-chip.mat-standard-chip.mat-chip-selected.mat-primary .mat-ripple-element{background:rgba(255,255,255,.1)}.mat-chip.mat-standard-chip.mat-chip-selected.mat-warn{background-color:#f44336;color:#fff}.mat-chip.mat-standard-chip.mat-chip-selected.mat-warn .mat-chip-remove{color:#fff;opacity:.4}.mat-chip.mat-standard-chip.mat-chip-selected.mat-warn .mat-ripple-element{background:rgba(255,255,255,.1)}.mat-chip.mat-standard-chip.mat-chip-selected.mat-accent{background-color:#ffd740;color:rgba(0,0,0,.87)}.mat-chip.mat-standard-chip.mat-chip-selected.mat-accent .mat-chip-remove{color:rgba(0,0,0,.87);opacity:.4}.mat-chip.mat-standard-chip.mat-chip-selected.mat-accent .mat-ripple-element{background:rgba(0,0,0,.1)}.mat-table{background:#fff}.mat-table tbody,.mat-table tfoot,.mat-table thead,.mat-table-sticky,[mat-footer-row],[mat-header-row],[mat-row],mat-footer-row,mat-header-row,mat-row{background:inherit}mat-footer-row,mat-header-row,mat-row,td.mat-cell,td.mat-footer-cell,th.mat-header-cell{border-bottom-color:rgba(0,0,0,.12)}.mat-header-cell{color:rgba(0,0,0,.54)}.mat-cell,.mat-footer-cell{color:rgba(0,0,0,.87)}.mat-calendar-arrow{border-top-color:rgba(0,0,0,.54)}.mat-datepicker-content .mat-calendar-next-button,.mat-datepicker-content .mat-calendar-previous-button,.mat-datepicker-toggle{color:rgba(0,0,0,.54)}.mat-calendar-table-header{color:rgba(0,0,0,.38)}.mat-calendar-table-header-divider::after{background:rgba(0,0,0,.12)}.mat-calendar-body-label{color:rgba(0,0,0,.54)}.mat-calendar-body-cell-content{color:rgba(0,0,0,.87);border-color:transparent}.mat-calendar-body-disabled>.mat-calendar-body-cell-content:not(.mat-calendar-body-selected){color:rgba(0,0,0,.38)}.cdk-keyboard-focused .mat-calendar-body-active>.mat-calendar-body-cell-content:not(.mat-calendar-body-selected),.cdk-program-focused .mat-calendar-body-active>.mat-calendar-body-cell-content:not(.mat-calendar-body-selected),.mat-calendar-body-cell:not(.mat-calendar-body-disabled):hover>.mat-calendar-body-cell-content:not(.mat-calendar-body-selected){background-color:rgba(0,0,0,.04)}.mat-calendar-body-today:not(.mat-calendar-body-selected){border-color:rgba(0,0,0,.38)}.mat-calendar-body-disabled>.mat-calendar-body-today:not(.mat-calendar-body-selected){border-color:rgba(0,0,0,.18)}.mat-calendar-body-selected{background-color:#673ab7;color:#fff}.mat-calendar-body-disabled>.mat-calendar-body-selected{background-color:rgba(103,58,183,.4)}.mat-calendar-body-today.mat-calendar-body-selected{box-shadow:inset 0 0 0 1px #fff}.mat-datepicker-content{box-shadow:0 2px 4px -1px rgba(0,0,0,.2),0 4px 5px 0 rgba(0,0,0,.14),0 1px 10px 0 rgba(0,0,0,.12);background-color:#fff;color:rgba(0,0,0,.87)}.mat-datepicker-content.mat-accent .mat-calendar-body-selected{background-color:#ffd740;color:rgba(0,0,0,.87)}.mat-datepicker-content.mat-accent .mat-calendar-body-disabled>.mat-calendar-body-selected{background-color:rgba(255,215,64,.4)}.mat-datepicker-content.mat-accent .mat-calendar-body-today.mat-calendar-body-selected{box-shadow:inset 0 0 0 1px rgba(0,0,0,.87)}.mat-datepicker-content.mat-warn .mat-calendar-body-selected{background-color:#f44336;color:#fff}.mat-datepicker-content.mat-warn .mat-calendar-body-disabled>.mat-calendar-body-selected{background-color:rgba(244,67,54,.4)}.mat-datepicker-content.mat-warn .mat-calendar-body-today.mat-calendar-body-selected{box-shadow:inset 0 0 0 1px #fff}.mat-datepicker-content-touch{box-shadow:0 0 0 0 rgba(0,0,0,.2),0 0 0 0 rgba(0,0,0,.14),0 0 0 0 rgba(0,0,0,.12)}.mat-datepicker-toggle-active{color:#673ab7}.mat-datepicker-toggle-active.mat-accent{color:#ffd740}.mat-datepicker-toggle-active.mat-warn{color:#f44336}.mat-dialog-container{box-shadow:0 11px 15px -7px rgba(0,0,0,.2),0 24px 38px 3px rgba(0,0,0,.14),0 9px 46px 8px rgba(0,0,0,.12);background:#fff;color:rgba(0,0,0,.87)}.mat-divider{border-top-color:rgba(0,0,0,.12)}.mat-divider-vertical{border-right-color:rgba(0,0,0,.12)}.mat-expansion-panel{background:#fff;color:rgba(0,0,0,.87)}.mat-expansion-panel:not([class*=mat-elevation-z]){box-shadow:0 3px 1px -2px rgba(0,0,0,.2),0 2px 2px 0 rgba(0,0,0,.14),0 1px 5px 0 rgba(0,0,0,.12)}.mat-action-row{border-top-color:rgba(0,0,0,.12)}.mat-expansion-panel:not(.mat-expanded) .mat-expansion-panel-header:not([aria-disabled=true]).cdk-keyboard-focused,.mat-expansion-panel:not(.mat-expanded) .mat-expansion-panel-header:not([aria-disabled=true]).cdk-program-focused,.mat-expansion-panel:not(.mat-expanded) .mat-expansion-panel-header:not([aria-disabled=true]):hover{background:rgba(0,0,0,.04)}@media (hover:none){.mat-expansion-panel:not(.mat-expanded):not([aria-disabled=true]) .mat-expansion-panel-header:hover{background:#fff}}.mat-expansion-panel-header-title{color:rgba(0,0,0,.87)}.mat-expansion-indicator::after,.mat-expansion-panel-header-description{color:rgba(0,0,0,.54)}.mat-expansion-panel-header[aria-disabled=true]{color:rgba(0,0,0,.26)}.mat-expansion-panel-header[aria-disabled=true] .mat-expansion-panel-header-description,.mat-expansion-panel-header[aria-disabled=true] .mat-expansion-panel-header-title{color:inherit}.mat-form-field-label{color:rgba(0,0,0,.6)}.mat-hint{color:rgba(0,0,0,.6)}.mat-form-field.mat-focused .mat-form-field-label{color:#673ab7}.mat-form-field.mat-focused .mat-form-field-label.mat-accent{color:#ffd740}.mat-form-field.mat-focused .mat-form-field-label.mat-warn{color:#f44336}.mat-focused .mat-form-field-required-marker{color:#ffd740}.mat-form-field-ripple{background-color:rgba(0,0,0,.87)}.mat-form-field.mat-focused .mat-form-field-ripple{background-color:#673ab7}.mat-form-field.mat-focused .mat-form-field-ripple.mat-accent{background-color:#ffd740}.mat-form-field.mat-focused .mat-form-field-ripple.mat-warn{background-color:#f44336}.mat-form-field-type-mat-native-select.mat-focused:not(.mat-form-field-invalid) .mat-form-field-infix::after{color:#673ab7}.mat-form-field-type-mat-native-select.mat-focused:not(.mat-form-field-invalid).mat-accent .mat-form-field-infix::after{color:#ffd740}.mat-form-field-type-mat-native-select.mat-focused:not(.mat-form-field-invalid).mat-warn .mat-form-field-infix::after{color:#f44336}.mat-form-field.mat-form-field-invalid .mat-form-field-label{color:#f44336}.mat-form-field.mat-form-field-invalid .mat-form-field-label .mat-form-field-required-marker,.mat-form-field.mat-form-field-invalid .mat-form-field-label.mat-accent{color:#f44336}.mat-form-field.mat-form-field-invalid .mat-form-field-ripple,.mat-form-field.mat-form-field-invalid .mat-form-field-ripple.mat-accent{background-color:#f44336}.mat-error{color:#f44336}.mat-form-field-appearance-legacy .mat-form-field-label{color:rgba(0,0,0,.54)}.mat-form-field-appearance-legacy .mat-hint{color:rgba(0,0,0,.54)}.mat-form-field-appearance-legacy .mat-form-field-underline{background-color:rgba(0,0,0,.42)}.mat-form-field-appearance-legacy.mat-form-field-disabled .mat-form-field-underline{background-image:linear-gradient(to right,rgba(0,0,0,.42) 0,rgba(0,0,0,.42) 33%,transparent 0);background-size:4px 100%;background-repeat:repeat-x}.mat-form-field-appearance-standard .mat-form-field-underline{background-color:rgba(0,0,0,.42)}.mat-form-field-appearance-standard.mat-form-field-disabled .mat-form-field-underline{background-image:linear-gradient(to right,rgba(0,0,0,.42) 0,rgba(0,0,0,.42) 33%,transparent 0);background-size:4px 100%;background-repeat:repeat-x}.mat-form-field-appearance-fill .mat-form-field-flex{background-color:rgba(0,0,0,.04)}.mat-form-field-appearance-fill.mat-form-field-disabled .mat-form-field-flex{background-color:rgba(0,0,0,.02)}.mat-form-field-appearance-fill .mat-form-field-underline::before{background-color:rgba(0,0,0,.42)}.mat-form-field-appearance-fill.mat-form-field-disabled .mat-form-field-label{color:rgba(0,0,0,.38)}.mat-form-field-appearance-fill.mat-form-field-disabled .mat-form-field-underline::before{background-color:transparent}.mat-form-field-appearance-outline .mat-form-field-outline{color:rgba(0,0,0,.12)}.mat-form-field-appearance-outline .mat-form-field-outline-thick{color:rgba(0,0,0,.87)}.mat-form-field-appearance-outline.mat-focused .mat-form-field-outline-thick{color:#673ab7}.mat-form-field-appearance-outline.mat-focused.mat-accent .mat-form-field-outline-thick{color:#ffd740}.mat-form-field-appearance-outline.mat-focused.mat-warn .mat-form-field-outline-thick{color:#f44336}.mat-form-field-appearance-outline.mat-form-field-invalid.mat-form-field-invalid .mat-form-field-outline-thick{color:#f44336}.mat-form-field-appearance-outline.mat-form-field-disabled .mat-form-field-label{color:rgba(0,0,0,.38)}.mat-form-field-appearance-outline.mat-form-field-disabled .mat-form-field-outline{color:rgba(0,0,0,.06)}.mat-icon.mat-primary{color:#673ab7}.mat-icon.mat-accent{color:#ffd740}.mat-icon.mat-warn{color:#f44336}.mat-form-field-type-mat-native-select .mat-form-field-infix::after{color:rgba(0,0,0,.54)}.mat-form-field-type-mat-native-select.mat-form-field-disabled .mat-form-field-infix::after,.mat-input-element:disabled{color:rgba(0,0,0,.38)}.mat-input-element{caret-color:#673ab7}.mat-input-element::-webkit-input-placeholder{color:rgba(0,0,0,.42)}.mat-input-element:-ms-input-placeholder{color:rgba(0,0,0,.42)}.mat-input-element::-ms-input-placeholder{color:rgba(0,0,0,.42)}.mat-input-element::placeholder{color:rgba(0,0,0,.42)}.mat-input-element::-moz-placeholder{color:rgba(0,0,0,.42)}.mat-input-element::-webkit-input-placeholder{color:rgba(0,0,0,.42)}.mat-input-element:-ms-input-placeholder{color:rgba(0,0,0,.42)}.mat-accent .mat-input-element{caret-color:#ffd740}.mat-form-field-invalid .mat-input-element,.mat-warn .mat-input-element{caret-color:#f44336}.mat-form-field-type-mat-native-select.mat-form-field-invalid .mat-form-field-infix::after{color:#f44336}.mat-list-base .mat-list-item{color:rgba(0,0,0,.87)}.mat-list-base .mat-list-option{color:rgba(0,0,0,.87)}.mat-list-base .mat-subheader{color:rgba(0,0,0,.54)}.mat-list-item-disabled{background-color:#eee}.mat-list-option:focus,.mat-list-option:hover,.mat-nav-list .mat-list-item:focus,.mat-nav-list .mat-list-item:hover{background:rgba(0,0,0,.04)}.mat-menu-panel{background:#fff}.mat-menu-panel:not([class*=mat-elevation-z]){box-shadow:0 2px 4px -1px rgba(0,0,0,.2),0 4px 5px 0 rgba(0,0,0,.14),0 1px 10px 0 rgba(0,0,0,.12)}.mat-menu-item{background:0 0;color:rgba(0,0,0,.87)}.mat-menu-item[disabled],.mat-menu-item[disabled]::after{color:rgba(0,0,0,.38)}.mat-menu-item .mat-icon-no-color,.mat-menu-item-submenu-trigger::after{color:rgba(0,0,0,.54)}.mat-menu-item-highlighted:not([disabled]),.mat-menu-item.cdk-keyboard-focused:not([disabled]),.mat-menu-item.cdk-program-focused:not([disabled]),.mat-menu-item:hover:not([disabled]){background:rgba(0,0,0,.04)}.mat-paginator{background:#fff}.mat-paginator,.mat-paginator-page-size .mat-select-trigger{color:rgba(0,0,0,.54)}.mat-paginator-decrement,.mat-paginator-increment{border-top:2px solid rgba(0,0,0,.54);border-right:2px solid rgba(0,0,0,.54)}.mat-paginator-first,.mat-paginator-last{border-top:2px solid rgba(0,0,0,.54)}.mat-icon-button[disabled] .mat-paginator-decrement,.mat-icon-button[disabled] .mat-paginator-first,.mat-icon-button[disabled] .mat-paginator-increment,.mat-icon-button[disabled] .mat-paginator-last{border-color:rgba(0,0,0,.38)}.mat-progress-bar-background{fill:#d1c4e9}.mat-progress-bar-buffer{background-color:#d1c4e9}.mat-progress-bar-fill::after{background-color:#673ab7}.mat-progress-bar.mat-accent .mat-progress-bar-background{fill:#ffe57f}.mat-progress-bar.mat-accent .mat-progress-bar-buffer{background-color:#ffe57f}.mat-progress-bar.mat-accent .mat-progress-bar-fill::after{background-color:#ffd740}.mat-progress-bar.mat-warn .mat-progress-bar-background{fill:#ffcdd2}.mat-progress-bar.mat-warn .mat-progress-bar-buffer{background-color:#ffcdd2}.mat-progress-bar.mat-warn .mat-progress-bar-fill::after{background-color:#f44336}.mat-progress-spinner circle,.mat-spinner circle{stroke:#673ab7}.mat-progress-spinner.mat-accent circle,.mat-spinner.mat-accent circle{stroke:#ffd740}.mat-progress-spinner.mat-warn circle,.mat-spinner.mat-warn circle{stroke:#f44336}.mat-radio-outer-circle{border-color:rgba(0,0,0,.54)}.mat-radio-button.mat-primary.mat-radio-checked .mat-radio-outer-circle{border-color:#673ab7}.mat-radio-button.mat-primary .mat-radio-inner-circle,.mat-radio-button.mat-primary .mat-radio-ripple .mat-ripple-element:not(.mat-radio-persistent-ripple),.mat-radio-button.mat-primary.mat-radio-checked .mat-radio-persistent-ripple,.mat-radio-button.mat-primary:active .mat-radio-persistent-ripple{background-color:#673ab7}.mat-radio-button.mat-accent.mat-radio-checked .mat-radio-outer-circle{border-color:#ffd740}.mat-radio-button.mat-accent .mat-radio-inner-circle,.mat-radio-button.mat-accent .mat-radio-ripple .mat-ripple-element:not(.mat-radio-persistent-ripple),.mat-radio-button.mat-accent.mat-radio-checked .mat-radio-persistent-ripple,.mat-radio-button.mat-accent:active .mat-radio-persistent-ripple{background-color:#ffd740}.mat-radio-button.mat-warn.mat-radio-checked .mat-radio-outer-circle{border-color:#f44336}.mat-radio-button.mat-warn .mat-radio-inner-circle,.mat-radio-button.mat-warn .mat-radio-ripple .mat-ripple-element:not(.mat-radio-persistent-ripple),.mat-radio-button.mat-warn.mat-radio-checked .mat-radio-persistent-ripple,.mat-radio-button.mat-warn:active .mat-radio-persistent-ripple{background-color:#f44336}.mat-radio-button.mat-radio-disabled .mat-radio-outer-circle,.mat-radio-button.mat-radio-disabled.mat-radio-checked .mat-radio-outer-circle{border-color:rgba(0,0,0,.38)}.mat-radio-button.mat-radio-disabled .mat-radio-inner-circle,.mat-radio-button.mat-radio-disabled .mat-radio-ripple .mat-ripple-element{background-color:rgba(0,0,0,.38)}.mat-radio-button.mat-radio-disabled .mat-radio-label-content{color:rgba(0,0,0,.38)}.mat-radio-button .mat-ripple-element{background-color:#000}.mat-select-value{color:rgba(0,0,0,.87)}.mat-select-placeholder{color:rgba(0,0,0,.42)}.mat-select-disabled .mat-select-value{color:rgba(0,0,0,.38)}.mat-select-arrow{color:rgba(0,0,0,.54)}.mat-select-panel{background:#fff}.mat-select-panel:not([class*=mat-elevation-z]){box-shadow:0 2px 4px -1px rgba(0,0,0,.2),0 4px 5px 0 rgba(0,0,0,.14),0 1px 10px 0 rgba(0,0,0,.12)}.mat-select-panel .mat-option.mat-selected:not(.mat-option-multiple){background:rgba(0,0,0,.12)}.mat-form-field.mat-focused.mat-primary .mat-select-arrow{color:#673ab7}.mat-form-field.mat-focused.mat-accent .mat-select-arrow{color:#ffd740}.mat-form-field.mat-focused.mat-warn .mat-select-arrow{color:#f44336}.mat-form-field .mat-select.mat-select-invalid .mat-select-arrow{color:#f44336}.mat-form-field .mat-select.mat-select-disabled .mat-select-arrow{color:rgba(0,0,0,.38)}.mat-drawer-container{background-color:#fafafa;color:rgba(0,0,0,.87)}.mat-drawer{background-color:#fff;color:rgba(0,0,0,.87)}.mat-drawer.mat-drawer-push{background-color:#fff}.mat-drawer:not(.mat-drawer-side){box-shadow:0 8px 10px -5px rgba(0,0,0,.2),0 16px 24px 2px rgba(0,0,0,.14),0 6px 30px 5px rgba(0,0,0,.12)}.mat-drawer-side{border-right:solid 1px rgba(0,0,0,.12)}.mat-drawer-side.mat-drawer-end{border-left:solid 1px rgba(0,0,0,.12);border-right:none}[dir=rtl] .mat-drawer-side{border-left:solid 1px rgba(0,0,0,.12);border-right:none}[dir=rtl] .mat-drawer-side.mat-drawer-end{border-left:none;border-right:solid 1px rgba(0,0,0,.12)}.mat-drawer-backdrop.mat-drawer-shown{background-color:rgba(0,0,0,.6)}.mat-slide-toggle.mat-checked .mat-slide-toggle-thumb{background-color:#ffd740}.mat-slide-toggle.mat-checked .mat-slide-toggle-bar{background-color:rgba(255,215,64,.54)}.mat-slide-toggle.mat-checked .mat-ripple-element{background-color:#ffd740}.mat-slide-toggle.mat-primary.mat-checked .mat-slide-toggle-thumb{background-color:#673ab7}.mat-slide-toggle.mat-primary.mat-checked .mat-slide-toggle-bar{background-color:rgba(103,58,183,.54)}.mat-slide-toggle.mat-primary.mat-checked .mat-ripple-element{background-color:#673ab7}.mat-slide-toggle.mat-warn.mat-checked .mat-slide-toggle-thumb{background-color:#f44336}.mat-slide-toggle.mat-warn.mat-checked .mat-slide-toggle-bar{background-color:rgba(244,67,54,.54)}.mat-slide-toggle.mat-warn.mat-checked .mat-ripple-element{background-color:#f44336}.mat-slide-toggle:not(.mat-checked) .mat-ripple-element{background-color:#000}.mat-slide-toggle-thumb{box-shadow:0 2px 1px -1px rgba(0,0,0,.2),0 1px 1px 0 rgba(0,0,0,.14),0 1px 3px 0 rgba(0,0,0,.12);background-color:#fafafa}.mat-slide-toggle-bar{background-color:rgba(0,0,0,.38)}.mat-slider-track-background{background-color:rgba(0,0,0,.26)}.mat-primary .mat-slider-thumb,.mat-primary .mat-slider-thumb-label,.mat-primary .mat-slider-track-fill{background-color:#673ab7}.mat-primary .mat-slider-thumb-label-text{color:#fff}.mat-accent .mat-slider-thumb,.mat-accent .mat-slider-thumb-label,.mat-accent .mat-slider-track-fill{background-color:#ffd740}.mat-accent .mat-slider-thumb-label-text{color:rgba(0,0,0,.87)}.mat-warn .mat-slider-thumb,.mat-warn .mat-slider-thumb-label,.mat-warn .mat-slider-track-fill{background-color:#f44336}.mat-warn .mat-slider-thumb-label-text{color:#fff}.mat-slider-focus-ring{background-color:rgba(255,215,64,.2)}.cdk-focused .mat-slider-track-background,.mat-slider:hover .mat-slider-track-background{background-color:rgba(0,0,0,.38)}.mat-slider-disabled .mat-slider-thumb,.mat-slider-disabled .mat-slider-track-background,.mat-slider-disabled .mat-slider-track-fill{background-color:rgba(0,0,0,.26)}.mat-slider-disabled:hover .mat-slider-track-background{background-color:rgba(0,0,0,.26)}.mat-slider-min-value .mat-slider-focus-ring{background-color:rgba(0,0,0,.12)}.mat-slider-min-value.mat-slider-thumb-label-showing .mat-slider-thumb,.mat-slider-min-value.mat-slider-thumb-label-showing .mat-slider-thumb-label{background-color:rgba(0,0,0,.87)}.mat-slider-min-value.mat-slider-thumb-label-showing.cdk-focused .mat-slider-thumb,.mat-slider-min-value.mat-slider-thumb-label-showing.cdk-focused .mat-slider-thumb-label{background-color:rgba(0,0,0,.26)}.mat-slider-min-value:not(.mat-slider-thumb-label-showing) .mat-slider-thumb{border-color:rgba(0,0,0,.26);background-color:transparent}.mat-slider-min-value:not(.mat-slider-thumb-label-showing).cdk-focused .mat-slider-thumb,.mat-slider-min-value:not(.mat-slider-thumb-label-showing):hover .mat-slider-thumb{border-color:rgba(0,0,0,.38)}.mat-slider-min-value:not(.mat-slider-thumb-label-showing).cdk-focused.mat-slider-disabled .mat-slider-thumb,.mat-slider-min-value:not(.mat-slider-thumb-label-showing):hover.mat-slider-disabled .mat-slider-thumb{border-color:rgba(0,0,0,.26)}.mat-slider-has-ticks .mat-slider-wrapper::after{border-color:rgba(0,0,0,.7)}.mat-slider-horizontal .mat-slider-ticks{background-image:repeating-linear-gradient(to right,rgba(0,0,0,.7),rgba(0,0,0,.7) 2px,transparent 0,transparent);background-image:-moz-repeating-linear-gradient(.0001deg,rgba(0,0,0,.7),rgba(0,0,0,.7) 2px,transparent 0,transparent)}.mat-slider-vertical .mat-slider-ticks{background-image:repeating-linear-gradient(to bottom,rgba(0,0,0,.7),rgba(0,0,0,.7) 2px,transparent 0,transparent)}.mat-step-header.cdk-keyboard-focused,.mat-step-header.cdk-program-focused,.mat-step-header:hover{background-color:rgba(0,0,0,.04)}@media (hover:none){.mat-step-header:hover{background:0 0}}.mat-step-header .mat-step-label,.mat-step-header .mat-step-optional{color:rgba(0,0,0,.54)}.mat-step-header .mat-step-icon{background-color:rgba(0,0,0,.54);color:#fff}.mat-step-header .mat-step-icon-selected,.mat-step-header .mat-step-icon-state-done,.mat-step-header .mat-step-icon-state-edit{background-color:#673ab7;color:#fff}.mat-step-header .mat-step-icon-state-error{background-color:transparent;color:#f44336}.mat-step-header .mat-step-label.mat-step-label-active{color:rgba(0,0,0,.87)}.mat-step-header .mat-step-label.mat-step-label-error{color:#f44336}.mat-stepper-horizontal,.mat-stepper-vertical{background-color:#fff}.mat-stepper-vertical-line::before{border-left-color:rgba(0,0,0,.12)}.mat-horizontal-stepper-header::after,.mat-horizontal-stepper-header::before,.mat-stepper-horizontal-line{border-top-color:rgba(0,0,0,.12)}.mat-sort-header-arrow{color:#757575}.mat-tab-header,.mat-tab-nav-bar{border-bottom:1px solid rgba(0,0,0,.12)}.mat-tab-group-inverted-header .mat-tab-header,.mat-tab-group-inverted-header .mat-tab-nav-bar{border-top:1px solid rgba(0,0,0,.12);border-bottom:none}.mat-tab-label,.mat-tab-link{color:rgba(0,0,0,.87)}.mat-tab-label.mat-tab-disabled,.mat-tab-link.mat-tab-disabled{color:rgba(0,0,0,.38)}.mat-tab-header-pagination-chevron{border-color:rgba(0,0,0,.87)}.mat-tab-header-pagination-disabled .mat-tab-header-pagination-chevron{border-color:rgba(0,0,0,.38)}.mat-tab-group[class*=mat-background-] .mat-tab-header,.mat-tab-nav-bar[class*=mat-background-]{border-bottom:none;border-top:none}.mat-tab-group.mat-primary .mat-tab-label.cdk-keyboard-focused:not(.mat-tab-disabled),.mat-tab-group.mat-primary .mat-tab-label.cdk-program-focused:not(.mat-tab-disabled),.mat-tab-group.mat-primary .mat-tab-link.cdk-keyboard-focused:not(.mat-tab-disabled),.mat-tab-group.mat-primary .mat-tab-link.cdk-program-focused:not(.mat-tab-disabled),.mat-tab-nav-bar.mat-primary .mat-tab-label.cdk-keyboard-focused:not(.mat-tab-disabled),.mat-tab-nav-bar.mat-primary .mat-tab-label.cdk-program-focused:not(.mat-tab-disabled),.mat-tab-nav-bar.mat-primary .mat-tab-link.cdk-keyboard-focused:not(.mat-tab-disabled),.mat-tab-nav-bar.mat-primary .mat-tab-link.cdk-program-focused:not(.mat-tab-disabled){background-color:rgba(209,196,233,.3)}.mat-tab-group.mat-primary .mat-ink-bar,.mat-tab-nav-bar.mat-primary .mat-ink-bar{background-color:#673ab7}.mat-tab-group.mat-primary.mat-background-primary .mat-ink-bar,.mat-tab-nav-bar.mat-primary.mat-background-primary .mat-ink-bar{background-color:#fff}.mat-tab-group.mat-accent .mat-tab-label.cdk-keyboard-focused:not(.mat-tab-disabled),.mat-tab-group.mat-accent .mat-tab-label.cdk-program-focused:not(.mat-tab-disabled),.mat-tab-group.mat-accent .mat-tab-link.cdk-keyboard-focused:not(.mat-tab-disabled),.mat-tab-group.mat-accent .mat-tab-link.cdk-program-focused:not(.mat-tab-disabled),.mat-tab-nav-bar.mat-accent .mat-tab-label.cdk-keyboard-focused:not(.mat-tab-disabled),.mat-tab-nav-bar.mat-accent .mat-tab-label.cdk-program-focused:not(.mat-tab-disabled),.mat-tab-nav-bar.mat-accent .mat-tab-link.cdk-keyboard-focused:not(.mat-tab-disabled),.mat-tab-nav-bar.mat-accent .mat-tab-link.cdk-program-focused:not(.mat-tab-disabled){background-color:rgba(255,229,127,.3)}.mat-tab-group.mat-accent .mat-ink-bar,.mat-tab-nav-bar.mat-accent .mat-ink-bar{background-color:#ffd740}.mat-tab-group.mat-accent.mat-background-accent .mat-ink-bar,.mat-tab-nav-bar.mat-accent.mat-background-accent .mat-ink-bar{background-color:rgba(0,0,0,.87)}.mat-tab-group.mat-warn .mat-tab-label.cdk-keyboard-focused:not(.mat-tab-disabled),.mat-tab-group.mat-warn .mat-tab-label.cdk-program-focused:not(.mat-tab-disabled),.mat-tab-group.mat-warn .mat-tab-link.cdk-keyboard-focused:not(.mat-tab-disabled),.mat-tab-group.mat-warn .mat-tab-link.cdk-program-focused:not(.mat-tab-disabled),.mat-tab-nav-bar.mat-warn .mat-tab-label.cdk-keyboard-focused:not(.mat-tab-disabled),.mat-tab-nav-bar.mat-warn .mat-tab-label.cdk-program-focused:not(.mat-tab-disabled),.mat-tab-nav-bar.mat-warn .mat-tab-link.cdk-keyboard-focused:not(.mat-tab-disabled),.mat-tab-nav-bar.mat-warn .mat-tab-link.cdk-program-focused:not(.mat-tab-disabled){background-color:rgba(255,205,210,.3)}.mat-tab-group.mat-warn .mat-ink-bar,.mat-tab-nav-bar.mat-warn .mat-ink-bar{background-color:#f44336}.mat-tab-group.mat-warn.mat-background-warn .mat-ink-bar,.mat-tab-nav-bar.mat-warn.mat-background-warn .mat-ink-bar{background-color:#fff}.mat-tab-group.mat-background-primary .mat-tab-label.cdk-keyboard-focused:not(.mat-tab-disabled),.mat-tab-group.mat-background-primary .mat-tab-label.cdk-program-focused:not(.mat-tab-disabled),.mat-tab-group.mat-background-primary .mat-tab-link.cdk-keyboard-focused:not(.mat-tab-disabled),.mat-tab-group.mat-background-primary .mat-tab-link.cdk-program-focused:not(.mat-tab-disabled),.mat-tab-nav-bar.mat-background-primary .mat-tab-label.cdk-keyboard-focused:not(.mat-tab-disabled),.mat-tab-nav-bar.mat-background-primary .mat-tab-label.cdk-program-focused:not(.mat-tab-disabled),.mat-tab-nav-bar.mat-background-primary .mat-tab-link.cdk-keyboard-focused:not(.mat-tab-disabled),.mat-tab-nav-bar.mat-background-primary .mat-tab-link.cdk-program-focused:not(.mat-tab-disabled){background-color:rgba(209,196,233,.3)}.mat-tab-group.mat-background-primary .mat-tab-header,.mat-tab-group.mat-background-primary .mat-tab-links,.mat-tab-nav-bar.mat-background-primary .mat-tab-header,.mat-tab-nav-bar.mat-background-primary .mat-tab-links{background-color:#673ab7}.mat-tab-group.mat-background-primary .mat-tab-label,.mat-tab-group.mat-background-primary .mat-tab-link,.mat-tab-nav-bar.mat-background-primary .mat-tab-label,.mat-tab-nav-bar.mat-background-primary .mat-tab-link{color:#fff}.mat-tab-group.mat-background-primary .mat-tab-label.mat-tab-disabled,.mat-tab-group.mat-background-primary .mat-tab-link.mat-tab-disabled,.mat-tab-nav-bar.mat-background-primary .mat-tab-label.mat-tab-disabled,.mat-tab-nav-bar.mat-background-primary .mat-tab-link.mat-tab-disabled{color:rgba(255,255,255,.4)}.mat-tab-group.mat-background-primary .mat-tab-header-pagination-chevron,.mat-tab-nav-bar.mat-background-primary .mat-tab-header-pagination-chevron{border-color:#fff}.mat-tab-group.mat-background-primary .mat-tab-header-pagination-disabled .mat-tab-header-pagination-chevron,.mat-tab-nav-bar.mat-background-primary .mat-tab-header-pagination-disabled .mat-tab-header-pagination-chevron{border-color:rgba(255,255,255,.4)}.mat-tab-group.mat-background-primary .mat-ripple-element,.mat-tab-nav-bar.mat-background-primary .mat-ripple-element{background-color:rgba(255,255,255,.12)}.mat-tab-group.mat-background-accent .mat-tab-label.cdk-keyboard-focused:not(.mat-tab-disabled),.mat-tab-group.mat-background-accent .mat-tab-label.cdk-program-focused:not(.mat-tab-disabled),.mat-tab-group.mat-background-accent .mat-tab-link.cdk-keyboard-focused:not(.mat-tab-disabled),.mat-tab-group.mat-background-accent .mat-tab-link.cdk-program-focused:not(.mat-tab-disabled),.mat-tab-nav-bar.mat-background-accent .mat-tab-label.cdk-keyboard-focused:not(.mat-tab-disabled),.mat-tab-nav-bar.mat-background-accent .mat-tab-label.cdk-program-focused:not(.mat-tab-disabled),.mat-tab-nav-bar.mat-background-accent .mat-tab-link.cdk-keyboard-focused:not(.mat-tab-disabled),.mat-tab-nav-bar.mat-background-accent .mat-tab-link.cdk-program-focused:not(.mat-tab-disabled){background-color:rgba(255,229,127,.3)}.mat-tab-group.mat-background-accent .mat-tab-header,.mat-tab-group.mat-background-accent .mat-tab-links,.mat-tab-nav-bar.mat-background-accent .mat-tab-header,.mat-tab-nav-bar.mat-background-accent .mat-tab-links{background-color:#ffd740}.mat-tab-group.mat-background-accent .mat-tab-label,.mat-tab-group.mat-background-accent .mat-tab-link,.mat-tab-nav-bar.mat-background-accent .mat-tab-label,.mat-tab-nav-bar.mat-background-accent .mat-tab-link{color:rgba(0,0,0,.87)}.mat-tab-group.mat-background-accent .mat-tab-label.mat-tab-disabled,.mat-tab-group.mat-background-accent .mat-tab-link.mat-tab-disabled,.mat-tab-nav-bar.mat-background-accent .mat-tab-label.mat-tab-disabled,.mat-tab-nav-bar.mat-background-accent .mat-tab-link.mat-tab-disabled{color:rgba(0,0,0,.4)}.mat-tab-group.mat-background-accent .mat-tab-header-pagination-chevron,.mat-tab-nav-bar.mat-background-accent .mat-tab-header-pagination-chevron{border-color:rgba(0,0,0,.87)}.mat-tab-group.mat-background-accent .mat-tab-header-pagination-disabled .mat-tab-header-pagination-chevron,.mat-tab-nav-bar.mat-background-accent .mat-tab-header-pagination-disabled .mat-tab-header-pagination-chevron{border-color:rgba(0,0,0,.4)}.mat-tab-group.mat-background-accent .mat-ripple-element,.mat-tab-nav-bar.mat-background-accent .mat-ripple-element{background-color:rgba(0,0,0,.12)}.mat-tab-group.mat-background-warn .mat-tab-label.cdk-keyboard-focused:not(.mat-tab-disabled),.mat-tab-group.mat-background-warn .mat-tab-label.cdk-program-focused:not(.mat-tab-disabled),.mat-tab-group.mat-background-warn .mat-tab-link.cdk-keyboard-focused:not(.mat-tab-disabled),.mat-tab-group.mat-background-warn .mat-tab-link.cdk-program-focused:not(.mat-tab-disabled),.mat-tab-nav-bar.mat-background-warn .mat-tab-label.cdk-keyboard-focused:not(.mat-tab-disabled),.mat-tab-nav-bar.mat-background-warn .mat-tab-label.cdk-program-focused:not(.mat-tab-disabled),.mat-tab-nav-bar.mat-background-warn .mat-tab-link.cdk-keyboard-focused:not(.mat-tab-disabled),.mat-tab-nav-bar.mat-background-warn .mat-tab-link.cdk-program-focused:not(.mat-tab-disabled){background-color:rgba(255,205,210,.3)}.mat-tab-group.mat-background-warn .mat-tab-header,.mat-tab-group.mat-background-warn .mat-tab-links,.mat-tab-nav-bar.mat-background-warn .mat-tab-header,.mat-tab-nav-bar.mat-background-warn .mat-tab-links{background-color:#f44336}.mat-tab-group.mat-background-warn .mat-tab-label,.mat-tab-group.mat-background-warn .mat-tab-link,.mat-tab-nav-bar.mat-background-warn .mat-tab-label,.mat-tab-nav-bar.mat-background-warn .mat-tab-link{color:#fff}.mat-tab-group.mat-background-warn .mat-tab-label.mat-tab-disabled,.mat-tab-group.mat-background-warn .mat-tab-link.mat-tab-disabled,.mat-tab-nav-bar.mat-background-warn .mat-tab-label.mat-tab-disabled,.mat-tab-nav-bar.mat-background-warn .mat-tab-link.mat-tab-disabled{color:rgba(255,255,255,.4)}.mat-tab-group.mat-background-warn .mat-tab-header-pagination-chevron,.mat-tab-nav-bar.mat-background-warn .mat-tab-header-pagination-chevron{border-color:#fff}.mat-tab-group.mat-background-warn .mat-tab-header-pagination-disabled .mat-tab-header-pagination-chevron,.mat-tab-nav-bar.mat-background-warn .mat-tab-header-pagination-disabled .mat-tab-header-pagination-chevron{border-color:rgba(255,255,255,.4)}.mat-tab-group.mat-background-warn .mat-ripple-element,.mat-tab-nav-bar.mat-background-warn .mat-ripple-element{background-color:rgba(255,255,255,.12)}.mat-toolbar{background:#f5f5f5;color:rgba(0,0,0,.87)}.mat-toolbar.mat-primary{background:#673ab7;color:#fff}.mat-toolbar.mat-accent{background:#ffd740;color:rgba(0,0,0,.87)}.mat-toolbar.mat-warn{background:#f44336;color:#fff}.mat-toolbar .mat-focused .mat-form-field-ripple,.mat-toolbar .mat-form-field-ripple,.mat-toolbar .mat-form-field-underline{background-color:currentColor}.mat-toolbar .mat-focused .mat-form-field-label,.mat-toolbar .mat-form-field-label,.mat-toolbar .mat-form-field.mat-focused .mat-select-arrow,.mat-toolbar .mat-select-arrow,.mat-toolbar .mat-select-value{color:inherit}.mat-toolbar .mat-input-element{caret-color:currentColor}.mat-tooltip{background:rgba(97,97,97,.9)}.mat-tree{background:#fff}.mat-nested-tree-node,.mat-tree-node{color:rgba(0,0,0,.87)}.mat-snack-bar-container{color:rgba(255,255,255,.7);background:#323232;box-shadow:0 3px 5px -1px rgba(0,0,0,.2),0 6px 10px 0 rgba(0,0,0,.14),0 1px 18px 0 rgba(0,0,0,.12)}.mat-simple-snackbar-action{color:#ffd740}\n\n/*# sourceMappingURL=data:application/json;base64,eyJ2ZXJzaW9uIjozLCJzb3VyY2VzIjpbIm5vZGVfbW9kdWxlcy9AYW5ndWxhci9tYXRlcmlhbC9wcmVidWlsdC10aGVtZXMvZGVlcHB1cnBsZS1hbWJlci5jc3MiXSwibmFtZXMiOltdLCJtYXBwaW5ncyI6IkFBQUEsbUJBQW1CLGVBQWUsQ0FBQyxjQUFjLENBQUMsOENBQThDLENBQUMsb0NBQW9DLGFBQWEsQ0FBQyxvQ0FBb0MsY0FBYyxDQUFDLHlDQUF5QyxxREFBcUQsQ0FBQyxlQUFlLENBQUMsc0NBQXNDLHFEQUFxRCxDQUFDLGVBQWUsQ0FBQyw2Q0FBNkMscURBQXFELENBQUMsZUFBZSxDQUFDLDZDQUE2QyxxREFBcUQsQ0FBQyxlQUFlLENBQUMsMkJBQTJCLHdEQUF3RCxDQUFDLGVBQWUsQ0FBQywyQkFBMkIsdURBQXVELENBQUMsZUFBZSxDQUFDLDZCQUE2QixxREFBcUQsQ0FBQyxzQ0FBc0MscURBQXFELENBQUMsNENBQTRDLGVBQWUsQ0FBQyx3QkFBd0IscURBQXFELENBQUMsOENBQThDLHVEQUF1RCxDQUFDLGVBQWUsQ0FBQyxxQkFBcUIsQ0FBQyw4Q0FBOEMscURBQXFELENBQUMsZUFBZSxDQUFDLHFCQUFxQixDQUFDLDhDQUE4QyxxREFBcUQsQ0FBQyxlQUFlLENBQUMsc0JBQXNCLENBQUMsOENBQThDLHFEQUFxRCxDQUFDLGVBQWUsQ0FBQyw0QkFBNEIscURBQXFELENBQUMsNEdBQTRHLDhDQUE4QyxDQUFDLGNBQWMsQ0FBQyxlQUFlLENBQUMsbUJBQW1CLDhDQUE4QyxDQUFDLFVBQVUsOENBQThDLENBQUMsZ0JBQWdCLGNBQWMsQ0FBQyxlQUFlLENBQUMsaUNBQWlDLGNBQWMsQ0FBQyxxQ0FBcUMsY0FBYyxDQUFDLGNBQWMsOENBQThDLENBQUMseUNBQXlDLGdCQUFnQixDQUFDLFVBQVUsY0FBYyxDQUFDLGVBQWUsQ0FBQywrRUFBK0UsY0FBYyxDQUFDLFdBQVcsOENBQThDLENBQUMsaUJBQWlCLGNBQWMsQ0FBQyxlQUFlLENBQUMsMkJBQTJCLGNBQWMsQ0FBQyxjQUFjLDhDQUE4QyxDQUFDLG1CQUFtQixjQUFjLENBQUMscURBQXFELGNBQWMsQ0FBQyxlQUFlLENBQUMsOEJBQThCLGNBQWMsQ0FBQyxlQUFlLENBQUMsa0JBQWtCLHFEQUFxRCxDQUFDLDRCQUE0Qiw4Q0FBOEMsQ0FBQyxjQUFjLENBQUMsZUFBZSxDQUFDLDZCQUE2QixxREFBcUQsQ0FBQyxnQkFBZ0IsaUJBQWlCLENBQUMsZUFBZSxDQUFDLGlCQUFpQixDQUFDLDhDQUE4QyxDQUFDLHdCQUF3Qix3QkFBd0IsQ0FBQyxrRUFBa0UsY0FBYyxDQUFDLGlCQUFpQixDQUFDLGdGQUFnRixZQUFZLENBQUMsV0FBVyxDQUFDLG9HQUFvRyxjQUFjLENBQUMsaUJBQWlCLENBQUMsc0JBQXNCLGNBQWMsQ0FBQyxxQ0FBcUMsQ0FBQyxrTEFBa0wsbURBQTJDLENBQTNDLDJDQUEyQyxDQUFDLGdCQUFnQixDQUFDLHlIQUF5SCxtREFBMkMsQ0FBM0MsMkNBQTJDLENBQUMsZ0JBQWdCLENBQUMsOEJBQThCLGFBQWEsQ0FBQyxvQkFBb0IsQ0FBQyxzQkFBc0IsYUFBYSxDQUFDLDBCQUEwQixnQkFBZ0IsQ0FBQyxrQ0FBa0MsYUFBYSxDQUFDLG1CQUFtQixDQUFDLDBCQUEwQixDQUFDLDBEQUEwRCxxQkFBcUIsQ0FBQyx3REFBd0QsaUJBQWlCLENBQUMsb1BBQW9QLHlGQUFpRixDQUFqRixpRkFBaUYsQ0FBQywrQ0FBK0MsQ0FBQyxnQkFBZ0IsQ0FBQyxpS0FBaUssMkZBQW1GLENBQW5GLG1GQUFtRixDQUFDLCtDQUErQyxDQUFDLGdCQUFnQixDQUFDLDBKQUEwSiwyRkFBbUYsQ0FBbkYsbUZBQW1GLENBQUMsK0NBQStDLENBQUMsZ0JBQWdCLENBQUMsd0RBQXdELGFBQWEsQ0FBQyw0REFBNEQsYUFBYSxDQUFDLG9FQUFvRSxtQkFBbUIsQ0FBQywwQkFBMEIsQ0FBQyxhQUFhLG9QQUFvUCxtREFBMEMsQ0FBMUMsMkNBQTJDLENBQUMsaUtBQWlLLG1EQUEwQyxDQUExQywyQ0FBMkMsQ0FBQywwSkFBMEosa0RBQXlDLENBQXpDLDBDQUEwQyxDQUFDLENBQUMsc0RBQXNELHVCQUF1QixDQUFDLHNEQUFzRCxhQUFhLENBQUMsZ0JBQWdCLENBQUMsZ1BBQWdQLGtEQUEwQyxDQUExQywwQ0FBMEMsQ0FBQyxnQkFBZ0IsQ0FBQyx3SkFBd0osa0RBQTBDLENBQTFDLDBDQUEwQyxDQUFDLGdCQUFnQixDQUFDLHlEQUF5RCxtQkFBbUIsQ0FBQyx5REFBeUQsYUFBYSxDQUFDLGlCQUFpQixDQUFDLHNQQUFzUCxtREFBMkMsQ0FBM0MsMkNBQTJDLENBQUMsZ0JBQWdCLENBQUMsMkpBQTJKLG1EQUEyQyxDQUEzQywyQ0FBMkMsQ0FBQyxnQkFBZ0IsQ0FBQyw0Q0FBNEMsY0FBYyxDQUFDLGdFQUFnRSxrQkFBa0IsQ0FBQyxlQUFlLENBQUMsc0JBQXNCLENBQUMsYUFBYSxDQUFDLHFCQUFxQixDQUFDLDhGQUE4RixjQUFjLENBQUMsd0JBQXdCLG1CQUFtQixDQUFDLGVBQWUsOENBQThDLENBQUMsY0FBYyxDQUFDLGVBQWUsQ0FBQyw0REFBNEQsOENBQThDLENBQUMsY0FBYyxDQUFDLGtCQUFrQiw4Q0FBOEMsQ0FBQyxZQUFZLDhDQUE4QyxDQUFDLG9CQUFvQixjQUFjLENBQUMsMEJBQTBCLDhDQUE4QyxDQUFDLDZCQUE2Qiw4Q0FBOEMsQ0FBQyxjQUFjLENBQUMsZUFBZSxDQUFDLDhDQUE4Qyw4Q0FBOEMsQ0FBQyxnQkFBZ0IsY0FBYyxDQUFDLGVBQWUsQ0FBQywwQkFBMEIsZUFBZSxDQUFDLHNCQUFzQixjQUFjLENBQUMseUJBQXlCLGNBQWMsQ0FBQyxlQUFlLENBQUMsZUFBZSw4Q0FBOEMsQ0FBQyw2QkFBNkIsOENBQThDLENBQUMsY0FBYyxDQUFDLGVBQWUsQ0FBQyw2R0FBNkcscURBQXFELENBQUMsUUFBUSxDQUFDLGFBQWEsOENBQThDLENBQUMsY0FBYyxDQUFDLGVBQWUsQ0FBQyxrQkFBa0IsQ0FBQyxxQkFBcUIsY0FBYyxDQUFDLGVBQWUsQ0FBQyxrQkFBa0IsQ0FBQyxlQUFlLDhDQUE4QyxDQUFDLGlCQUFpQiw4Q0FBOEMsQ0FBQyw4QkFBOEIsY0FBYyxDQUFDLHdDQUF3QyxrQkFBa0IsQ0FBQyxlQUFlLENBQUMsc0JBQXNCLENBQUMsYUFBYSxDQUFDLHFCQUFxQixDQUFDLHVEQUF1RCxjQUFjLENBQUMsZ0NBQWdDLGNBQWMsQ0FBQywwQ0FBMEMsa0JBQWtCLENBQUMsZUFBZSxDQUFDLHNCQUFzQixDQUFDLGFBQWEsQ0FBQyxxQkFBcUIsQ0FBQyx5REFBeUQsY0FBYyxDQUFDLDhCQUE4Qiw4Q0FBOEMsQ0FBQyxjQUFjLENBQUMsZUFBZSxDQUFDLHFDQUFxQyxjQUFjLENBQUMsK0NBQStDLGtCQUFrQixDQUFDLGVBQWUsQ0FBQyxzQkFBc0IsQ0FBQyxhQUFhLENBQUMscUJBQXFCLENBQUMsOERBQThELGNBQWMsQ0FBQyx1Q0FBdUMsY0FBYyxDQUFDLGlEQUFpRCxrQkFBa0IsQ0FBQyxlQUFlLENBQUMsc0JBQXNCLENBQUMsYUFBYSxDQUFDLHFCQUFxQixDQUFDLGdFQUFnRSxjQUFjLENBQUMscUNBQXFDLDhDQUE4QyxDQUFDLGNBQWMsQ0FBQyxlQUFlLENBQUMsWUFBWSw4Q0FBOEMsQ0FBQyxjQUFjLENBQUMsb0JBQW9CLHFEQUFxRCxDQUFDLHFCQUFxQiw4Q0FBOEMsQ0FBQyxjQUFjLENBQUMsNEJBQTRCLGFBQWEsQ0FBQyxtQkFBbUIsQ0FBQyxpQkFBaUIsQ0FBQyxlQUFlLENBQUMsVUFBVSw4Q0FBOEMsQ0FBQyxxQ0FBcUMsZUFBZSxDQUFDLGNBQWMsQ0FBQyxZQUFZLGVBQWUsQ0FBQyxpQkFBaUIsQ0FBQyxpQ0FBaUMsZ0JBQWdCLENBQUMsb0JBQW9CLGlCQUFpQixDQUFDLGlCQUFpQixDQUFDLG1CQUFtQixDQUFDLDhEQUFzRCxDQUF0RCxzREFBc0QsQ0FBdEQsa0dBQXNELENBQUMsMEJBQWlCLENBQWpCLGtCQUFrQixDQUFDLGtDQUFrQyxvQkFBb0IsWUFBWSxDQUFDLENBQUMscUJBQXFCLFFBQVEsQ0FBQyxrQkFBa0IsQ0FBQyxVQUFVLENBQUMsV0FBVyxDQUFDLGVBQWUsQ0FBQyxTQUFTLENBQUMsaUJBQWlCLENBQUMsU0FBUyxDQUFDLFNBQVMsQ0FBQyx1QkFBdUIsQ0FBQyxvQkFBb0IsQ0FBQyxtREFBbUQsbUJBQW1CLENBQUMsS0FBSyxDQUFDLE1BQU0sQ0FBQyxXQUFXLENBQUMsVUFBVSxDQUFDLHVCQUF1QixjQUFjLENBQUMsWUFBWSxDQUFDLDZCQUE2QixZQUFZLENBQUMsNEJBQTRCLFlBQVksQ0FBQyxpQkFBaUIsQ0FBQyxZQUFZLENBQUMsa0JBQWtCLGlCQUFpQixDQUFDLG1CQUFtQixDQUFDLHFCQUFxQixDQUFDLFlBQVksQ0FBQyxZQUFZLENBQUMsY0FBYyxDQUFDLGVBQWUsQ0FBQyxzQkFBc0IsaUJBQWlCLENBQUMsS0FBSyxDQUFDLFFBQVEsQ0FBQyxNQUFNLENBQUMsT0FBTyxDQUFDLFlBQVksQ0FBQyxtQkFBbUIsQ0FBQyx1Q0FBdUMsQ0FBQyxpREFBaUQsQ0FBQyxTQUFTLENBQUMsbURBQW1ELFNBQVMsQ0FBQyw2Q0FBNkMsbURBQW1ELFVBQVUsQ0FBQyxDQUFDLDJCQUEyQiwwQkFBMEIsQ0FBQyxpR0FBaUcsU0FBUyxDQUFDLDZDQUE2QyxpQkFBaUIsQ0FBQyxZQUFZLENBQUMsWUFBWSxDQUFDLHFCQUFxQixDQUFDLGFBQWEsQ0FBQyxjQUFjLENBQUMsd0JBQXdCLGNBQWMsQ0FBQyxVQUFVLENBQUMsaUJBQWlCLENBQUMsaURBQXlDLElBQUksQ0FBQyxDQUE5Qyx5Q0FBeUMsSUFBSSxDQUFDLENBQUMsK0NBQXVDLElBQUksQ0FBQyxDQUE1Qyx1Q0FBdUMsSUFBSSxDQUFDLENBQUMsb0RBQW9ELG9EQUEyQyxDQUEzQyw0Q0FBNEMsQ0FBQywwREFBMEQsa0RBQXlDLENBQXpDLDBDQUEwQyxDQUFDLCtCQUErQixXQUFXLENBQUMseUNBQXlDLHFCQUFxQixDQUFDLHlCQUF5QixDQUFDLHVCQUF1QixDQUFDLGdDQUFnQyxDQUFDLG9CQUFvQiwrQkFBK0IsQ0FBQyxZQUFZLHFCQUFxQixDQUFDLHdGQUF3RiwwQkFBMEIsQ0FBQyw2RUFBNkUsMEJBQTBCLENBQUMsdUJBQXVCLDBCQUEwQixDQUFDLHFCQUFxQixDQUFDLGdDQUFnQyxxQkFBcUIsQ0FBQyxnRUFBZ0UsYUFBYSxDQUFDLCtEQUErRCxhQUFhLENBQUMsNkRBQTZELGFBQWEsQ0FBQyxvQkFBb0IscUJBQXFCLENBQUMsMkNBQTJDLHFCQUFxQixDQUFDLHFCQUFxQixxQkFBcUIsQ0FBQyw0QkFBNEIsYUFBYSxDQUFDLHdKQUF3SixrQkFBa0IsQ0FBQywwRkFBMEYsa0JBQWtCLENBQUMsb0ZBQW9GLGtCQUFrQixDQUFDLDBIQUEwSCxrQkFBa0IsQ0FBQyxrQkFBa0IsaUZBQWlGLENBQUMsa0JBQWtCLGdHQUFnRyxDQUFDLGtCQUFrQixnR0FBZ0csQ0FBQyxrQkFBa0IsZ0dBQWdHLENBQUMsa0JBQWtCLGlHQUFpRyxDQUFDLGtCQUFrQixpR0FBaUcsQ0FBQyxrQkFBa0Isa0dBQWtHLENBQUMsa0JBQWtCLHNHQUFzRyxDQUFDLGtCQUFrQixzR0FBc0csQ0FBQyxrQkFBa0Isc0dBQXNHLENBQUMsbUJBQW1CLHVHQUF1RyxDQUFDLG1CQUFtQix1R0FBdUcsQ0FBQyxtQkFBbUIsdUdBQXVHLENBQUMsbUJBQW1CLHVHQUF1RyxDQUFDLG1CQUFtQix1R0FBdUcsQ0FBQyxtQkFBbUIsdUdBQXVHLENBQUMsbUJBQW1CLHdHQUF3RyxDQUFDLG1CQUFtQix3R0FBd0csQ0FBQyxtQkFBbUIsd0dBQXdHLENBQUMsbUJBQW1CLHdHQUF3RyxDQUFDLG1CQUFtQix5R0FBeUcsQ0FBQyxtQkFBbUIseUdBQXlHLENBQUMsbUJBQW1CLHlHQUF5RyxDQUFDLG1CQUFtQix5R0FBeUcsQ0FBQyxtQkFBbUIseUdBQXlHLENBQUMsb0JBQW9CLHdCQUF3QixDQUFDLHFCQUFxQixDQUFDLHlCQUF5QixZQUFZLENBQUMsd0JBQXdCLGVBQWUsQ0FBQyxxQkFBcUIsQ0FBQyxzREFBc0QsaUdBQWlHLENBQUMsOEVBQThFLGVBQWUsQ0FBQyx3R0FBd0cscUJBQXFCLENBQUMsbUJBQW1CLFVBQVUsQ0FBQyxrQkFBa0IsQ0FBQyxrQ0FBa0MsbUJBQW1CLGlCQUFpQixDQUFDLGVBQWUsQ0FBQyxDQUFDLHFDQUFxQyxrQkFBa0IsQ0FBQyxxQkFBcUIsQ0FBQyxtQ0FBbUMsVUFBVSxDQUFDLGtCQUFrQixDQUFDLFdBQVcsaUJBQWlCLENBQUMscUNBQXFDLFlBQVksQ0FBQyx1Q0FBdUMsa0JBQWtCLENBQUMscUJBQXFCLENBQUMsbUJBQW1CLGlCQUFpQixDQUFDLGlCQUFpQixDQUFDLG9CQUFvQixDQUFDLGlCQUFpQixDQUFDLDRDQUFvQyxDQUFwQyxvQ0FBb0MsQ0FBcEMsdUVBQW9DLENBQUMsMkJBQW1CLENBQW5CLG1CQUFtQixDQUFDLGVBQWUsQ0FBQyxrQkFBa0IsQ0FBQyxzQkFBc0IsQ0FBQyxtQkFBbUIsQ0FBQyxvQ0FBb0Msc0JBQWEsQ0FBYixjQUFjLENBQUMsb0NBQW9DLFVBQVUsQ0FBQyxXQUFXLENBQUMsZ0JBQWdCLENBQUMsb0RBQW9ELFFBQVEsQ0FBQyxvREFBb0QsV0FBVyxDQUFDLHFEQUFxRCxVQUFVLENBQUMsK0RBQStELFNBQVMsQ0FBQyxXQUFXLENBQUMsb0RBQW9ELFdBQVcsQ0FBQyw4REFBOEQsVUFBVSxDQUFDLFVBQVUsQ0FBQyx1RUFBdUUsU0FBUyxDQUFDLGlGQUFpRixTQUFTLENBQUMsVUFBVSxDQUFDLHNFQUFzRSxVQUFVLENBQUMsZ0ZBQWdGLFVBQVUsQ0FBQyxTQUFTLENBQUMscUNBQXFDLFVBQVUsQ0FBQyxXQUFXLENBQUMsZ0JBQWdCLENBQUMscURBQXFELFNBQVMsQ0FBQyxxREFBcUQsWUFBWSxDQUFDLHNEQUFzRCxVQUFVLENBQUMsZ0VBQWdFLFNBQVMsQ0FBQyxXQUFXLENBQUMscURBQXFELFdBQVcsQ0FBQywrREFBK0QsVUFBVSxDQUFDLFVBQVUsQ0FBQyx3RUFBd0UsVUFBVSxDQUFDLGtGQUFrRixTQUFTLENBQUMsV0FBVyxDQUFDLHVFQUF1RSxXQUFXLENBQUMsaUZBQWlGLFVBQVUsQ0FBQyxVQUFVLENBQUMsb0NBQW9DLFVBQVUsQ0FBQyxXQUFXLENBQUMsZ0JBQWdCLENBQUMsb0RBQW9ELFNBQVMsQ0FBQyxvREFBb0QsWUFBWSxDQUFDLHFEQUFxRCxVQUFVLENBQUMsK0RBQStELFNBQVMsQ0FBQyxXQUFXLENBQUMsb0RBQW9ELFdBQVcsQ0FBQyw4REFBOEQsVUFBVSxDQUFDLFVBQVUsQ0FBQyx1RUFBdUUsVUFBVSxDQUFDLGlGQUFpRixTQUFTLENBQUMsV0FBVyxDQUFDLHNFQUFzRSxXQUFXLENBQUMsZ0ZBQWdGLFVBQVUsQ0FBQyxVQUFVLENBQUMsNEJBQTRCLHdHQUF3RyxDQUFDLGVBQWUsQ0FBQyxxQkFBcUIsQ0FBQyxpREFBaUQsYUFBYSxDQUFDLGNBQWMsQ0FBQyxxRkFBcUYsYUFBYSxDQUFDLGtGQUFrRixhQUFhLENBQUMsNEVBQTRFLGFBQWEsQ0FBQywwYkFBMGIscUJBQXFCLENBQUMsbUtBQW1LLHdCQUF3QixDQUFDLGdLQUFnSyx3QkFBd0IsQ0FBQywwSkFBMEosd0JBQXdCLENBQUMsNkpBQTZKLDRCQUE0QixDQUFDLDZHQUE2RyxVQUFVLENBQUMsNkJBQTZCLENBQUMsMEJBQTBCLGVBQWUsQ0FBQyxvQ0FBb0MsNEJBQTRCLENBQUMsMkRBQTJELHFCQUFxQixDQUFDLHFCQUFxQixDQUFDLDJHQUEyRyxVQUFVLENBQUMsdUdBQXVHLHFCQUFxQixDQUFDLCtGQUErRixVQUFVLENBQUMsb2pCQUFvakIscUJBQXFCLENBQUMsMkdBQTJHLHdCQUF3QixDQUFDLHVHQUF1Ryx3QkFBd0IsQ0FBQywrRkFBK0Ysd0JBQXdCLENBQUMsb2pCQUFvakIsZ0NBQWdDLENBQUMsMkxBQTJMLHFDQUFxQyxDQUFDLHVMQUF1TCwrQkFBK0IsQ0FBQywrS0FBK0sscUNBQXFDLENBQUMsaUdBQWlHLGlGQUFpRixDQUFDLGlEQUFpRCxnR0FBZ0csQ0FBQyx3RUFBd0Usc0dBQXNHLENBQUMsMkRBQTJELGlGQUFpRixDQUFDLG1GQUFtRixrR0FBa0csQ0FBQyxpSUFBaUksdUdBQXVHLENBQUMsdUdBQXVHLGlGQUFpRixDQUFDLHVEQUF1RCxnR0FBZ0csQ0FBQyxpSEFBaUgsZUFBZSxDQUFDLG1CQUFtQixxQkFBcUIsQ0FBQyxvREFBb0QsZ0NBQWdDLENBQUMsdUNBQXVDLHFCQUFxQixDQUFDLGVBQWUsQ0FBQyx3RUFBd0UscUJBQXFCLENBQUMsbUZBQW1GLHFDQUFxQyxDQUFDLDZGQUE2RixnQkFBZ0IsQ0FBQyxzQ0FBc0MsQ0FBQyw4R0FBOEcsZ0JBQWdCLENBQUMsaUJBQWlCLENBQUMsb0NBQW9DLENBQUMsMkJBQTJCLHdCQUF3QixDQUFDLHFCQUFxQixDQUFDLGlFQUFpRSxxQkFBcUIsQ0FBQyw0QkFBNEIscUJBQXFCLENBQUMscUJBQXFCLENBQUMsa0VBQWtFLGVBQWUsQ0FBQyxzREFBc0Qsd0JBQXdCLENBQUMsaUhBQWlILGdDQUFnQyxDQUFDLFVBQVUsZUFBZSxDQUFDLHFCQUFxQixDQUFDLHdDQUF3QyxnR0FBZ0csQ0FBQyxzREFBc0QsaUZBQWlGLENBQUMsbUJBQW1CLHFCQUFxQixDQUFDLG9CQUFvQiw0QkFBNEIsQ0FBQyx3QkFBd0IsWUFBWSxDQUFDLDZCQUE2Qix3QkFBd0IsQ0FBQywwQ0FBMEMsNkJBQTZCLHFCQUFxQixDQUFDLENBQUMsd0JBQXdCLHdCQUF3QixDQUFDLDRIQUE0SCx3QkFBd0IsQ0FBQywwSEFBMEgsd0JBQXdCLENBQUMsc0hBQXNILHdCQUF3QixDQUFDLGdKQUFnSix3QkFBd0IsQ0FBQyxzRUFBc0Usb0JBQW9CLENBQUMsMkNBQTJDLHFCQUFxQixDQUFDLGtDQUFrQyx1QkFBdUIsVUFBVSxDQUFDLENBQUMsa0NBQWtDLHlCQUF5QixjQUFjLENBQUMsQ0FBQywrRkFBK0Ysd0JBQXdCLENBQUMsOEZBQThGLHdCQUF3QixDQUFDLDRGQUE0Rix3QkFBd0IsQ0FBQyw0QkFBNEIsd0JBQXdCLENBQUMscUJBQXFCLENBQUMsNkNBQTZDLHFCQUFxQixDQUFDLFVBQVUsQ0FBQywyREFBMkQsZ0dBQWdHLENBQUMsMkVBQTJFLFdBQVcsQ0FBQyw4Q0FBOEMsVUFBVSxDQUFDLG1DQUFtQyxlQUFlLENBQUMsMERBQTBELHdCQUF3QixDQUFDLFVBQVUsQ0FBQywyRUFBMkUsVUFBVSxDQUFDLFVBQVUsQ0FBQyw4RUFBOEUsK0JBQStCLENBQUMsdURBQXVELHdCQUF3QixDQUFDLFVBQVUsQ0FBQyx3RUFBd0UsVUFBVSxDQUFDLFVBQVUsQ0FBQywyRUFBMkUsK0JBQStCLENBQUMseURBQXlELHdCQUF3QixDQUFDLHFCQUFxQixDQUFDLDBFQUEwRSxxQkFBcUIsQ0FBQyxVQUFVLENBQUMsNkVBQTZFLHlCQUF5QixDQUFDLFdBQVcsZUFBZSxDQUFDLHVKQUF1SixrQkFBa0IsQ0FBQyx3RkFBd0YsbUNBQW1DLENBQUMsaUJBQWlCLHFCQUFxQixDQUFDLDJCQUEyQixxQkFBcUIsQ0FBQyxvQkFBb0IsZ0NBQWdDLENBQUMsK0hBQStILHFCQUFxQixDQUFDLDJCQUEyQixxQkFBcUIsQ0FBQywwQ0FBMEMsMEJBQTBCLENBQUMseUJBQXlCLHFCQUFxQixDQUFDLGdDQUFnQyxxQkFBcUIsQ0FBQyx3QkFBd0IsQ0FBQyw2RkFBNkYscUJBQXFCLENBQUMsaVdBQWlXLGdDQUFnQyxDQUFDLDBEQUEwRCw0QkFBNEIsQ0FBQyxzRkFBc0YsNEJBQTRCLENBQUMsNEJBQTRCLHdCQUF3QixDQUFDLFVBQVUsQ0FBQyx3REFBd0Qsb0NBQW9DLENBQUMsb0RBQW9ELCtCQUErQixDQUFDLHdCQUF3QixpR0FBaUcsQ0FBQyxxQkFBcUIsQ0FBQyxxQkFBcUIsQ0FBQywrREFBK0Qsd0JBQXdCLENBQUMscUJBQXFCLENBQUMsMkZBQTJGLG9DQUFvQyxDQUFDLHVGQUF1RiwwQ0FBMEMsQ0FBQyw2REFBNkQsd0JBQXdCLENBQUMsVUFBVSxDQUFDLHlGQUF5RixtQ0FBbUMsQ0FBQyxxRkFBcUYsK0JBQStCLENBQUMsOEJBQThCLGlGQUFpRixDQUFDLDhCQUE4QixhQUFhLENBQUMseUNBQXlDLGFBQWEsQ0FBQyx1Q0FBdUMsYUFBYSxDQUFDLHNCQUFzQix5R0FBeUcsQ0FBQyxlQUFlLENBQUMscUJBQXFCLENBQUMsYUFBYSxnQ0FBZ0MsQ0FBQyxzQkFBc0Isa0NBQWtDLENBQUMscUJBQXFCLGVBQWUsQ0FBQyxxQkFBcUIsQ0FBQyxtREFBbUQsZ0dBQWdHLENBQUMsZ0JBQWdCLGdDQUFnQyxDQUFDLHlVQUF5VSwwQkFBMEIsQ0FBQyxvQkFBb0Isb0dBQW9HLGVBQWUsQ0FBQyxDQUFDLGtDQUFrQyxxQkFBcUIsQ0FBQyx3RUFBd0UscUJBQXFCLENBQUMsZ0RBQWdELHFCQUFxQixDQUFDLDBLQUEwSyxhQUFhLENBQUMsc0JBQXNCLG9CQUFvQixDQUFDLFVBQVUsb0JBQW9CLENBQUMsa0RBQWtELGFBQWEsQ0FBQyw2REFBNkQsYUFBYSxDQUFDLDJEQUEyRCxhQUFhLENBQUMsNkNBQTZDLGFBQWEsQ0FBQyx1QkFBdUIsZ0NBQWdDLENBQUMsbURBQW1ELHdCQUF3QixDQUFDLDhEQUE4RCx3QkFBd0IsQ0FBQyw0REFBNEQsd0JBQXdCLENBQUMsNkdBQTZHLGFBQWEsQ0FBQyx3SEFBd0gsYUFBYSxDQUFDLHNIQUFzSCxhQUFhLENBQUMsNkRBQTZELGFBQWEsQ0FBQyxxS0FBcUssYUFBYSxDQUFDLHVJQUF1SSx3QkFBd0IsQ0FBQyxXQUFXLGFBQWEsQ0FBQyx3REFBd0QscUJBQXFCLENBQUMsNENBQTRDLHFCQUFxQixDQUFDLDREQUE0RCxnQ0FBZ0MsQ0FBQyxvRkFBb0YsOEZBQThGLENBQUMsd0JBQXdCLENBQUMsMEJBQTBCLENBQUMsOERBQThELGdDQUFnQyxDQUFDLHNGQUFzRiw4RkFBOEYsQ0FBQyx3QkFBd0IsQ0FBQywwQkFBMEIsQ0FBQyxxREFBcUQsZ0NBQWdDLENBQUMsNkVBQTZFLGdDQUFnQyxDQUFDLGtFQUFrRSxnQ0FBZ0MsQ0FBQyw4RUFBOEUscUJBQXFCLENBQUMsMEZBQTBGLDRCQUE0QixDQUFDLDJEQUEyRCxxQkFBcUIsQ0FBQyxpRUFBaUUscUJBQXFCLENBQUMsNkVBQTZFLGFBQWEsQ0FBQyx3RkFBd0YsYUFBYSxDQUFDLHNGQUFzRixhQUFhLENBQUMsK0dBQStHLGFBQWEsQ0FBQyxpRkFBaUYscUJBQXFCLENBQUMsbUZBQW1GLHFCQUFxQixDQUFDLHNCQUFzQixhQUFhLENBQUMscUJBQXFCLGFBQWEsQ0FBQyxtQkFBbUIsYUFBYSxDQUFDLG9FQUFvRSxxQkFBcUIsQ0FBQyx3SEFBd0gscUJBQXFCLENBQUMsbUJBQW1CLG1CQUFtQixDQUFDLDhDQUFnQyxxQkFBcUIsQ0FBckQseUNBQWdDLHFCQUFxQixDQUFyRCwwQ0FBZ0MscUJBQXFCLENBQXJELGdDQUFnQyxxQkFBcUIsQ0FBQyxxQ0FBcUMscUJBQXFCLENBQUMsOENBQThDLHFCQUFxQixDQUFDLHlDQUF5QyxxQkFBcUIsQ0FBQywrQkFBK0IsbUJBQW1CLENBQUMsd0VBQXdFLG1CQUFtQixDQUFDLDJGQUEyRixhQUFhLENBQUMsOEJBQThCLHFCQUFxQixDQUFDLGdDQUFnQyxxQkFBcUIsQ0FBQyw4QkFBOEIscUJBQXFCLENBQUMsd0JBQXdCLHFCQUFxQixDQUFDLG9IQUFvSCwwQkFBMEIsQ0FBQyxnQkFBZ0IsZUFBZSxDQUFDLDhDQUE4QyxpR0FBaUcsQ0FBQyxlQUFlLGNBQWMsQ0FBQyxxQkFBcUIsQ0FBQyx5REFBeUQscUJBQXFCLENBQUMsd0VBQXdFLHFCQUFxQixDQUFDLHVMQUF1TCwwQkFBMEIsQ0FBQyxlQUFlLGVBQWUsQ0FBQyw0REFBNEQscUJBQXFCLENBQUMsa0RBQWtELG9DQUFvQyxDQUFDLHNDQUFzQyxDQUFDLHlDQUF5QyxvQ0FBb0MsQ0FBQyx1TUFBdU0sNEJBQTRCLENBQUMsNkJBQTZCLFlBQVksQ0FBQyx5QkFBeUIsd0JBQXdCLENBQUMsOEJBQThCLHdCQUF3QixDQUFDLDBEQUEwRCxZQUFZLENBQUMsc0RBQXNELHdCQUF3QixDQUFDLDJEQUEyRCx3QkFBd0IsQ0FBQyx3REFBd0QsWUFBWSxDQUFDLG9EQUFvRCx3QkFBd0IsQ0FBQyx5REFBeUQsd0JBQXdCLENBQUMsaURBQWlELGNBQWMsQ0FBQyx1RUFBdUUsY0FBYyxDQUFDLG1FQUFtRSxjQUFjLENBQUMsd0JBQXdCLDRCQUE0QixDQUFDLHdFQUF3RSxvQkFBb0IsQ0FBQywyU0FBMlMsd0JBQXdCLENBQUMsdUVBQXVFLG9CQUFvQixDQUFDLHVTQUF1Uyx3QkFBd0IsQ0FBQyxxRUFBcUUsb0JBQW9CLENBQUMsK1JBQStSLHdCQUF3QixDQUFDLDRJQUE0SSw0QkFBNEIsQ0FBQyx3SUFBd0ksZ0NBQWdDLENBQUMsOERBQThELHFCQUFxQixDQUFDLHNDQUFzQyxxQkFBcUIsQ0FBQyxrQkFBa0IscUJBQXFCLENBQUMsd0JBQXdCLHFCQUFxQixDQUFDLHVDQUF1QyxxQkFBcUIsQ0FBQyxrQkFBa0IscUJBQXFCLENBQUMsa0JBQWtCLGVBQWUsQ0FBQyxnREFBZ0QsaUdBQWlHLENBQUMscUVBQXFFLDBCQUEwQixDQUFDLDBEQUEwRCxhQUFhLENBQUMseURBQXlELGFBQWEsQ0FBQyx1REFBdUQsYUFBYSxDQUFDLGlFQUFpRSxhQUFhLENBQUMsa0VBQWtFLHFCQUFxQixDQUFDLHNCQUFzQix3QkFBd0IsQ0FBQyxxQkFBcUIsQ0FBQyxZQUFZLHFCQUFxQixDQUFDLHFCQUFxQixDQUFDLDRCQUE0QixxQkFBcUIsQ0FBQyxrQ0FBa0Msd0dBQXdHLENBQUMsaUJBQWlCLHNDQUFzQyxDQUFDLGdDQUFnQyxxQ0FBcUMsQ0FBQyxpQkFBaUIsQ0FBQywyQkFBMkIscUNBQXFDLENBQUMsaUJBQWlCLENBQUMsMENBQTBDLGdCQUFnQixDQUFDLHNDQUFzQyxDQUFDLHNDQUFzQywrQkFBK0IsQ0FBQyxzREFBc0Qsd0JBQXdCLENBQUMsb0RBQW9ELHFDQUFxQyxDQUFDLGtEQUFrRCx3QkFBd0IsQ0FBQyxrRUFBa0Usd0JBQXdCLENBQUMsZ0VBQWdFLHFDQUFxQyxDQUFDLDhEQUE4RCx3QkFBd0IsQ0FBQywrREFBK0Qsd0JBQXdCLENBQUMsNkRBQTZELG9DQUFvQyxDQUFDLDJEQUEyRCx3QkFBd0IsQ0FBQyx3REFBd0QscUJBQXFCLENBQUMsd0JBQXdCLGdHQUFnRyxDQUFDLHdCQUF3QixDQUFDLHNCQUFzQixnQ0FBZ0MsQ0FBQyw2QkFBNkIsZ0NBQWdDLENBQUMsd0dBQXdHLHdCQUF3QixDQUFDLDBDQUEwQyxVQUFVLENBQUMscUdBQXFHLHdCQUF3QixDQUFDLHlDQUF5QyxxQkFBcUIsQ0FBQywrRkFBK0Ysd0JBQXdCLENBQUMsdUNBQXVDLFVBQVUsQ0FBQyx1QkFBdUIsb0NBQW9DLENBQUMseUZBQXlGLGdDQUFnQyxDQUFDLHFJQUFxSSxnQ0FBZ0MsQ0FBQyx3REFBd0QsZ0NBQWdDLENBQUMsNkNBQTZDLGdDQUFnQyxDQUFDLG9KQUFvSixnQ0FBZ0MsQ0FBQyw0S0FBNEssZ0NBQWdDLENBQUMsNkVBQTZFLDRCQUE0QixDQUFDLDRCQUE0QixDQUFDLDRLQUE0Syw0QkFBNEIsQ0FBQyxvTkFBb04sNEJBQTRCLENBQUMsaURBQWlELDJCQUEyQixDQUFDLHlDQUF5QyxnSEFBZ0gsQ0FBQyxxSEFBcUgsQ0FBQyx1Q0FBdUMsaUhBQWlILENBQUMsa0dBQWtHLGdDQUFnQyxDQUFDLG9CQUFvQix1QkFBdUIsY0FBYyxDQUFDLENBQUMscUVBQXFFLHFCQUFxQixDQUFDLGdDQUFnQyxnQ0FBZ0MsQ0FBQyxVQUFVLENBQUMsK0hBQStILHdCQUF3QixDQUFDLFVBQVUsQ0FBQyw0Q0FBNEMsNEJBQTRCLENBQUMsYUFBYSxDQUFDLHVEQUF1RCxxQkFBcUIsQ0FBQyxzREFBc0QsYUFBYSxDQUFDLDhDQUE4QyxxQkFBcUIsQ0FBQyxtQ0FBbUMsaUNBQWlDLENBQUMsMEdBQTBHLGdDQUFnQyxDQUFDLHVCQUF1QixhQUFhLENBQUMsaUNBQWlDLHVDQUF1QyxDQUFDLCtGQUErRixvQ0FBb0MsQ0FBQyxrQkFBa0IsQ0FBQyw2QkFBNkIscUJBQXFCLENBQUMsK0RBQStELHFCQUFxQixDQUFDLG1DQUFtQyw0QkFBNEIsQ0FBQyx1RUFBdUUsNEJBQTRCLENBQUMsZ0dBQWdHLGtCQUFrQixDQUFDLGVBQWUsQ0FBQyxnckJBQWdyQixxQ0FBcUMsQ0FBQyxrRkFBa0Ysd0JBQXdCLENBQUMsZ0lBQWdJLHFCQUFxQixDQUFDLHdxQkFBd3FCLHFDQUFxQyxDQUFDLGdGQUFnRix3QkFBd0IsQ0FBQyw0SEFBNEgsZ0NBQWdDLENBQUMsd3BCQUF3cEIscUNBQXFDLENBQUMsNEVBQTRFLHdCQUF3QixDQUFDLG9IQUFvSCxxQkFBcUIsQ0FBQyx3d0JBQXd3QixxQ0FBcUMsQ0FBQywwTkFBME4sd0JBQXdCLENBQUMsc05BQXNOLFVBQVUsQ0FBQywwUkFBMFIsMEJBQTBCLENBQUMsb0pBQW9KLGlCQUFpQixDQUFDLDROQUE0TixpQ0FBaUMsQ0FBQyxzSEFBc0gsc0NBQXNDLENBQUMsZ3dCQUFnd0IscUNBQXFDLENBQUMsc05BQXNOLHdCQUF3QixDQUFDLGtOQUFrTixxQkFBcUIsQ0FBQyxzUkFBc1Isb0JBQW9CLENBQUMsa0pBQWtKLDRCQUE0QixDQUFDLDBOQUEwTiwyQkFBMkIsQ0FBQyxvSEFBb0gsZ0NBQWdDLENBQUMsZ3ZCQUFndkIscUNBQXFDLENBQUMsOE1BQThNLHdCQUF3QixDQUFDLDBNQUEwTSxVQUFVLENBQUMsOFFBQThRLDBCQUEwQixDQUFDLDhJQUE4SSxpQkFBaUIsQ0FBQyxzTkFBc04saUNBQWlDLENBQUMsZ0hBQWdILHNDQUFzQyxDQUFDLGFBQWEsa0JBQWtCLENBQUMscUJBQXFCLENBQUMseUJBQXlCLGtCQUFrQixDQUFDLFVBQVUsQ0FBQyx3QkFBd0Isa0JBQWtCLENBQUMscUJBQXFCLENBQUMsc0JBQXNCLGtCQUFrQixDQUFDLFVBQVUsQ0FBQyw0SEFBNEgsNkJBQTZCLENBQUMsNE1BQTRNLGFBQWEsQ0FBQyxnQ0FBZ0Msd0JBQXdCLENBQUMsYUFBYSw0QkFBNEIsQ0FBQyxVQUFVLGVBQWUsQ0FBQyxxQ0FBcUMscUJBQXFCLENBQUMseUJBQXlCLDBCQUEwQixDQUFDLGtCQUFrQixDQUFDLGtHQUFrRyxDQUFDLDRCQUE0QixhQUFhIiwiZmlsZSI6InNyYy9hcHAvY29tcG9uZW50cy9uYXRpdmUtc2V0dGluZy1kaWFsb2cvbmF0aXZlLXNldHRpbmctZGlhbG9nLmNvbXBvbmVudC5zY3NzIiwic291cmNlc0NvbnRlbnQiOlsiLm1hdC1iYWRnZS1jb250ZW50e2ZvbnQtd2VpZ2h0OjYwMDtmb250LXNpemU6MTJweDtmb250LWZhbWlseTpSb2JvdG8sXCJIZWx2ZXRpY2EgTmV1ZVwiLHNhbnMtc2VyaWZ9Lm1hdC1iYWRnZS1zbWFsbCAubWF0LWJhZGdlLWNvbnRlbnR7Zm9udC1zaXplOjZweH0ubWF0LWJhZGdlLWxhcmdlIC5tYXQtYmFkZ2UtY29udGVudHtmb250LXNpemU6MjRweH0ubWF0LWgxLC5tYXQtaGVhZGxpbmUsLm1hdC10eXBvZ3JhcGh5IGgxe2ZvbnQ6NDAwIDI0cHgvMzJweCBSb2JvdG8sXCJIZWx2ZXRpY2EgTmV1ZVwiLHNhbnMtc2VyaWY7bWFyZ2luOjAgMCAxNnB4fS5tYXQtaDIsLm1hdC10aXRsZSwubWF0LXR5cG9ncmFwaHkgaDJ7Zm9udDo1MDAgMjBweC8zMnB4IFJvYm90byxcIkhlbHZldGljYSBOZXVlXCIsc2Fucy1zZXJpZjttYXJnaW46MCAwIDE2cHh9Lm1hdC1oMywubWF0LXN1YmhlYWRpbmctMiwubWF0LXR5cG9ncmFwaHkgaDN7Zm9udDo0MDAgMTZweC8yOHB4IFJvYm90byxcIkhlbHZldGljYSBOZXVlXCIsc2Fucy1zZXJpZjttYXJnaW46MCAwIDE2cHh9Lm1hdC1oNCwubWF0LXN1YmhlYWRpbmctMSwubWF0LXR5cG9ncmFwaHkgaDR7Zm9udDo0MDAgMTVweC8yNHB4IFJvYm90byxcIkhlbHZldGljYSBOZXVlXCIsc2Fucy1zZXJpZjttYXJnaW46MCAwIDE2cHh9Lm1hdC1oNSwubWF0LXR5cG9ncmFwaHkgaDV7Zm9udDo0MDAgMTEuNjJweC8yMHB4IFJvYm90byxcIkhlbHZldGljYSBOZXVlXCIsc2Fucy1zZXJpZjttYXJnaW46MCAwIDEycHh9Lm1hdC1oNiwubWF0LXR5cG9ncmFwaHkgaDZ7Zm9udDo0MDAgOS4zOHB4LzIwcHggUm9ib3RvLFwiSGVsdmV0aWNhIE5ldWVcIixzYW5zLXNlcmlmO21hcmdpbjowIDAgMTJweH0ubWF0LWJvZHktMiwubWF0LWJvZHktc3Ryb25ne2ZvbnQ6NTAwIDE0cHgvMjRweCBSb2JvdG8sXCJIZWx2ZXRpY2EgTmV1ZVwiLHNhbnMtc2VyaWZ9Lm1hdC1ib2R5LC5tYXQtYm9keS0xLC5tYXQtdHlwb2dyYXBoeXtmb250OjQwMCAxNHB4LzIwcHggUm9ib3RvLFwiSGVsdmV0aWNhIE5ldWVcIixzYW5zLXNlcmlmfS5tYXQtYm9keSBwLC5tYXQtYm9keS0xIHAsLm1hdC10eXBvZ3JhcGh5IHB7bWFyZ2luOjAgMCAxMnB4fS5tYXQtY2FwdGlvbiwubWF0LXNtYWxse2ZvbnQ6NDAwIDEycHgvMjBweCBSb2JvdG8sXCJIZWx2ZXRpY2EgTmV1ZVwiLHNhbnMtc2VyaWZ9Lm1hdC1kaXNwbGF5LTQsLm1hdC10eXBvZ3JhcGh5IC5tYXQtZGlzcGxheS00e2ZvbnQ6MzAwIDExMnB4LzExMnB4IFJvYm90byxcIkhlbHZldGljYSBOZXVlXCIsc2Fucy1zZXJpZjttYXJnaW46MCAwIDU2cHg7bGV0dGVyLXNwYWNpbmc6LS4wNWVtfS5tYXQtZGlzcGxheS0zLC5tYXQtdHlwb2dyYXBoeSAubWF0LWRpc3BsYXktM3tmb250OjQwMCA1NnB4LzU2cHggUm9ib3RvLFwiSGVsdmV0aWNhIE5ldWVcIixzYW5zLXNlcmlmO21hcmdpbjowIDAgNjRweDtsZXR0ZXItc3BhY2luZzotLjAyZW19Lm1hdC1kaXNwbGF5LTIsLm1hdC10eXBvZ3JhcGh5IC5tYXQtZGlzcGxheS0ye2ZvbnQ6NDAwIDQ1cHgvNDhweCBSb2JvdG8sXCJIZWx2ZXRpY2EgTmV1ZVwiLHNhbnMtc2VyaWY7bWFyZ2luOjAgMCA2NHB4O2xldHRlci1zcGFjaW5nOi0uMDA1ZW19Lm1hdC1kaXNwbGF5LTEsLm1hdC10eXBvZ3JhcGh5IC5tYXQtZGlzcGxheS0xe2ZvbnQ6NDAwIDM0cHgvNDBweCBSb2JvdG8sXCJIZWx2ZXRpY2EgTmV1ZVwiLHNhbnMtc2VyaWY7bWFyZ2luOjAgMCA2NHB4fS5tYXQtYm90dG9tLXNoZWV0LWNvbnRhaW5lcntmb250OjQwMCAxNHB4LzIwcHggUm9ib3RvLFwiSGVsdmV0aWNhIE5ldWVcIixzYW5zLXNlcmlmfS5tYXQtYnV0dG9uLC5tYXQtZmFiLC5tYXQtZmxhdC1idXR0b24sLm1hdC1pY29uLWJ1dHRvbiwubWF0LW1pbmktZmFiLC5tYXQtcmFpc2VkLWJ1dHRvbiwubWF0LXN0cm9rZWQtYnV0dG9ue2ZvbnQtZmFtaWx5OlJvYm90byxcIkhlbHZldGljYSBOZXVlXCIsc2Fucy1zZXJpZjtmb250LXNpemU6MTRweDtmb250LXdlaWdodDo1MDB9Lm1hdC1idXR0b24tdG9nZ2xle2ZvbnQtZmFtaWx5OlJvYm90byxcIkhlbHZldGljYSBOZXVlXCIsc2Fucy1zZXJpZn0ubWF0LWNhcmR7Zm9udC1mYW1pbHk6Um9ib3RvLFwiSGVsdmV0aWNhIE5ldWVcIixzYW5zLXNlcmlmfS5tYXQtY2FyZC10aXRsZXtmb250LXNpemU6MjRweDtmb250LXdlaWdodDo1MDB9Lm1hdC1jYXJkLWhlYWRlciAubWF0LWNhcmQtdGl0bGV7Zm9udC1zaXplOjIwcHh9Lm1hdC1jYXJkLWNvbnRlbnQsLm1hdC1jYXJkLXN1YnRpdGxle2ZvbnQtc2l6ZToxNHB4fS5tYXQtY2hlY2tib3h7Zm9udC1mYW1pbHk6Um9ib3RvLFwiSGVsdmV0aWNhIE5ldWVcIixzYW5zLXNlcmlmfS5tYXQtY2hlY2tib3gtbGF5b3V0IC5tYXQtY2hlY2tib3gtbGFiZWx7bGluZS1oZWlnaHQ6MjRweH0ubWF0LWNoaXB7Zm9udC1zaXplOjE0cHg7Zm9udC13ZWlnaHQ6NTAwfS5tYXQtY2hpcCAubWF0LWNoaXAtcmVtb3ZlLm1hdC1pY29uLC5tYXQtY2hpcCAubWF0LWNoaXAtdHJhaWxpbmctaWNvbi5tYXQtaWNvbntmb250LXNpemU6MThweH0ubWF0LXRhYmxle2ZvbnQtZmFtaWx5OlJvYm90byxcIkhlbHZldGljYSBOZXVlXCIsc2Fucy1zZXJpZn0ubWF0LWhlYWRlci1jZWxse2ZvbnQtc2l6ZToxMnB4O2ZvbnQtd2VpZ2h0OjUwMH0ubWF0LWNlbGwsLm1hdC1mb290ZXItY2VsbHtmb250LXNpemU6MTRweH0ubWF0LWNhbGVuZGFye2ZvbnQtZmFtaWx5OlJvYm90byxcIkhlbHZldGljYSBOZXVlXCIsc2Fucy1zZXJpZn0ubWF0LWNhbGVuZGFyLWJvZHl7Zm9udC1zaXplOjEzcHh9Lm1hdC1jYWxlbmRhci1ib2R5LWxhYmVsLC5tYXQtY2FsZW5kYXItcGVyaW9kLWJ1dHRvbntmb250LXNpemU6MTRweDtmb250LXdlaWdodDo1MDB9Lm1hdC1jYWxlbmRhci10YWJsZS1oZWFkZXIgdGh7Zm9udC1zaXplOjExcHg7Zm9udC13ZWlnaHQ6NDAwfS5tYXQtZGlhbG9nLXRpdGxle2ZvbnQ6NTAwIDIwcHgvMzJweCBSb2JvdG8sXCJIZWx2ZXRpY2EgTmV1ZVwiLHNhbnMtc2VyaWZ9Lm1hdC1leHBhbnNpb24tcGFuZWwtaGVhZGVye2ZvbnQtZmFtaWx5OlJvYm90byxcIkhlbHZldGljYSBOZXVlXCIsc2Fucy1zZXJpZjtmb250LXNpemU6MTVweDtmb250LXdlaWdodDo0MDB9Lm1hdC1leHBhbnNpb24tcGFuZWwtY29udGVudHtmb250OjQwMCAxNHB4LzIwcHggUm9ib3RvLFwiSGVsdmV0aWNhIE5ldWVcIixzYW5zLXNlcmlmfS5tYXQtZm9ybS1maWVsZHtmb250LXNpemU6aW5oZXJpdDtmb250LXdlaWdodDo0MDA7bGluZS1oZWlnaHQ6MS4xMjU7Zm9udC1mYW1pbHk6Um9ib3RvLFwiSGVsdmV0aWNhIE5ldWVcIixzYW5zLXNlcmlmfS5tYXQtZm9ybS1maWVsZC13cmFwcGVye3BhZGRpbmctYm90dG9tOjEuMzQzNzVlbX0ubWF0LWZvcm0tZmllbGQtcHJlZml4IC5tYXQtaWNvbiwubWF0LWZvcm0tZmllbGQtc3VmZml4IC5tYXQtaWNvbntmb250LXNpemU6MTUwJTtsaW5lLWhlaWdodDoxLjEyNX0ubWF0LWZvcm0tZmllbGQtcHJlZml4IC5tYXQtaWNvbi1idXR0b24sLm1hdC1mb3JtLWZpZWxkLXN1ZmZpeCAubWF0LWljb24tYnV0dG9ue2hlaWdodDoxLjVlbTt3aWR0aDoxLjVlbX0ubWF0LWZvcm0tZmllbGQtcHJlZml4IC5tYXQtaWNvbi1idXR0b24gLm1hdC1pY29uLC5tYXQtZm9ybS1maWVsZC1zdWZmaXggLm1hdC1pY29uLWJ1dHRvbiAubWF0LWljb257aGVpZ2h0OjEuMTI1ZW07bGluZS1oZWlnaHQ6MS4xMjV9Lm1hdC1mb3JtLWZpZWxkLWluZml4e3BhZGRpbmc6LjVlbSAwO2JvcmRlci10b3A6Ljg0Mzc1ZW0gc29saWQgdHJhbnNwYXJlbnR9Lm1hdC1mb3JtLWZpZWxkLWNhbi1mbG9hdCAubWF0LWlucHV0LXNlcnZlcjpmb2N1cysubWF0LWZvcm0tZmllbGQtbGFiZWwtd3JhcHBlciAubWF0LWZvcm0tZmllbGQtbGFiZWwsLm1hdC1mb3JtLWZpZWxkLWNhbi1mbG9hdC5tYXQtZm9ybS1maWVsZC1zaG91bGQtZmxvYXQgLm1hdC1mb3JtLWZpZWxkLWxhYmVse3RyYW5zZm9ybTp0cmFuc2xhdGVZKC0xLjM0Mzc1ZW0pIHNjYWxlKC43NSk7d2lkdGg6MTMzLjMzMzMzJX0ubWF0LWZvcm0tZmllbGQtY2FuLWZsb2F0IC5tYXQtaW5wdXQtc2VydmVyW2xhYmVsXTpub3QoOmxhYmVsLXNob3duKSsubWF0LWZvcm0tZmllbGQtbGFiZWwtd3JhcHBlciAubWF0LWZvcm0tZmllbGQtbGFiZWx7dHJhbnNmb3JtOnRyYW5zbGF0ZVkoLTEuMzQzNzRlbSkgc2NhbGUoLjc1KTt3aWR0aDoxMzMuMzMzMzQlfS5tYXQtZm9ybS1maWVsZC1sYWJlbC13cmFwcGVye3RvcDotLjg0Mzc1ZW07cGFkZGluZy10b3A6Ljg0Mzc1ZW19Lm1hdC1mb3JtLWZpZWxkLWxhYmVse3RvcDoxLjM0Mzc1ZW19Lm1hdC1mb3JtLWZpZWxkLXVuZGVybGluZXtib3R0b206MS4zNDM3NWVtfS5tYXQtZm9ybS1maWVsZC1zdWJzY3JpcHQtd3JhcHBlcntmb250LXNpemU6NzUlO21hcmdpbi10b3A6LjY2NjY3ZW07dG9wOmNhbGMoMTAwJSAtIDEuNzkxNjdlbSl9Lm1hdC1mb3JtLWZpZWxkLWFwcGVhcmFuY2UtbGVnYWN5IC5tYXQtZm9ybS1maWVsZC13cmFwcGVye3BhZGRpbmctYm90dG9tOjEuMjVlbX0ubWF0LWZvcm0tZmllbGQtYXBwZWFyYW5jZS1sZWdhY3kgLm1hdC1mb3JtLWZpZWxkLWluZml4e3BhZGRpbmc6LjQzNzVlbSAwfS5tYXQtZm9ybS1maWVsZC1hcHBlYXJhbmNlLWxlZ2FjeS5tYXQtZm9ybS1maWVsZC1jYW4tZmxvYXQgLm1hdC1pbnB1dC1zZXJ2ZXI6Zm9jdXMrLm1hdC1mb3JtLWZpZWxkLWxhYmVsLXdyYXBwZXIgLm1hdC1mb3JtLWZpZWxkLWxhYmVsLC5tYXQtZm9ybS1maWVsZC1hcHBlYXJhbmNlLWxlZ2FjeS5tYXQtZm9ybS1maWVsZC1jYW4tZmxvYXQubWF0LWZvcm0tZmllbGQtc2hvdWxkLWZsb2F0IC5tYXQtZm9ybS1maWVsZC1sYWJlbHt0cmFuc2Zvcm06dHJhbnNsYXRlWSgtMS4yODEyNWVtKSBzY2FsZSguNzUpIHBlcnNwZWN0aXZlKDEwMHB4KSB0cmFuc2xhdGVaKC4wMDFweCk7LW1zLXRyYW5zZm9ybTp0cmFuc2xhdGVZKC0xLjI4MTI1ZW0pIHNjYWxlKC43NSk7d2lkdGg6MTMzLjMzMzMzJX0ubWF0LWZvcm0tZmllbGQtYXBwZWFyYW5jZS1sZWdhY3kubWF0LWZvcm0tZmllbGQtY2FuLWZsb2F0IC5tYXQtZm9ybS1maWVsZC1hdXRvZmlsbC1jb250cm9sOi13ZWJraXQtYXV0b2ZpbGwrLm1hdC1mb3JtLWZpZWxkLWxhYmVsLXdyYXBwZXIgLm1hdC1mb3JtLWZpZWxkLWxhYmVse3RyYW5zZm9ybTp0cmFuc2xhdGVZKC0xLjI4MTI1ZW0pIHNjYWxlKC43NSkgcGVyc3BlY3RpdmUoMTAwcHgpIHRyYW5zbGF0ZVooLjAwMTAxcHgpOy1tcy10cmFuc2Zvcm06dHJhbnNsYXRlWSgtMS4yODEyNGVtKSBzY2FsZSguNzUpO3dpZHRoOjEzMy4zMzMzNCV9Lm1hdC1mb3JtLWZpZWxkLWFwcGVhcmFuY2UtbGVnYWN5Lm1hdC1mb3JtLWZpZWxkLWNhbi1mbG9hdCAubWF0LWlucHV0LXNlcnZlcltsYWJlbF06bm90KDpsYWJlbC1zaG93bikrLm1hdC1mb3JtLWZpZWxkLWxhYmVsLXdyYXBwZXIgLm1hdC1mb3JtLWZpZWxkLWxhYmVse3RyYW5zZm9ybTp0cmFuc2xhdGVZKC0xLjI4MTI1ZW0pIHNjYWxlKC43NSkgcGVyc3BlY3RpdmUoMTAwcHgpIHRyYW5zbGF0ZVooLjAwMTAycHgpOy1tcy10cmFuc2Zvcm06dHJhbnNsYXRlWSgtMS4yODEyM2VtKSBzY2FsZSguNzUpO3dpZHRoOjEzMy4zMzMzNSV9Lm1hdC1mb3JtLWZpZWxkLWFwcGVhcmFuY2UtbGVnYWN5IC5tYXQtZm9ybS1maWVsZC1sYWJlbHt0b3A6MS4yODEyNWVtfS5tYXQtZm9ybS1maWVsZC1hcHBlYXJhbmNlLWxlZ2FjeSAubWF0LWZvcm0tZmllbGQtdW5kZXJsaW5le2JvdHRvbToxLjI1ZW19Lm1hdC1mb3JtLWZpZWxkLWFwcGVhcmFuY2UtbGVnYWN5IC5tYXQtZm9ybS1maWVsZC1zdWJzY3JpcHQtd3JhcHBlcnttYXJnaW4tdG9wOi41NDE2N2VtO3RvcDpjYWxjKDEwMCUgLSAxLjY2NjY3ZW0pfUBtZWRpYSBwcmludHsubWF0LWZvcm0tZmllbGQtYXBwZWFyYW5jZS1sZWdhY3kubWF0LWZvcm0tZmllbGQtY2FuLWZsb2F0IC5tYXQtaW5wdXQtc2VydmVyOmZvY3VzKy5tYXQtZm9ybS1maWVsZC1sYWJlbC13cmFwcGVyIC5tYXQtZm9ybS1maWVsZC1sYWJlbCwubWF0LWZvcm0tZmllbGQtYXBwZWFyYW5jZS1sZWdhY3kubWF0LWZvcm0tZmllbGQtY2FuLWZsb2F0Lm1hdC1mb3JtLWZpZWxkLXNob3VsZC1mbG9hdCAubWF0LWZvcm0tZmllbGQtbGFiZWx7dHJhbnNmb3JtOnRyYW5zbGF0ZVkoLTEuMjgxMjJlbSkgc2NhbGUoLjc1KX0ubWF0LWZvcm0tZmllbGQtYXBwZWFyYW5jZS1sZWdhY3kubWF0LWZvcm0tZmllbGQtY2FuLWZsb2F0IC5tYXQtZm9ybS1maWVsZC1hdXRvZmlsbC1jb250cm9sOi13ZWJraXQtYXV0b2ZpbGwrLm1hdC1mb3JtLWZpZWxkLWxhYmVsLXdyYXBwZXIgLm1hdC1mb3JtLWZpZWxkLWxhYmVse3RyYW5zZm9ybTp0cmFuc2xhdGVZKC0xLjI4MTIxZW0pIHNjYWxlKC43NSl9Lm1hdC1mb3JtLWZpZWxkLWFwcGVhcmFuY2UtbGVnYWN5Lm1hdC1mb3JtLWZpZWxkLWNhbi1mbG9hdCAubWF0LWlucHV0LXNlcnZlcltsYWJlbF06bm90KDpsYWJlbC1zaG93bikrLm1hdC1mb3JtLWZpZWxkLWxhYmVsLXdyYXBwZXIgLm1hdC1mb3JtLWZpZWxkLWxhYmVse3RyYW5zZm9ybTp0cmFuc2xhdGVZKC0xLjI4MTJlbSkgc2NhbGUoLjc1KX19Lm1hdC1mb3JtLWZpZWxkLWFwcGVhcmFuY2UtZmlsbCAubWF0LWZvcm0tZmllbGQtaW5maXh7cGFkZGluZzouMjVlbSAwIC43NWVtIDB9Lm1hdC1mb3JtLWZpZWxkLWFwcGVhcmFuY2UtZmlsbCAubWF0LWZvcm0tZmllbGQtbGFiZWx7dG9wOjEuMDkzNzVlbTttYXJnaW4tdG9wOi0uNWVtfS5tYXQtZm9ybS1maWVsZC1hcHBlYXJhbmNlLWZpbGwubWF0LWZvcm0tZmllbGQtY2FuLWZsb2F0IC5tYXQtaW5wdXQtc2VydmVyOmZvY3VzKy5tYXQtZm9ybS1maWVsZC1sYWJlbC13cmFwcGVyIC5tYXQtZm9ybS1maWVsZC1sYWJlbCwubWF0LWZvcm0tZmllbGQtYXBwZWFyYW5jZS1maWxsLm1hdC1mb3JtLWZpZWxkLWNhbi1mbG9hdC5tYXQtZm9ybS1maWVsZC1zaG91bGQtZmxvYXQgLm1hdC1mb3JtLWZpZWxkLWxhYmVse3RyYW5zZm9ybTp0cmFuc2xhdGVZKC0uNTkzNzVlbSkgc2NhbGUoLjc1KTt3aWR0aDoxMzMuMzMzMzMlfS5tYXQtZm9ybS1maWVsZC1hcHBlYXJhbmNlLWZpbGwubWF0LWZvcm0tZmllbGQtY2FuLWZsb2F0IC5tYXQtaW5wdXQtc2VydmVyW2xhYmVsXTpub3QoOmxhYmVsLXNob3duKSsubWF0LWZvcm0tZmllbGQtbGFiZWwtd3JhcHBlciAubWF0LWZvcm0tZmllbGQtbGFiZWx7dHJhbnNmb3JtOnRyYW5zbGF0ZVkoLS41OTM3NGVtKSBzY2FsZSguNzUpO3dpZHRoOjEzMy4zMzMzNCV9Lm1hdC1mb3JtLWZpZWxkLWFwcGVhcmFuY2Utb3V0bGluZSAubWF0LWZvcm0tZmllbGQtaW5maXh7cGFkZGluZzoxZW0gMCAxZW0gMH0ubWF0LWZvcm0tZmllbGQtYXBwZWFyYW5jZS1vdXRsaW5lIC5tYXQtZm9ybS1maWVsZC1sYWJlbHt0b3A6MS44NDM3NWVtO21hcmdpbi10b3A6LS4yNWVtfS5tYXQtZm9ybS1maWVsZC1hcHBlYXJhbmNlLW91dGxpbmUubWF0LWZvcm0tZmllbGQtY2FuLWZsb2F0IC5tYXQtaW5wdXQtc2VydmVyOmZvY3VzKy5tYXQtZm9ybS1maWVsZC1sYWJlbC13cmFwcGVyIC5tYXQtZm9ybS1maWVsZC1sYWJlbCwubWF0LWZvcm0tZmllbGQtYXBwZWFyYW5jZS1vdXRsaW5lLm1hdC1mb3JtLWZpZWxkLWNhbi1mbG9hdC5tYXQtZm9ybS1maWVsZC1zaG91bGQtZmxvYXQgLm1hdC1mb3JtLWZpZWxkLWxhYmVse3RyYW5zZm9ybTp0cmFuc2xhdGVZKC0xLjU5Mzc1ZW0pIHNjYWxlKC43NSk7d2lkdGg6MTMzLjMzMzMzJX0ubWF0LWZvcm0tZmllbGQtYXBwZWFyYW5jZS1vdXRsaW5lLm1hdC1mb3JtLWZpZWxkLWNhbi1mbG9hdCAubWF0LWlucHV0LXNlcnZlcltsYWJlbF06bm90KDpsYWJlbC1zaG93bikrLm1hdC1mb3JtLWZpZWxkLWxhYmVsLXdyYXBwZXIgLm1hdC1mb3JtLWZpZWxkLWxhYmVse3RyYW5zZm9ybTp0cmFuc2xhdGVZKC0xLjU5Mzc0ZW0pIHNjYWxlKC43NSk7d2lkdGg6MTMzLjMzMzM0JX0ubWF0LWdyaWQtdGlsZS1mb290ZXIsLm1hdC1ncmlkLXRpbGUtaGVhZGVye2ZvbnQtc2l6ZToxNHB4fS5tYXQtZ3JpZC10aWxlLWZvb3RlciAubWF0LWxpbmUsLm1hdC1ncmlkLXRpbGUtaGVhZGVyIC5tYXQtbGluZXt3aGl0ZS1zcGFjZTpub3dyYXA7b3ZlcmZsb3c6aGlkZGVuO3RleHQtb3ZlcmZsb3c6ZWxsaXBzaXM7ZGlzcGxheTpibG9jaztib3gtc2l6aW5nOmJvcmRlci1ib3h9Lm1hdC1ncmlkLXRpbGUtZm9vdGVyIC5tYXQtbGluZTpudGgtY2hpbGQobisyKSwubWF0LWdyaWQtdGlsZS1oZWFkZXIgLm1hdC1saW5lOm50aC1jaGlsZChuKzIpe2ZvbnQtc2l6ZToxMnB4fWlucHV0Lm1hdC1pbnB1dC1lbGVtZW50e21hcmdpbi10b3A6LS4wNjI1ZW19Lm1hdC1tZW51LWl0ZW17Zm9udC1mYW1pbHk6Um9ib3RvLFwiSGVsdmV0aWNhIE5ldWVcIixzYW5zLXNlcmlmO2ZvbnQtc2l6ZToxNHB4O2ZvbnQtd2VpZ2h0OjQwMH0ubWF0LXBhZ2luYXRvciwubWF0LXBhZ2luYXRvci1wYWdlLXNpemUgLm1hdC1zZWxlY3QtdHJpZ2dlcntmb250LWZhbWlseTpSb2JvdG8sXCJIZWx2ZXRpY2EgTmV1ZVwiLHNhbnMtc2VyaWY7Zm9udC1zaXplOjEycHh9Lm1hdC1yYWRpby1idXR0b257Zm9udC1mYW1pbHk6Um9ib3RvLFwiSGVsdmV0aWNhIE5ldWVcIixzYW5zLXNlcmlmfS5tYXQtc2VsZWN0e2ZvbnQtZmFtaWx5OlJvYm90byxcIkhlbHZldGljYSBOZXVlXCIsc2Fucy1zZXJpZn0ubWF0LXNlbGVjdC10cmlnZ2Vye2hlaWdodDoxLjEyNWVtfS5tYXQtc2xpZGUtdG9nZ2xlLWNvbnRlbnR7Zm9udC1mYW1pbHk6Um9ib3RvLFwiSGVsdmV0aWNhIE5ldWVcIixzYW5zLXNlcmlmfS5tYXQtc2xpZGVyLXRodW1iLWxhYmVsLXRleHR7Zm9udC1mYW1pbHk6Um9ib3RvLFwiSGVsdmV0aWNhIE5ldWVcIixzYW5zLXNlcmlmO2ZvbnQtc2l6ZToxMnB4O2ZvbnQtd2VpZ2h0OjUwMH0ubWF0LXN0ZXBwZXItaG9yaXpvbnRhbCwubWF0LXN0ZXBwZXItdmVydGljYWx7Zm9udC1mYW1pbHk6Um9ib3RvLFwiSGVsdmV0aWNhIE5ldWVcIixzYW5zLXNlcmlmfS5tYXQtc3RlcC1sYWJlbHtmb250LXNpemU6MTRweDtmb250LXdlaWdodDo0MDB9Lm1hdC1zdGVwLXN1Yi1sYWJlbC1lcnJvcntmb250LXdlaWdodDo0MDB9Lm1hdC1zdGVwLWxhYmVsLWVycm9ye2ZvbnQtc2l6ZToxNHB4fS5tYXQtc3RlcC1sYWJlbC1zZWxlY3RlZHtmb250LXNpemU6MTRweDtmb250LXdlaWdodDo1MDB9Lm1hdC10YWItZ3JvdXB7Zm9udC1mYW1pbHk6Um9ib3RvLFwiSGVsdmV0aWNhIE5ldWVcIixzYW5zLXNlcmlmfS5tYXQtdGFiLWxhYmVsLC5tYXQtdGFiLWxpbmt7Zm9udC1mYW1pbHk6Um9ib3RvLFwiSGVsdmV0aWNhIE5ldWVcIixzYW5zLXNlcmlmO2ZvbnQtc2l6ZToxNHB4O2ZvbnQtd2VpZ2h0OjUwMH0ubWF0LXRvb2xiYXIsLm1hdC10b29sYmFyIGgxLC5tYXQtdG9vbGJhciBoMiwubWF0LXRvb2xiYXIgaDMsLm1hdC10b29sYmFyIGg0LC5tYXQtdG9vbGJhciBoNSwubWF0LXRvb2xiYXIgaDZ7Zm9udDo1MDAgMjBweC8zMnB4IFJvYm90byxcIkhlbHZldGljYSBOZXVlXCIsc2Fucy1zZXJpZjttYXJnaW46MH0ubWF0LXRvb2x0aXB7Zm9udC1mYW1pbHk6Um9ib3RvLFwiSGVsdmV0aWNhIE5ldWVcIixzYW5zLXNlcmlmO2ZvbnQtc2l6ZToxMHB4O3BhZGRpbmctdG9wOjZweDtwYWRkaW5nLWJvdHRvbTo2cHh9Lm1hdC10b29sdGlwLWhhbmRzZXR7Zm9udC1zaXplOjE0cHg7cGFkZGluZy10b3A6OHB4O3BhZGRpbmctYm90dG9tOjhweH0ubWF0LWxpc3QtaXRlbXtmb250LWZhbWlseTpSb2JvdG8sXCJIZWx2ZXRpY2EgTmV1ZVwiLHNhbnMtc2VyaWZ9Lm1hdC1saXN0LW9wdGlvbntmb250LWZhbWlseTpSb2JvdG8sXCJIZWx2ZXRpY2EgTmV1ZVwiLHNhbnMtc2VyaWZ9Lm1hdC1saXN0LWJhc2UgLm1hdC1saXN0LWl0ZW17Zm9udC1zaXplOjE2cHh9Lm1hdC1saXN0LWJhc2UgLm1hdC1saXN0LWl0ZW0gLm1hdC1saW5le3doaXRlLXNwYWNlOm5vd3JhcDtvdmVyZmxvdzpoaWRkZW47dGV4dC1vdmVyZmxvdzplbGxpcHNpcztkaXNwbGF5OmJsb2NrO2JveC1zaXppbmc6Ym9yZGVyLWJveH0ubWF0LWxpc3QtYmFzZSAubWF0LWxpc3QtaXRlbSAubWF0LWxpbmU6bnRoLWNoaWxkKG4rMil7Zm9udC1zaXplOjE0cHh9Lm1hdC1saXN0LWJhc2UgLm1hdC1saXN0LW9wdGlvbntmb250LXNpemU6MTZweH0ubWF0LWxpc3QtYmFzZSAubWF0LWxpc3Qtb3B0aW9uIC5tYXQtbGluZXt3aGl0ZS1zcGFjZTpub3dyYXA7b3ZlcmZsb3c6aGlkZGVuO3RleHQtb3ZlcmZsb3c6ZWxsaXBzaXM7ZGlzcGxheTpibG9jaztib3gtc2l6aW5nOmJvcmRlci1ib3h9Lm1hdC1saXN0LWJhc2UgLm1hdC1saXN0LW9wdGlvbiAubWF0LWxpbmU6bnRoLWNoaWxkKG4rMil7Zm9udC1zaXplOjE0cHh9Lm1hdC1saXN0LWJhc2UgLm1hdC1zdWJoZWFkZXJ7Zm9udC1mYW1pbHk6Um9ib3RvLFwiSGVsdmV0aWNhIE5ldWVcIixzYW5zLXNlcmlmO2ZvbnQtc2l6ZToxNHB4O2ZvbnQtd2VpZ2h0OjUwMH0ubWF0LWxpc3QtYmFzZVtkZW5zZV0gLm1hdC1saXN0LWl0ZW17Zm9udC1zaXplOjEycHh9Lm1hdC1saXN0LWJhc2VbZGVuc2VdIC5tYXQtbGlzdC1pdGVtIC5tYXQtbGluZXt3aGl0ZS1zcGFjZTpub3dyYXA7b3ZlcmZsb3c6aGlkZGVuO3RleHQtb3ZlcmZsb3c6ZWxsaXBzaXM7ZGlzcGxheTpibG9jaztib3gtc2l6aW5nOmJvcmRlci1ib3h9Lm1hdC1saXN0LWJhc2VbZGVuc2VdIC5tYXQtbGlzdC1pdGVtIC5tYXQtbGluZTpudGgtY2hpbGQobisyKXtmb250LXNpemU6MTJweH0ubWF0LWxpc3QtYmFzZVtkZW5zZV0gLm1hdC1saXN0LW9wdGlvbntmb250LXNpemU6MTJweH0ubWF0LWxpc3QtYmFzZVtkZW5zZV0gLm1hdC1saXN0LW9wdGlvbiAubWF0LWxpbmV7d2hpdGUtc3BhY2U6bm93cmFwO292ZXJmbG93OmhpZGRlbjt0ZXh0LW92ZXJmbG93OmVsbGlwc2lzO2Rpc3BsYXk6YmxvY2s7Ym94LXNpemluZzpib3JkZXItYm94fS5tYXQtbGlzdC1iYXNlW2RlbnNlXSAubWF0LWxpc3Qtb3B0aW9uIC5tYXQtbGluZTpudGgtY2hpbGQobisyKXtmb250LXNpemU6MTJweH0ubWF0LWxpc3QtYmFzZVtkZW5zZV0gLm1hdC1zdWJoZWFkZXJ7Zm9udC1mYW1pbHk6Um9ib3RvLFwiSGVsdmV0aWNhIE5ldWVcIixzYW5zLXNlcmlmO2ZvbnQtc2l6ZToxMnB4O2ZvbnQtd2VpZ2h0OjUwMH0ubWF0LW9wdGlvbntmb250LWZhbWlseTpSb2JvdG8sXCJIZWx2ZXRpY2EgTmV1ZVwiLHNhbnMtc2VyaWY7Zm9udC1zaXplOjE2cHh9Lm1hdC1vcHRncm91cC1sYWJlbHtmb250OjUwMCAxNHB4LzI0cHggUm9ib3RvLFwiSGVsdmV0aWNhIE5ldWVcIixzYW5zLXNlcmlmfS5tYXQtc2ltcGxlLXNuYWNrYmFye2ZvbnQtZmFtaWx5OlJvYm90byxcIkhlbHZldGljYSBOZXVlXCIsc2Fucy1zZXJpZjtmb250LXNpemU6MTRweH0ubWF0LXNpbXBsZS1zbmFja2Jhci1hY3Rpb257bGluZS1oZWlnaHQ6MTtmb250LWZhbWlseTppbmhlcml0O2ZvbnQtc2l6ZTppbmhlcml0O2ZvbnQtd2VpZ2h0OjUwMH0ubWF0LXRyZWV7Zm9udC1mYW1pbHk6Um9ib3RvLFwiSGVsdmV0aWNhIE5ldWVcIixzYW5zLXNlcmlmfS5tYXQtbmVzdGVkLXRyZWUtbm9kZSwubWF0LXRyZWUtbm9kZXtmb250LXdlaWdodDo0MDA7Zm9udC1zaXplOjE0cHh9Lm1hdC1yaXBwbGV7b3ZlcmZsb3c6aGlkZGVuO3Bvc2l0aW9uOnJlbGF0aXZlfS5tYXQtcmlwcGxlLm1hdC1yaXBwbGUtdW5ib3VuZGVke292ZXJmbG93OnZpc2libGV9Lm1hdC1yaXBwbGUtZWxlbWVudHtwb3NpdGlvbjphYnNvbHV0ZTtib3JkZXItcmFkaXVzOjUwJTtwb2ludGVyLWV2ZW50czpub25lO3RyYW5zaXRpb246b3BhY2l0eSx0cmFuc2Zvcm0gMHMgY3ViaWMtYmV6aWVyKDAsMCwuMiwxKTt0cmFuc2Zvcm06c2NhbGUoMCl9QG1lZGlhICgtbXMtaGlnaC1jb250cmFzdDphY3RpdmUpey5tYXQtcmlwcGxlLWVsZW1lbnR7ZGlzcGxheTpub25lfX0uY2RrLXZpc3VhbGx5LWhpZGRlbntib3JkZXI6MDtjbGlwOnJlY3QoMCAwIDAgMCk7aGVpZ2h0OjFweDttYXJnaW46LTFweDtvdmVyZmxvdzpoaWRkZW47cGFkZGluZzowO3Bvc2l0aW9uOmFic29sdXRlO3dpZHRoOjFweDtvdXRsaW5lOjA7LXdlYmtpdC1hcHBlYXJhbmNlOm5vbmU7LW1vei1hcHBlYXJhbmNlOm5vbmV9LmNkay1nbG9iYWwtb3ZlcmxheS13cmFwcGVyLC5jZGstb3ZlcmxheS1jb250YWluZXJ7cG9pbnRlci1ldmVudHM6bm9uZTt0b3A6MDtsZWZ0OjA7aGVpZ2h0OjEwMCU7d2lkdGg6MTAwJX0uY2RrLW92ZXJsYXktY29udGFpbmVye3Bvc2l0aW9uOmZpeGVkO3otaW5kZXg6MTAwMH0uY2RrLW92ZXJsYXktY29udGFpbmVyOmVtcHR5e2Rpc3BsYXk6bm9uZX0uY2RrLWdsb2JhbC1vdmVybGF5LXdyYXBwZXJ7ZGlzcGxheTpmbGV4O3Bvc2l0aW9uOmFic29sdXRlO3otaW5kZXg6MTAwMH0uY2RrLW92ZXJsYXktcGFuZXtwb3NpdGlvbjphYnNvbHV0ZTtwb2ludGVyLWV2ZW50czphdXRvO2JveC1zaXppbmc6Ym9yZGVyLWJveDt6LWluZGV4OjEwMDA7ZGlzcGxheTpmbGV4O21heC13aWR0aDoxMDAlO21heC1oZWlnaHQ6MTAwJX0uY2RrLW92ZXJsYXktYmFja2Ryb3B7cG9zaXRpb246YWJzb2x1dGU7dG9wOjA7Ym90dG9tOjA7bGVmdDowO3JpZ2h0OjA7ei1pbmRleDoxMDAwO3BvaW50ZXItZXZlbnRzOmF1dG87LXdlYmtpdC10YXAtaGlnaGxpZ2h0LWNvbG9yOnRyYW5zcGFyZW50O3RyYW5zaXRpb246b3BhY2l0eSAuNHMgY3ViaWMtYmV6aWVyKC4yNSwuOCwuMjUsMSk7b3BhY2l0eTowfS5jZGstb3ZlcmxheS1iYWNrZHJvcC5jZGstb3ZlcmxheS1iYWNrZHJvcC1zaG93aW5ne29wYWNpdHk6MX1AbWVkaWEgc2NyZWVuIGFuZCAoLW1zLWhpZ2gtY29udHJhc3Q6YWN0aXZlKXsuY2RrLW92ZXJsYXktYmFja2Ryb3AuY2RrLW92ZXJsYXktYmFja2Ryb3Atc2hvd2luZ3tvcGFjaXR5Oi42fX0uY2RrLW92ZXJsYXktZGFyay1iYWNrZHJvcHtiYWNrZ3JvdW5kOnJnYmEoMCwwLDAsLjMyKX0uY2RrLW92ZXJsYXktdHJhbnNwYXJlbnQtYmFja2Ryb3AsLmNkay1vdmVybGF5LXRyYW5zcGFyZW50LWJhY2tkcm9wLmNkay1vdmVybGF5LWJhY2tkcm9wLXNob3dpbmd7b3BhY2l0eTowfS5jZGstb3ZlcmxheS1jb25uZWN0ZWQtcG9zaXRpb24tYm91bmRpbmctYm94e3Bvc2l0aW9uOmFic29sdXRlO3otaW5kZXg6MTAwMDtkaXNwbGF5OmZsZXg7ZmxleC1kaXJlY3Rpb246Y29sdW1uO21pbi13aWR0aDoxcHg7bWluLWhlaWdodDoxcHh9LmNkay1nbG9iYWwtc2Nyb2xsYmxvY2t7cG9zaXRpb246Zml4ZWQ7d2lkdGg6MTAwJTtvdmVyZmxvdy15OnNjcm9sbH1Aa2V5ZnJhbWVzIGNkay10ZXh0LWZpZWxkLWF1dG9maWxsLXN0YXJ0ey8qISovfUBrZXlmcmFtZXMgY2RrLXRleHQtZmllbGQtYXV0b2ZpbGwtZW5key8qISovfS5jZGstdGV4dC1maWVsZC1hdXRvZmlsbC1tb25pdG9yZWQ6LXdlYmtpdC1hdXRvZmlsbHthbmltYXRpb24tbmFtZTpjZGstdGV4dC1maWVsZC1hdXRvZmlsbC1zdGFydH0uY2RrLXRleHQtZmllbGQtYXV0b2ZpbGwtbW9uaXRvcmVkOm5vdCg6LXdlYmtpdC1hdXRvZmlsbCl7YW5pbWF0aW9uLW5hbWU6Y2RrLXRleHQtZmllbGQtYXV0b2ZpbGwtZW5kfXRleHRhcmVhLmNkay10ZXh0YXJlYS1hdXRvc2l6ZXtyZXNpemU6bm9uZX10ZXh0YXJlYS5jZGstdGV4dGFyZWEtYXV0b3NpemUtbWVhc3VyaW5ne2hlaWdodDphdXRvIWltcG9ydGFudDtvdmVyZmxvdzpoaWRkZW4haW1wb3J0YW50O3BhZGRpbmc6MnB4IDAhaW1wb3J0YW50O2JveC1zaXppbmc6Y29udGVudC1ib3ghaW1wb3J0YW50fS5tYXQtcmlwcGxlLWVsZW1lbnR7YmFja2dyb3VuZC1jb2xvcjpyZ2JhKDAsMCwwLC4xKX0ubWF0LW9wdGlvbntjb2xvcjpyZ2JhKDAsMCwwLC44Nyl9Lm1hdC1vcHRpb246Zm9jdXM6bm90KC5tYXQtb3B0aW9uLWRpc2FibGVkKSwubWF0LW9wdGlvbjpob3Zlcjpub3QoLm1hdC1vcHRpb24tZGlzYWJsZWQpe2JhY2tncm91bmQ6cmdiYSgwLDAsMCwuMDQpfS5tYXQtb3B0aW9uLm1hdC1zZWxlY3RlZDpub3QoLm1hdC1vcHRpb24tbXVsdGlwbGUpOm5vdCgubWF0LW9wdGlvbi1kaXNhYmxlZCl7YmFja2dyb3VuZDpyZ2JhKDAsMCwwLC4wNCl9Lm1hdC1vcHRpb24ubWF0LWFjdGl2ZXtiYWNrZ3JvdW5kOnJnYmEoMCwwLDAsLjA0KTtjb2xvcjpyZ2JhKDAsMCwwLC44Nyl9Lm1hdC1vcHRpb24ubWF0LW9wdGlvbi1kaXNhYmxlZHtjb2xvcjpyZ2JhKDAsMCwwLC4zOCl9Lm1hdC1wcmltYXJ5IC5tYXQtb3B0aW9uLm1hdC1zZWxlY3RlZDpub3QoLm1hdC1vcHRpb24tZGlzYWJsZWQpe2NvbG9yOiM2NzNhYjd9Lm1hdC1hY2NlbnQgLm1hdC1vcHRpb24ubWF0LXNlbGVjdGVkOm5vdCgubWF0LW9wdGlvbi1kaXNhYmxlZCl7Y29sb3I6I2ZmZDc0MH0ubWF0LXdhcm4gLm1hdC1vcHRpb24ubWF0LXNlbGVjdGVkOm5vdCgubWF0LW9wdGlvbi1kaXNhYmxlZCl7Y29sb3I6I2Y0NDMzNn0ubWF0LW9wdGdyb3VwLWxhYmVse2NvbG9yOnJnYmEoMCwwLDAsLjU0KX0ubWF0LW9wdGdyb3VwLWRpc2FibGVkIC5tYXQtb3B0Z3JvdXAtbGFiZWx7Y29sb3I6cmdiYSgwLDAsMCwuMzgpfS5tYXQtcHNldWRvLWNoZWNrYm94e2NvbG9yOnJnYmEoMCwwLDAsLjU0KX0ubWF0LXBzZXVkby1jaGVja2JveDo6YWZ0ZXJ7Y29sb3I6I2ZhZmFmYX0ubWF0LWFjY2VudCAubWF0LXBzZXVkby1jaGVja2JveC1jaGVja2VkLC5tYXQtYWNjZW50IC5tYXQtcHNldWRvLWNoZWNrYm94LWluZGV0ZXJtaW5hdGUsLm1hdC1wc2V1ZG8tY2hlY2tib3gtY2hlY2tlZCwubWF0LXBzZXVkby1jaGVja2JveC1pbmRldGVybWluYXRle2JhY2tncm91bmQ6I2ZmZDc0MH0ubWF0LXByaW1hcnkgLm1hdC1wc2V1ZG8tY2hlY2tib3gtY2hlY2tlZCwubWF0LXByaW1hcnkgLm1hdC1wc2V1ZG8tY2hlY2tib3gtaW5kZXRlcm1pbmF0ZXtiYWNrZ3JvdW5kOiM2NzNhYjd9Lm1hdC13YXJuIC5tYXQtcHNldWRvLWNoZWNrYm94LWNoZWNrZWQsLm1hdC13YXJuIC5tYXQtcHNldWRvLWNoZWNrYm94LWluZGV0ZXJtaW5hdGV7YmFja2dyb3VuZDojZjQ0MzM2fS5tYXQtcHNldWRvLWNoZWNrYm94LWNoZWNrZWQubWF0LXBzZXVkby1jaGVja2JveC1kaXNhYmxlZCwubWF0LXBzZXVkby1jaGVja2JveC1pbmRldGVybWluYXRlLm1hdC1wc2V1ZG8tY2hlY2tib3gtZGlzYWJsZWR7YmFja2dyb3VuZDojYjBiMGIwfS5tYXQtZWxldmF0aW9uLXowe2JveC1zaGFkb3c6MCAwIDAgMCByZ2JhKDAsMCwwLC4yKSwwIDAgMCAwIHJnYmEoMCwwLDAsLjE0KSwwIDAgMCAwIHJnYmEoMCwwLDAsLjEyKX0ubWF0LWVsZXZhdGlvbi16MXtib3gtc2hhZG93OjAgMnB4IDFweCAtMXB4IHJnYmEoMCwwLDAsLjIpLDAgMXB4IDFweCAwIHJnYmEoMCwwLDAsLjE0KSwwIDFweCAzcHggMCByZ2JhKDAsMCwwLC4xMil9Lm1hdC1lbGV2YXRpb24tejJ7Ym94LXNoYWRvdzowIDNweCAxcHggLTJweCByZ2JhKDAsMCwwLC4yKSwwIDJweCAycHggMCByZ2JhKDAsMCwwLC4xNCksMCAxcHggNXB4IDAgcmdiYSgwLDAsMCwuMTIpfS5tYXQtZWxldmF0aW9uLXoze2JveC1zaGFkb3c6MCAzcHggM3B4IC0ycHggcmdiYSgwLDAsMCwuMiksMCAzcHggNHB4IDAgcmdiYSgwLDAsMCwuMTQpLDAgMXB4IDhweCAwIHJnYmEoMCwwLDAsLjEyKX0ubWF0LWVsZXZhdGlvbi16NHtib3gtc2hhZG93OjAgMnB4IDRweCAtMXB4IHJnYmEoMCwwLDAsLjIpLDAgNHB4IDVweCAwIHJnYmEoMCwwLDAsLjE0KSwwIDFweCAxMHB4IDAgcmdiYSgwLDAsMCwuMTIpfS5tYXQtZWxldmF0aW9uLXo1e2JveC1zaGFkb3c6MCAzcHggNXB4IC0xcHggcmdiYSgwLDAsMCwuMiksMCA1cHggOHB4IDAgcmdiYSgwLDAsMCwuMTQpLDAgMXB4IDE0cHggMCByZ2JhKDAsMCwwLC4xMil9Lm1hdC1lbGV2YXRpb24tejZ7Ym94LXNoYWRvdzowIDNweCA1cHggLTFweCByZ2JhKDAsMCwwLC4yKSwwIDZweCAxMHB4IDAgcmdiYSgwLDAsMCwuMTQpLDAgMXB4IDE4cHggMCByZ2JhKDAsMCwwLC4xMil9Lm1hdC1lbGV2YXRpb24tejd7Ym94LXNoYWRvdzowIDRweCA1cHggLTJweCByZ2JhKDAsMCwwLC4yKSwwIDdweCAxMHB4IDFweCByZ2JhKDAsMCwwLC4xNCksMCAycHggMTZweCAxcHggcmdiYSgwLDAsMCwuMTIpfS5tYXQtZWxldmF0aW9uLXo4e2JveC1zaGFkb3c6MCA1cHggNXB4IC0zcHggcmdiYSgwLDAsMCwuMiksMCA4cHggMTBweCAxcHggcmdiYSgwLDAsMCwuMTQpLDAgM3B4IDE0cHggMnB4IHJnYmEoMCwwLDAsLjEyKX0ubWF0LWVsZXZhdGlvbi16OXtib3gtc2hhZG93OjAgNXB4IDZweCAtM3B4IHJnYmEoMCwwLDAsLjIpLDAgOXB4IDEycHggMXB4IHJnYmEoMCwwLDAsLjE0KSwwIDNweCAxNnB4IDJweCByZ2JhKDAsMCwwLC4xMil9Lm1hdC1lbGV2YXRpb24tejEwe2JveC1zaGFkb3c6MCA2cHggNnB4IC0zcHggcmdiYSgwLDAsMCwuMiksMCAxMHB4IDE0cHggMXB4IHJnYmEoMCwwLDAsLjE0KSwwIDRweCAxOHB4IDNweCByZ2JhKDAsMCwwLC4xMil9Lm1hdC1lbGV2YXRpb24tejExe2JveC1zaGFkb3c6MCA2cHggN3B4IC00cHggcmdiYSgwLDAsMCwuMiksMCAxMXB4IDE1cHggMXB4IHJnYmEoMCwwLDAsLjE0KSwwIDRweCAyMHB4IDNweCByZ2JhKDAsMCwwLC4xMil9Lm1hdC1lbGV2YXRpb24tejEye2JveC1zaGFkb3c6MCA3cHggOHB4IC00cHggcmdiYSgwLDAsMCwuMiksMCAxMnB4IDE3cHggMnB4IHJnYmEoMCwwLDAsLjE0KSwwIDVweCAyMnB4IDRweCByZ2JhKDAsMCwwLC4xMil9Lm1hdC1lbGV2YXRpb24tejEze2JveC1zaGFkb3c6MCA3cHggOHB4IC00cHggcmdiYSgwLDAsMCwuMiksMCAxM3B4IDE5cHggMnB4IHJnYmEoMCwwLDAsLjE0KSwwIDVweCAyNHB4IDRweCByZ2JhKDAsMCwwLC4xMil9Lm1hdC1lbGV2YXRpb24tejE0e2JveC1zaGFkb3c6MCA3cHggOXB4IC00cHggcmdiYSgwLDAsMCwuMiksMCAxNHB4IDIxcHggMnB4IHJnYmEoMCwwLDAsLjE0KSwwIDVweCAyNnB4IDRweCByZ2JhKDAsMCwwLC4xMil9Lm1hdC1lbGV2YXRpb24tejE1e2JveC1zaGFkb3c6MCA4cHggOXB4IC01cHggcmdiYSgwLDAsMCwuMiksMCAxNXB4IDIycHggMnB4IHJnYmEoMCwwLDAsLjE0KSwwIDZweCAyOHB4IDVweCByZ2JhKDAsMCwwLC4xMil9Lm1hdC1lbGV2YXRpb24tejE2e2JveC1zaGFkb3c6MCA4cHggMTBweCAtNXB4IHJnYmEoMCwwLDAsLjIpLDAgMTZweCAyNHB4IDJweCByZ2JhKDAsMCwwLC4xNCksMCA2cHggMzBweCA1cHggcmdiYSgwLDAsMCwuMTIpfS5tYXQtZWxldmF0aW9uLXoxN3tib3gtc2hhZG93OjAgOHB4IDExcHggLTVweCByZ2JhKDAsMCwwLC4yKSwwIDE3cHggMjZweCAycHggcmdiYSgwLDAsMCwuMTQpLDAgNnB4IDMycHggNXB4IHJnYmEoMCwwLDAsLjEyKX0ubWF0LWVsZXZhdGlvbi16MTh7Ym94LXNoYWRvdzowIDlweCAxMXB4IC01cHggcmdiYSgwLDAsMCwuMiksMCAxOHB4IDI4cHggMnB4IHJnYmEoMCwwLDAsLjE0KSwwIDdweCAzNHB4IDZweCByZ2JhKDAsMCwwLC4xMil9Lm1hdC1lbGV2YXRpb24tejE5e2JveC1zaGFkb3c6MCA5cHggMTJweCAtNnB4IHJnYmEoMCwwLDAsLjIpLDAgMTlweCAyOXB4IDJweCByZ2JhKDAsMCwwLC4xNCksMCA3cHggMzZweCA2cHggcmdiYSgwLDAsMCwuMTIpfS5tYXQtZWxldmF0aW9uLXoyMHtib3gtc2hhZG93OjAgMTBweCAxM3B4IC02cHggcmdiYSgwLDAsMCwuMiksMCAyMHB4IDMxcHggM3B4IHJnYmEoMCwwLDAsLjE0KSwwIDhweCAzOHB4IDdweCByZ2JhKDAsMCwwLC4xMil9Lm1hdC1lbGV2YXRpb24tejIxe2JveC1zaGFkb3c6MCAxMHB4IDEzcHggLTZweCByZ2JhKDAsMCwwLC4yKSwwIDIxcHggMzNweCAzcHggcmdiYSgwLDAsMCwuMTQpLDAgOHB4IDQwcHggN3B4IHJnYmEoMCwwLDAsLjEyKX0ubWF0LWVsZXZhdGlvbi16MjJ7Ym94LXNoYWRvdzowIDEwcHggMTRweCAtNnB4IHJnYmEoMCwwLDAsLjIpLDAgMjJweCAzNXB4IDNweCByZ2JhKDAsMCwwLC4xNCksMCA4cHggNDJweCA3cHggcmdiYSgwLDAsMCwuMTIpfS5tYXQtZWxldmF0aW9uLXoyM3tib3gtc2hhZG93OjAgMTFweCAxNHB4IC03cHggcmdiYSgwLDAsMCwuMiksMCAyM3B4IDM2cHggM3B4IHJnYmEoMCwwLDAsLjE0KSwwIDlweCA0NHB4IDhweCByZ2JhKDAsMCwwLC4xMil9Lm1hdC1lbGV2YXRpb24tejI0e2JveC1zaGFkb3c6MCAxMXB4IDE1cHggLTdweCByZ2JhKDAsMCwwLC4yKSwwIDI0cHggMzhweCAzcHggcmdiYSgwLDAsMCwuMTQpLDAgOXB4IDQ2cHggOHB4IHJnYmEoMCwwLDAsLjEyKX0ubWF0LWFwcC1iYWNrZ3JvdW5ke2JhY2tncm91bmQtY29sb3I6I2ZhZmFmYTtjb2xvcjpyZ2JhKDAsMCwwLC44Nyl9Lm1hdC10aGVtZS1sb2FkZWQtbWFya2Vye2Rpc3BsYXk6bm9uZX0ubWF0LWF1dG9jb21wbGV0ZS1wYW5lbHtiYWNrZ3JvdW5kOiNmZmY7Y29sb3I6cmdiYSgwLDAsMCwuODcpfS5tYXQtYXV0b2NvbXBsZXRlLXBhbmVsOm5vdChbY2xhc3MqPW1hdC1lbGV2YXRpb24tel0pe2JveC1zaGFkb3c6MCAycHggNHB4IC0xcHggcmdiYSgwLDAsMCwuMiksMCA0cHggNXB4IDAgcmdiYSgwLDAsMCwuMTQpLDAgMXB4IDEwcHggMCByZ2JhKDAsMCwwLC4xMil9Lm1hdC1hdXRvY29tcGxldGUtcGFuZWwgLm1hdC1vcHRpb24ubWF0LXNlbGVjdGVkOm5vdCgubWF0LWFjdGl2ZSk6bm90KDpob3Zlcil7YmFja2dyb3VuZDojZmZmfS5tYXQtYXV0b2NvbXBsZXRlLXBhbmVsIC5tYXQtb3B0aW9uLm1hdC1zZWxlY3RlZDpub3QoLm1hdC1hY3RpdmUpOm5vdCg6aG92ZXIpOm5vdCgubWF0LW9wdGlvbi1kaXNhYmxlZCl7Y29sb3I6cmdiYSgwLDAsMCwuODcpfS5tYXQtYmFkZ2UtY29udGVudHtjb2xvcjojZmZmO2JhY2tncm91bmQ6IzY3M2FiN31AbWVkaWEgKC1tcy1oaWdoLWNvbnRyYXN0OmFjdGl2ZSl7Lm1hdC1iYWRnZS1jb250ZW50e291dGxpbmU6c29saWQgMXB4O2JvcmRlci1yYWRpdXM6MH19Lm1hdC1iYWRnZS1hY2NlbnQgLm1hdC1iYWRnZS1jb250ZW50e2JhY2tncm91bmQ6I2ZmZDc0MDtjb2xvcjpyZ2JhKDAsMCwwLC44Nyl9Lm1hdC1iYWRnZS13YXJuIC5tYXQtYmFkZ2UtY29udGVudHtjb2xvcjojZmZmO2JhY2tncm91bmQ6I2Y0NDMzNn0ubWF0LWJhZGdle3Bvc2l0aW9uOnJlbGF0aXZlfS5tYXQtYmFkZ2UtaGlkZGVuIC5tYXQtYmFkZ2UtY29udGVudHtkaXNwbGF5Om5vbmV9Lm1hdC1iYWRnZS1kaXNhYmxlZCAubWF0LWJhZGdlLWNvbnRlbnR7YmFja2dyb3VuZDojYjliOWI5O2NvbG9yOnJnYmEoMCwwLDAsLjM4KX0ubWF0LWJhZGdlLWNvbnRlbnR7cG9zaXRpb246YWJzb2x1dGU7dGV4dC1hbGlnbjpjZW50ZXI7ZGlzcGxheTppbmxpbmUtYmxvY2s7Ym9yZGVyLXJhZGl1czo1MCU7dHJhbnNpdGlvbjp0cmFuc2Zvcm0gLjJzIGVhc2UtaW4tb3V0O3RyYW5zZm9ybTpzY2FsZSguNik7b3ZlcmZsb3c6aGlkZGVuO3doaXRlLXNwYWNlOm5vd3JhcDt0ZXh0LW92ZXJmbG93OmVsbGlwc2lzO3BvaW50ZXItZXZlbnRzOm5vbmV9Lm1hdC1iYWRnZS1jb250ZW50Lm1hdC1iYWRnZS1hY3RpdmV7dHJhbnNmb3JtOm5vbmV9Lm1hdC1iYWRnZS1zbWFsbCAubWF0LWJhZGdlLWNvbnRlbnR7d2lkdGg6MTZweDtoZWlnaHQ6MTZweDtsaW5lLWhlaWdodDoxNnB4fS5tYXQtYmFkZ2Utc21hbGwubWF0LWJhZGdlLWFib3ZlIC5tYXQtYmFkZ2UtY29udGVudHt0b3A6LThweH0ubWF0LWJhZGdlLXNtYWxsLm1hdC1iYWRnZS1iZWxvdyAubWF0LWJhZGdlLWNvbnRlbnR7Ym90dG9tOi04cHh9Lm1hdC1iYWRnZS1zbWFsbC5tYXQtYmFkZ2UtYmVmb3JlIC5tYXQtYmFkZ2UtY29udGVudHtsZWZ0Oi0xNnB4fVtkaXI9cnRsXSAubWF0LWJhZGdlLXNtYWxsLm1hdC1iYWRnZS1iZWZvcmUgLm1hdC1iYWRnZS1jb250ZW50e2xlZnQ6YXV0bztyaWdodDotMTZweH0ubWF0LWJhZGdlLXNtYWxsLm1hdC1iYWRnZS1hZnRlciAubWF0LWJhZGdlLWNvbnRlbnR7cmlnaHQ6LTE2cHh9W2Rpcj1ydGxdIC5tYXQtYmFkZ2Utc21hbGwubWF0LWJhZGdlLWFmdGVyIC5tYXQtYmFkZ2UtY29udGVudHtyaWdodDphdXRvO2xlZnQ6LTE2cHh9Lm1hdC1iYWRnZS1zbWFsbC5tYXQtYmFkZ2Utb3ZlcmxhcC5tYXQtYmFkZ2UtYmVmb3JlIC5tYXQtYmFkZ2UtY29udGVudHtsZWZ0Oi04cHh9W2Rpcj1ydGxdIC5tYXQtYmFkZ2Utc21hbGwubWF0LWJhZGdlLW92ZXJsYXAubWF0LWJhZGdlLWJlZm9yZSAubWF0LWJhZGdlLWNvbnRlbnR7bGVmdDphdXRvO3JpZ2h0Oi04cHh9Lm1hdC1iYWRnZS1zbWFsbC5tYXQtYmFkZ2Utb3ZlcmxhcC5tYXQtYmFkZ2UtYWZ0ZXIgLm1hdC1iYWRnZS1jb250ZW50e3JpZ2h0Oi04cHh9W2Rpcj1ydGxdIC5tYXQtYmFkZ2Utc21hbGwubWF0LWJhZGdlLW92ZXJsYXAubWF0LWJhZGdlLWFmdGVyIC5tYXQtYmFkZ2UtY29udGVudHtyaWdodDphdXRvO2xlZnQ6LThweH0ubWF0LWJhZGdlLW1lZGl1bSAubWF0LWJhZGdlLWNvbnRlbnR7d2lkdGg6MjJweDtoZWlnaHQ6MjJweDtsaW5lLWhlaWdodDoyMnB4fS5tYXQtYmFkZ2UtbWVkaXVtLm1hdC1iYWRnZS1hYm92ZSAubWF0LWJhZGdlLWNvbnRlbnR7dG9wOi0xMXB4fS5tYXQtYmFkZ2UtbWVkaXVtLm1hdC1iYWRnZS1iZWxvdyAubWF0LWJhZGdlLWNvbnRlbnR7Ym90dG9tOi0xMXB4fS5tYXQtYmFkZ2UtbWVkaXVtLm1hdC1iYWRnZS1iZWZvcmUgLm1hdC1iYWRnZS1jb250ZW50e2xlZnQ6LTIycHh9W2Rpcj1ydGxdIC5tYXQtYmFkZ2UtbWVkaXVtLm1hdC1iYWRnZS1iZWZvcmUgLm1hdC1iYWRnZS1jb250ZW50e2xlZnQ6YXV0bztyaWdodDotMjJweH0ubWF0LWJhZGdlLW1lZGl1bS5tYXQtYmFkZ2UtYWZ0ZXIgLm1hdC1iYWRnZS1jb250ZW50e3JpZ2h0Oi0yMnB4fVtkaXI9cnRsXSAubWF0LWJhZGdlLW1lZGl1bS5tYXQtYmFkZ2UtYWZ0ZXIgLm1hdC1iYWRnZS1jb250ZW50e3JpZ2h0OmF1dG87bGVmdDotMjJweH0ubWF0LWJhZGdlLW1lZGl1bS5tYXQtYmFkZ2Utb3ZlcmxhcC5tYXQtYmFkZ2UtYmVmb3JlIC5tYXQtYmFkZ2UtY29udGVudHtsZWZ0Oi0xMXB4fVtkaXI9cnRsXSAubWF0LWJhZGdlLW1lZGl1bS5tYXQtYmFkZ2Utb3ZlcmxhcC5tYXQtYmFkZ2UtYmVmb3JlIC5tYXQtYmFkZ2UtY29udGVudHtsZWZ0OmF1dG87cmlnaHQ6LTExcHh9Lm1hdC1iYWRnZS1tZWRpdW0ubWF0LWJhZGdlLW92ZXJsYXAubWF0LWJhZGdlLWFmdGVyIC5tYXQtYmFkZ2UtY29udGVudHtyaWdodDotMTFweH1bZGlyPXJ0bF0gLm1hdC1iYWRnZS1tZWRpdW0ubWF0LWJhZGdlLW92ZXJsYXAubWF0LWJhZGdlLWFmdGVyIC5tYXQtYmFkZ2UtY29udGVudHtyaWdodDphdXRvO2xlZnQ6LTExcHh9Lm1hdC1iYWRnZS1sYXJnZSAubWF0LWJhZGdlLWNvbnRlbnR7d2lkdGg6MjhweDtoZWlnaHQ6MjhweDtsaW5lLWhlaWdodDoyOHB4fS5tYXQtYmFkZ2UtbGFyZ2UubWF0LWJhZGdlLWFib3ZlIC5tYXQtYmFkZ2UtY29udGVudHt0b3A6LTE0cHh9Lm1hdC1iYWRnZS1sYXJnZS5tYXQtYmFkZ2UtYmVsb3cgLm1hdC1iYWRnZS1jb250ZW50e2JvdHRvbTotMTRweH0ubWF0LWJhZGdlLWxhcmdlLm1hdC1iYWRnZS1iZWZvcmUgLm1hdC1iYWRnZS1jb250ZW50e2xlZnQ6LTI4cHh9W2Rpcj1ydGxdIC5tYXQtYmFkZ2UtbGFyZ2UubWF0LWJhZGdlLWJlZm9yZSAubWF0LWJhZGdlLWNvbnRlbnR7bGVmdDphdXRvO3JpZ2h0Oi0yOHB4fS5tYXQtYmFkZ2UtbGFyZ2UubWF0LWJhZGdlLWFmdGVyIC5tYXQtYmFkZ2UtY29udGVudHtyaWdodDotMjhweH1bZGlyPXJ0bF0gLm1hdC1iYWRnZS1sYXJnZS5tYXQtYmFkZ2UtYWZ0ZXIgLm1hdC1iYWRnZS1jb250ZW50e3JpZ2h0OmF1dG87bGVmdDotMjhweH0ubWF0LWJhZGdlLWxhcmdlLm1hdC1iYWRnZS1vdmVybGFwLm1hdC1iYWRnZS1iZWZvcmUgLm1hdC1iYWRnZS1jb250ZW50e2xlZnQ6LTE0cHh9W2Rpcj1ydGxdIC5tYXQtYmFkZ2UtbGFyZ2UubWF0LWJhZGdlLW92ZXJsYXAubWF0LWJhZGdlLWJlZm9yZSAubWF0LWJhZGdlLWNvbnRlbnR7bGVmdDphdXRvO3JpZ2h0Oi0xNHB4fS5tYXQtYmFkZ2UtbGFyZ2UubWF0LWJhZGdlLW92ZXJsYXAubWF0LWJhZGdlLWFmdGVyIC5tYXQtYmFkZ2UtY29udGVudHtyaWdodDotMTRweH1bZGlyPXJ0bF0gLm1hdC1iYWRnZS1sYXJnZS5tYXQtYmFkZ2Utb3ZlcmxhcC5tYXQtYmFkZ2UtYWZ0ZXIgLm1hdC1iYWRnZS1jb250ZW50e3JpZ2h0OmF1dG87bGVmdDotMTRweH0ubWF0LWJvdHRvbS1zaGVldC1jb250YWluZXJ7Ym94LXNoYWRvdzowIDhweCAxMHB4IC01cHggcmdiYSgwLDAsMCwuMiksMCAxNnB4IDI0cHggMnB4IHJnYmEoMCwwLDAsLjE0KSwwIDZweCAzMHB4IDVweCByZ2JhKDAsMCwwLC4xMik7YmFja2dyb3VuZDojZmZmO2NvbG9yOnJnYmEoMCwwLDAsLjg3KX0ubWF0LWJ1dHRvbiwubWF0LWljb24tYnV0dG9uLC5tYXQtc3Ryb2tlZC1idXR0b257Y29sb3I6aW5oZXJpdDtiYWNrZ3JvdW5kOjAgMH0ubWF0LWJ1dHRvbi5tYXQtcHJpbWFyeSwubWF0LWljb24tYnV0dG9uLm1hdC1wcmltYXJ5LC5tYXQtc3Ryb2tlZC1idXR0b24ubWF0LXByaW1hcnl7Y29sb3I6IzY3M2FiN30ubWF0LWJ1dHRvbi5tYXQtYWNjZW50LC5tYXQtaWNvbi1idXR0b24ubWF0LWFjY2VudCwubWF0LXN0cm9rZWQtYnV0dG9uLm1hdC1hY2NlbnR7Y29sb3I6I2ZmZDc0MH0ubWF0LWJ1dHRvbi5tYXQtd2FybiwubWF0LWljb24tYnV0dG9uLm1hdC13YXJuLC5tYXQtc3Ryb2tlZC1idXR0b24ubWF0LXdhcm57Y29sb3I6I2Y0NDMzNn0ubWF0LWJ1dHRvbi5tYXQtYWNjZW50W2Rpc2FibGVkXSwubWF0LWJ1dHRvbi5tYXQtcHJpbWFyeVtkaXNhYmxlZF0sLm1hdC1idXR0b24ubWF0LXdhcm5bZGlzYWJsZWRdLC5tYXQtYnV0dG9uW2Rpc2FibGVkXVtkaXNhYmxlZF0sLm1hdC1pY29uLWJ1dHRvbi5tYXQtYWNjZW50W2Rpc2FibGVkXSwubWF0LWljb24tYnV0dG9uLm1hdC1wcmltYXJ5W2Rpc2FibGVkXSwubWF0LWljb24tYnV0dG9uLm1hdC13YXJuW2Rpc2FibGVkXSwubWF0LWljb24tYnV0dG9uW2Rpc2FibGVkXVtkaXNhYmxlZF0sLm1hdC1zdHJva2VkLWJ1dHRvbi5tYXQtYWNjZW50W2Rpc2FibGVkXSwubWF0LXN0cm9rZWQtYnV0dG9uLm1hdC1wcmltYXJ5W2Rpc2FibGVkXSwubWF0LXN0cm9rZWQtYnV0dG9uLm1hdC13YXJuW2Rpc2FibGVkXSwubWF0LXN0cm9rZWQtYnV0dG9uW2Rpc2FibGVkXVtkaXNhYmxlZF17Y29sb3I6cmdiYSgwLDAsMCwuMjYpfS5tYXQtYnV0dG9uLm1hdC1wcmltYXJ5IC5tYXQtYnV0dG9uLWZvY3VzLW92ZXJsYXksLm1hdC1pY29uLWJ1dHRvbi5tYXQtcHJpbWFyeSAubWF0LWJ1dHRvbi1mb2N1cy1vdmVybGF5LC5tYXQtc3Ryb2tlZC1idXR0b24ubWF0LXByaW1hcnkgLm1hdC1idXR0b24tZm9jdXMtb3ZlcmxheXtiYWNrZ3JvdW5kLWNvbG9yOiM2NzNhYjd9Lm1hdC1idXR0b24ubWF0LWFjY2VudCAubWF0LWJ1dHRvbi1mb2N1cy1vdmVybGF5LC5tYXQtaWNvbi1idXR0b24ubWF0LWFjY2VudCAubWF0LWJ1dHRvbi1mb2N1cy1vdmVybGF5LC5tYXQtc3Ryb2tlZC1idXR0b24ubWF0LWFjY2VudCAubWF0LWJ1dHRvbi1mb2N1cy1vdmVybGF5e2JhY2tncm91bmQtY29sb3I6I2ZmZDc0MH0ubWF0LWJ1dHRvbi5tYXQtd2FybiAubWF0LWJ1dHRvbi1mb2N1cy1vdmVybGF5LC5tYXQtaWNvbi1idXR0b24ubWF0LXdhcm4gLm1hdC1idXR0b24tZm9jdXMtb3ZlcmxheSwubWF0LXN0cm9rZWQtYnV0dG9uLm1hdC13YXJuIC5tYXQtYnV0dG9uLWZvY3VzLW92ZXJsYXl7YmFja2dyb3VuZC1jb2xvcjojZjQ0MzM2fS5tYXQtYnV0dG9uW2Rpc2FibGVkXSAubWF0LWJ1dHRvbi1mb2N1cy1vdmVybGF5LC5tYXQtaWNvbi1idXR0b25bZGlzYWJsZWRdIC5tYXQtYnV0dG9uLWZvY3VzLW92ZXJsYXksLm1hdC1zdHJva2VkLWJ1dHRvbltkaXNhYmxlZF0gLm1hdC1idXR0b24tZm9jdXMtb3ZlcmxheXtiYWNrZ3JvdW5kLWNvbG9yOnRyYW5zcGFyZW50fS5tYXQtYnV0dG9uIC5tYXQtcmlwcGxlLWVsZW1lbnQsLm1hdC1pY29uLWJ1dHRvbiAubWF0LXJpcHBsZS1lbGVtZW50LC5tYXQtc3Ryb2tlZC1idXR0b24gLm1hdC1yaXBwbGUtZWxlbWVudHtvcGFjaXR5Oi4xO2JhY2tncm91bmQtY29sb3I6Y3VycmVudENvbG9yfS5tYXQtYnV0dG9uLWZvY3VzLW92ZXJsYXl7YmFja2dyb3VuZDojMDAwfS5tYXQtc3Ryb2tlZC1idXR0b246bm90KFtkaXNhYmxlZF0pe2JvcmRlci1jb2xvcjpyZ2JhKDAsMCwwLC4xMil9Lm1hdC1mYWIsLm1hdC1mbGF0LWJ1dHRvbiwubWF0LW1pbmktZmFiLC5tYXQtcmFpc2VkLWJ1dHRvbntjb2xvcjpyZ2JhKDAsMCwwLC44Nyk7YmFja2dyb3VuZC1jb2xvcjojZmZmfS5tYXQtZmFiLm1hdC1wcmltYXJ5LC5tYXQtZmxhdC1idXR0b24ubWF0LXByaW1hcnksLm1hdC1taW5pLWZhYi5tYXQtcHJpbWFyeSwubWF0LXJhaXNlZC1idXR0b24ubWF0LXByaW1hcnl7Y29sb3I6I2ZmZn0ubWF0LWZhYi5tYXQtYWNjZW50LC5tYXQtZmxhdC1idXR0b24ubWF0LWFjY2VudCwubWF0LW1pbmktZmFiLm1hdC1hY2NlbnQsLm1hdC1yYWlzZWQtYnV0dG9uLm1hdC1hY2NlbnR7Y29sb3I6cmdiYSgwLDAsMCwuODcpfS5tYXQtZmFiLm1hdC13YXJuLC5tYXQtZmxhdC1idXR0b24ubWF0LXdhcm4sLm1hdC1taW5pLWZhYi5tYXQtd2FybiwubWF0LXJhaXNlZC1idXR0b24ubWF0LXdhcm57Y29sb3I6I2ZmZn0ubWF0LWZhYi5tYXQtYWNjZW50W2Rpc2FibGVkXSwubWF0LWZhYi5tYXQtcHJpbWFyeVtkaXNhYmxlZF0sLm1hdC1mYWIubWF0LXdhcm5bZGlzYWJsZWRdLC5tYXQtZmFiW2Rpc2FibGVkXVtkaXNhYmxlZF0sLm1hdC1mbGF0LWJ1dHRvbi5tYXQtYWNjZW50W2Rpc2FibGVkXSwubWF0LWZsYXQtYnV0dG9uLm1hdC1wcmltYXJ5W2Rpc2FibGVkXSwubWF0LWZsYXQtYnV0dG9uLm1hdC13YXJuW2Rpc2FibGVkXSwubWF0LWZsYXQtYnV0dG9uW2Rpc2FibGVkXVtkaXNhYmxlZF0sLm1hdC1taW5pLWZhYi5tYXQtYWNjZW50W2Rpc2FibGVkXSwubWF0LW1pbmktZmFiLm1hdC1wcmltYXJ5W2Rpc2FibGVkXSwubWF0LW1pbmktZmFiLm1hdC13YXJuW2Rpc2FibGVkXSwubWF0LW1pbmktZmFiW2Rpc2FibGVkXVtkaXNhYmxlZF0sLm1hdC1yYWlzZWQtYnV0dG9uLm1hdC1hY2NlbnRbZGlzYWJsZWRdLC5tYXQtcmFpc2VkLWJ1dHRvbi5tYXQtcHJpbWFyeVtkaXNhYmxlZF0sLm1hdC1yYWlzZWQtYnV0dG9uLm1hdC13YXJuW2Rpc2FibGVkXSwubWF0LXJhaXNlZC1idXR0b25bZGlzYWJsZWRdW2Rpc2FibGVkXXtjb2xvcjpyZ2JhKDAsMCwwLC4yNil9Lm1hdC1mYWIubWF0LXByaW1hcnksLm1hdC1mbGF0LWJ1dHRvbi5tYXQtcHJpbWFyeSwubWF0LW1pbmktZmFiLm1hdC1wcmltYXJ5LC5tYXQtcmFpc2VkLWJ1dHRvbi5tYXQtcHJpbWFyeXtiYWNrZ3JvdW5kLWNvbG9yOiM2NzNhYjd9Lm1hdC1mYWIubWF0LWFjY2VudCwubWF0LWZsYXQtYnV0dG9uLm1hdC1hY2NlbnQsLm1hdC1taW5pLWZhYi5tYXQtYWNjZW50LC5tYXQtcmFpc2VkLWJ1dHRvbi5tYXQtYWNjZW50e2JhY2tncm91bmQtY29sb3I6I2ZmZDc0MH0ubWF0LWZhYi5tYXQtd2FybiwubWF0LWZsYXQtYnV0dG9uLm1hdC13YXJuLC5tYXQtbWluaS1mYWIubWF0LXdhcm4sLm1hdC1yYWlzZWQtYnV0dG9uLm1hdC13YXJue2JhY2tncm91bmQtY29sb3I6I2Y0NDMzNn0ubWF0LWZhYi5tYXQtYWNjZW50W2Rpc2FibGVkXSwubWF0LWZhYi5tYXQtcHJpbWFyeVtkaXNhYmxlZF0sLm1hdC1mYWIubWF0LXdhcm5bZGlzYWJsZWRdLC5tYXQtZmFiW2Rpc2FibGVkXVtkaXNhYmxlZF0sLm1hdC1mbGF0LWJ1dHRvbi5tYXQtYWNjZW50W2Rpc2FibGVkXSwubWF0LWZsYXQtYnV0dG9uLm1hdC1wcmltYXJ5W2Rpc2FibGVkXSwubWF0LWZsYXQtYnV0dG9uLm1hdC13YXJuW2Rpc2FibGVkXSwubWF0LWZsYXQtYnV0dG9uW2Rpc2FibGVkXVtkaXNhYmxlZF0sLm1hdC1taW5pLWZhYi5tYXQtYWNjZW50W2Rpc2FibGVkXSwubWF0LW1pbmktZmFiLm1hdC1wcmltYXJ5W2Rpc2FibGVkXSwubWF0LW1pbmktZmFiLm1hdC13YXJuW2Rpc2FibGVkXSwubWF0LW1pbmktZmFiW2Rpc2FibGVkXVtkaXNhYmxlZF0sLm1hdC1yYWlzZWQtYnV0dG9uLm1hdC1hY2NlbnRbZGlzYWJsZWRdLC5tYXQtcmFpc2VkLWJ1dHRvbi5tYXQtcHJpbWFyeVtkaXNhYmxlZF0sLm1hdC1yYWlzZWQtYnV0dG9uLm1hdC13YXJuW2Rpc2FibGVkXSwubWF0LXJhaXNlZC1idXR0b25bZGlzYWJsZWRdW2Rpc2FibGVkXXtiYWNrZ3JvdW5kLWNvbG9yOnJnYmEoMCwwLDAsLjEyKX0ubWF0LWZhYi5tYXQtcHJpbWFyeSAubWF0LXJpcHBsZS1lbGVtZW50LC5tYXQtZmxhdC1idXR0b24ubWF0LXByaW1hcnkgLm1hdC1yaXBwbGUtZWxlbWVudCwubWF0LW1pbmktZmFiLm1hdC1wcmltYXJ5IC5tYXQtcmlwcGxlLWVsZW1lbnQsLm1hdC1yYWlzZWQtYnV0dG9uLm1hdC1wcmltYXJ5IC5tYXQtcmlwcGxlLWVsZW1lbnR7YmFja2dyb3VuZC1jb2xvcjpyZ2JhKDI1NSwyNTUsMjU1LC4xKX0ubWF0LWZhYi5tYXQtYWNjZW50IC5tYXQtcmlwcGxlLWVsZW1lbnQsLm1hdC1mbGF0LWJ1dHRvbi5tYXQtYWNjZW50IC5tYXQtcmlwcGxlLWVsZW1lbnQsLm1hdC1taW5pLWZhYi5tYXQtYWNjZW50IC5tYXQtcmlwcGxlLWVsZW1lbnQsLm1hdC1yYWlzZWQtYnV0dG9uLm1hdC1hY2NlbnQgLm1hdC1yaXBwbGUtZWxlbWVudHtiYWNrZ3JvdW5kLWNvbG9yOnJnYmEoMCwwLDAsLjEpfS5tYXQtZmFiLm1hdC13YXJuIC5tYXQtcmlwcGxlLWVsZW1lbnQsLm1hdC1mbGF0LWJ1dHRvbi5tYXQtd2FybiAubWF0LXJpcHBsZS1lbGVtZW50LC5tYXQtbWluaS1mYWIubWF0LXdhcm4gLm1hdC1yaXBwbGUtZWxlbWVudCwubWF0LXJhaXNlZC1idXR0b24ubWF0LXdhcm4gLm1hdC1yaXBwbGUtZWxlbWVudHtiYWNrZ3JvdW5kLWNvbG9yOnJnYmEoMjU1LDI1NSwyNTUsLjEpfS5tYXQtZmxhdC1idXR0b246bm90KFtjbGFzcyo9bWF0LWVsZXZhdGlvbi16XSksLm1hdC1zdHJva2VkLWJ1dHRvbjpub3QoW2NsYXNzKj1tYXQtZWxldmF0aW9uLXpdKXtib3gtc2hhZG93OjAgMCAwIDAgcmdiYSgwLDAsMCwuMiksMCAwIDAgMCByZ2JhKDAsMCwwLC4xNCksMCAwIDAgMCByZ2JhKDAsMCwwLC4xMil9Lm1hdC1yYWlzZWQtYnV0dG9uOm5vdChbY2xhc3MqPW1hdC1lbGV2YXRpb24tel0pe2JveC1zaGFkb3c6MCAzcHggMXB4IC0ycHggcmdiYSgwLDAsMCwuMiksMCAycHggMnB4IDAgcmdiYSgwLDAsMCwuMTQpLDAgMXB4IDVweCAwIHJnYmEoMCwwLDAsLjEyKX0ubWF0LXJhaXNlZC1idXR0b246bm90KFtkaXNhYmxlZF0pOmFjdGl2ZTpub3QoW2NsYXNzKj1tYXQtZWxldmF0aW9uLXpdKXtib3gtc2hhZG93OjAgNXB4IDVweCAtM3B4IHJnYmEoMCwwLDAsLjIpLDAgOHB4IDEwcHggMXB4IHJnYmEoMCwwLDAsLjE0KSwwIDNweCAxNHB4IDJweCByZ2JhKDAsMCwwLC4xMil9Lm1hdC1yYWlzZWQtYnV0dG9uW2Rpc2FibGVkXTpub3QoW2NsYXNzKj1tYXQtZWxldmF0aW9uLXpdKXtib3gtc2hhZG93OjAgMCAwIDAgcmdiYSgwLDAsMCwuMiksMCAwIDAgMCByZ2JhKDAsMCwwLC4xNCksMCAwIDAgMCByZ2JhKDAsMCwwLC4xMil9Lm1hdC1mYWI6bm90KFtjbGFzcyo9bWF0LWVsZXZhdGlvbi16XSksLm1hdC1taW5pLWZhYjpub3QoW2NsYXNzKj1tYXQtZWxldmF0aW9uLXpdKXtib3gtc2hhZG93OjAgM3B4IDVweCAtMXB4IHJnYmEoMCwwLDAsLjIpLDAgNnB4IDEwcHggMCByZ2JhKDAsMCwwLC4xNCksMCAxcHggMThweCAwIHJnYmEoMCwwLDAsLjEyKX0ubWF0LWZhYjpub3QoW2Rpc2FibGVkXSk6YWN0aXZlOm5vdChbY2xhc3MqPW1hdC1lbGV2YXRpb24tel0pLC5tYXQtbWluaS1mYWI6bm90KFtkaXNhYmxlZF0pOmFjdGl2ZTpub3QoW2NsYXNzKj1tYXQtZWxldmF0aW9uLXpdKXtib3gtc2hhZG93OjAgN3B4IDhweCAtNHB4IHJnYmEoMCwwLDAsLjIpLDAgMTJweCAxN3B4IDJweCByZ2JhKDAsMCwwLC4xNCksMCA1cHggMjJweCA0cHggcmdiYSgwLDAsMCwuMTIpfS5tYXQtZmFiW2Rpc2FibGVkXTpub3QoW2NsYXNzKj1tYXQtZWxldmF0aW9uLXpdKSwubWF0LW1pbmktZmFiW2Rpc2FibGVkXTpub3QoW2NsYXNzKj1tYXQtZWxldmF0aW9uLXpdKXtib3gtc2hhZG93OjAgMCAwIDAgcmdiYSgwLDAsMCwuMiksMCAwIDAgMCByZ2JhKDAsMCwwLC4xNCksMCAwIDAgMCByZ2JhKDAsMCwwLC4xMil9Lm1hdC1idXR0b24tdG9nZ2xlLWdyb3VwLC5tYXQtYnV0dG9uLXRvZ2dsZS1zdGFuZGFsb25le2JveC1zaGFkb3c6MCAzcHggMXB4IC0ycHggcmdiYSgwLDAsMCwuMiksMCAycHggMnB4IDAgcmdiYSgwLDAsMCwuMTQpLDAgMXB4IDVweCAwIHJnYmEoMCwwLDAsLjEyKX0ubWF0LWJ1dHRvbi10b2dnbGUtZ3JvdXAtYXBwZWFyYW5jZS1zdGFuZGFyZCwubWF0LWJ1dHRvbi10b2dnbGUtc3RhbmRhbG9uZS5tYXQtYnV0dG9uLXRvZ2dsZS1hcHBlYXJhbmNlLXN0YW5kYXJke2JveC1zaGFkb3c6bm9uZX0ubWF0LWJ1dHRvbi10b2dnbGV7Y29sb3I6cmdiYSgwLDAsMCwuMzgpfS5tYXQtYnV0dG9uLXRvZ2dsZSAubWF0LWJ1dHRvbi10b2dnbGUtZm9jdXMtb3ZlcmxheXtiYWNrZ3JvdW5kLWNvbG9yOnJnYmEoMCwwLDAsLjEyKX0ubWF0LWJ1dHRvbi10b2dnbGUtYXBwZWFyYW5jZS1zdGFuZGFyZHtjb2xvcjpyZ2JhKDAsMCwwLC44Nyk7YmFja2dyb3VuZDojZmZmfS5tYXQtYnV0dG9uLXRvZ2dsZS1hcHBlYXJhbmNlLXN0YW5kYXJkIC5tYXQtYnV0dG9uLXRvZ2dsZS1mb2N1cy1vdmVybGF5e2JhY2tncm91bmQtY29sb3I6IzAwMH0ubWF0LWJ1dHRvbi10b2dnbGUtZ3JvdXAtYXBwZWFyYW5jZS1zdGFuZGFyZCAubWF0LWJ1dHRvbi10b2dnbGUrLm1hdC1idXR0b24tdG9nZ2xle2JvcmRlci1sZWZ0OnNvbGlkIDFweCByZ2JhKDAsMCwwLC4xMil9W2Rpcj1ydGxdIC5tYXQtYnV0dG9uLXRvZ2dsZS1ncm91cC1hcHBlYXJhbmNlLXN0YW5kYXJkIC5tYXQtYnV0dG9uLXRvZ2dsZSsubWF0LWJ1dHRvbi10b2dnbGV7Ym9yZGVyLWxlZnQ6bm9uZTtib3JkZXItcmlnaHQ6c29saWQgMXB4IHJnYmEoMCwwLDAsLjEyKX0ubWF0LWJ1dHRvbi10b2dnbGUtZ3JvdXAtYXBwZWFyYW5jZS1zdGFuZGFyZC5tYXQtYnV0dG9uLXRvZ2dsZS12ZXJ0aWNhbCAubWF0LWJ1dHRvbi10b2dnbGUrLm1hdC1idXR0b24tdG9nZ2xle2JvcmRlci1sZWZ0Om5vbmU7Ym9yZGVyLXJpZ2h0Om5vbmU7Ym9yZGVyLXRvcDpzb2xpZCAxcHggcmdiYSgwLDAsMCwuMTIpfS5tYXQtYnV0dG9uLXRvZ2dsZS1jaGVja2Vke2JhY2tncm91bmQtY29sb3I6I2UwZTBlMDtjb2xvcjpyZ2JhKDAsMCwwLC41NCl9Lm1hdC1idXR0b24tdG9nZ2xlLWNoZWNrZWQubWF0LWJ1dHRvbi10b2dnbGUtYXBwZWFyYW5jZS1zdGFuZGFyZHtjb2xvcjpyZ2JhKDAsMCwwLC44Nyl9Lm1hdC1idXR0b24tdG9nZ2xlLWRpc2FibGVke2NvbG9yOnJnYmEoMCwwLDAsLjI2KTtiYWNrZ3JvdW5kLWNvbG9yOiNlZWV9Lm1hdC1idXR0b24tdG9nZ2xlLWRpc2FibGVkLm1hdC1idXR0b24tdG9nZ2xlLWFwcGVhcmFuY2Utc3RhbmRhcmR7YmFja2dyb3VuZDojZmZmfS5tYXQtYnV0dG9uLXRvZ2dsZS1kaXNhYmxlZC5tYXQtYnV0dG9uLXRvZ2dsZS1jaGVja2Vke2JhY2tncm91bmQtY29sb3I6I2JkYmRiZH0ubWF0LWJ1dHRvbi10b2dnbGUtZ3JvdXAtYXBwZWFyYW5jZS1zdGFuZGFyZCwubWF0LWJ1dHRvbi10b2dnbGUtc3RhbmRhbG9uZS5tYXQtYnV0dG9uLXRvZ2dsZS1hcHBlYXJhbmNlLXN0YW5kYXJke2JvcmRlcjpzb2xpZCAxcHggcmdiYSgwLDAsMCwuMTIpfS5tYXQtY2FyZHtiYWNrZ3JvdW5kOiNmZmY7Y29sb3I6cmdiYSgwLDAsMCwuODcpfS5tYXQtY2FyZDpub3QoW2NsYXNzKj1tYXQtZWxldmF0aW9uLXpdKXtib3gtc2hhZG93OjAgMnB4IDFweCAtMXB4IHJnYmEoMCwwLDAsLjIpLDAgMXB4IDFweCAwIHJnYmEoMCwwLDAsLjE0KSwwIDFweCAzcHggMCByZ2JhKDAsMCwwLC4xMil9Lm1hdC1jYXJkLm1hdC1jYXJkLWZsYXQ6bm90KFtjbGFzcyo9bWF0LWVsZXZhdGlvbi16XSl7Ym94LXNoYWRvdzowIDAgMCAwIHJnYmEoMCwwLDAsLjIpLDAgMCAwIDAgcmdiYSgwLDAsMCwuMTQpLDAgMCAwIDAgcmdiYSgwLDAsMCwuMTIpfS5tYXQtY2FyZC1zdWJ0aXRsZXtjb2xvcjpyZ2JhKDAsMCwwLC41NCl9Lm1hdC1jaGVja2JveC1mcmFtZXtib3JkZXItY29sb3I6cmdiYSgwLDAsMCwuNTQpfS5tYXQtY2hlY2tib3gtY2hlY2ttYXJre2ZpbGw6I2ZhZmFmYX0ubWF0LWNoZWNrYm94LWNoZWNrbWFyay1wYXRoe3N0cm9rZTojZmFmYWZhIWltcG9ydGFudH1AbWVkaWEgKC1tcy1oaWdoLWNvbnRyYXN0OmJsYWNrLW9uLXdoaXRlKXsubWF0LWNoZWNrYm94LWNoZWNrbWFyay1wYXRoe3N0cm9rZTojMDAwIWltcG9ydGFudH19Lm1hdC1jaGVja2JveC1taXhlZG1hcmt7YmFja2dyb3VuZC1jb2xvcjojZmFmYWZhfS5tYXQtY2hlY2tib3gtY2hlY2tlZC5tYXQtcHJpbWFyeSAubWF0LWNoZWNrYm94LWJhY2tncm91bmQsLm1hdC1jaGVja2JveC1pbmRldGVybWluYXRlLm1hdC1wcmltYXJ5IC5tYXQtY2hlY2tib3gtYmFja2dyb3VuZHtiYWNrZ3JvdW5kLWNvbG9yOiM2NzNhYjd9Lm1hdC1jaGVja2JveC1jaGVja2VkLm1hdC1hY2NlbnQgLm1hdC1jaGVja2JveC1iYWNrZ3JvdW5kLC5tYXQtY2hlY2tib3gtaW5kZXRlcm1pbmF0ZS5tYXQtYWNjZW50IC5tYXQtY2hlY2tib3gtYmFja2dyb3VuZHtiYWNrZ3JvdW5kLWNvbG9yOiNmZmQ3NDB9Lm1hdC1jaGVja2JveC1jaGVja2VkLm1hdC13YXJuIC5tYXQtY2hlY2tib3gtYmFja2dyb3VuZCwubWF0LWNoZWNrYm94LWluZGV0ZXJtaW5hdGUubWF0LXdhcm4gLm1hdC1jaGVja2JveC1iYWNrZ3JvdW5ke2JhY2tncm91bmQtY29sb3I6I2Y0NDMzNn0ubWF0LWNoZWNrYm94LWRpc2FibGVkLm1hdC1jaGVja2JveC1jaGVja2VkIC5tYXQtY2hlY2tib3gtYmFja2dyb3VuZCwubWF0LWNoZWNrYm94LWRpc2FibGVkLm1hdC1jaGVja2JveC1pbmRldGVybWluYXRlIC5tYXQtY2hlY2tib3gtYmFja2dyb3VuZHtiYWNrZ3JvdW5kLWNvbG9yOiNiMGIwYjB9Lm1hdC1jaGVja2JveC1kaXNhYmxlZDpub3QoLm1hdC1jaGVja2JveC1jaGVja2VkKSAubWF0LWNoZWNrYm94LWZyYW1le2JvcmRlci1jb2xvcjojYjBiMGIwfS5tYXQtY2hlY2tib3gtZGlzYWJsZWQgLm1hdC1jaGVja2JveC1sYWJlbHtjb2xvcjpyZ2JhKDAsMCwwLC41NCl9QG1lZGlhICgtbXMtaGlnaC1jb250cmFzdDphY3RpdmUpey5tYXQtY2hlY2tib3gtZGlzYWJsZWR7b3BhY2l0eTouNX19QG1lZGlhICgtbXMtaGlnaC1jb250cmFzdDphY3RpdmUpey5tYXQtY2hlY2tib3gtYmFja2dyb3VuZHtiYWNrZ3JvdW5kOjAgMH19Lm1hdC1jaGVja2JveDpub3QoLm1hdC1jaGVja2JveC1kaXNhYmxlZCkubWF0LXByaW1hcnkgLm1hdC1jaGVja2JveC1yaXBwbGUgLm1hdC1yaXBwbGUtZWxlbWVudHtiYWNrZ3JvdW5kLWNvbG9yOiM2NzNhYjd9Lm1hdC1jaGVja2JveDpub3QoLm1hdC1jaGVja2JveC1kaXNhYmxlZCkubWF0LWFjY2VudCAubWF0LWNoZWNrYm94LXJpcHBsZSAubWF0LXJpcHBsZS1lbGVtZW50e2JhY2tncm91bmQtY29sb3I6I2ZmZDc0MH0ubWF0LWNoZWNrYm94Om5vdCgubWF0LWNoZWNrYm94LWRpc2FibGVkKS5tYXQtd2FybiAubWF0LWNoZWNrYm94LXJpcHBsZSAubWF0LXJpcHBsZS1lbGVtZW50e2JhY2tncm91bmQtY29sb3I6I2Y0NDMzNn0ubWF0LWNoaXAubWF0LXN0YW5kYXJkLWNoaXB7YmFja2dyb3VuZC1jb2xvcjojZTBlMGUwO2NvbG9yOnJnYmEoMCwwLDAsLjg3KX0ubWF0LWNoaXAubWF0LXN0YW5kYXJkLWNoaXAgLm1hdC1jaGlwLXJlbW92ZXtjb2xvcjpyZ2JhKDAsMCwwLC44Nyk7b3BhY2l0eTouNH0ubWF0LWNoaXAubWF0LXN0YW5kYXJkLWNoaXA6bm90KC5tYXQtY2hpcC1kaXNhYmxlZCk6YWN0aXZle2JveC1zaGFkb3c6MCAzcHggM3B4IC0ycHggcmdiYSgwLDAsMCwuMiksMCAzcHggNHB4IDAgcmdiYSgwLDAsMCwuMTQpLDAgMXB4IDhweCAwIHJnYmEoMCwwLDAsLjEyKX0ubWF0LWNoaXAubWF0LXN0YW5kYXJkLWNoaXA6bm90KC5tYXQtY2hpcC1kaXNhYmxlZCkgLm1hdC1jaGlwLXJlbW92ZTpob3ZlcntvcGFjaXR5Oi41NH0ubWF0LWNoaXAubWF0LXN0YW5kYXJkLWNoaXAubWF0LWNoaXAtZGlzYWJsZWR7b3BhY2l0eTouNH0ubWF0LWNoaXAubWF0LXN0YW5kYXJkLWNoaXA6OmFmdGVye2JhY2tncm91bmQ6IzAwMH0ubWF0LWNoaXAubWF0LXN0YW5kYXJkLWNoaXAubWF0LWNoaXAtc2VsZWN0ZWQubWF0LXByaW1hcnl7YmFja2dyb3VuZC1jb2xvcjojNjczYWI3O2NvbG9yOiNmZmZ9Lm1hdC1jaGlwLm1hdC1zdGFuZGFyZC1jaGlwLm1hdC1jaGlwLXNlbGVjdGVkLm1hdC1wcmltYXJ5IC5tYXQtY2hpcC1yZW1vdmV7Y29sb3I6I2ZmZjtvcGFjaXR5Oi40fS5tYXQtY2hpcC5tYXQtc3RhbmRhcmQtY2hpcC5tYXQtY2hpcC1zZWxlY3RlZC5tYXQtcHJpbWFyeSAubWF0LXJpcHBsZS1lbGVtZW50e2JhY2tncm91bmQ6cmdiYSgyNTUsMjU1LDI1NSwuMSl9Lm1hdC1jaGlwLm1hdC1zdGFuZGFyZC1jaGlwLm1hdC1jaGlwLXNlbGVjdGVkLm1hdC13YXJue2JhY2tncm91bmQtY29sb3I6I2Y0NDMzNjtjb2xvcjojZmZmfS5tYXQtY2hpcC5tYXQtc3RhbmRhcmQtY2hpcC5tYXQtY2hpcC1zZWxlY3RlZC5tYXQtd2FybiAubWF0LWNoaXAtcmVtb3Zle2NvbG9yOiNmZmY7b3BhY2l0eTouNH0ubWF0LWNoaXAubWF0LXN0YW5kYXJkLWNoaXAubWF0LWNoaXAtc2VsZWN0ZWQubWF0LXdhcm4gLm1hdC1yaXBwbGUtZWxlbWVudHtiYWNrZ3JvdW5kOnJnYmEoMjU1LDI1NSwyNTUsLjEpfS5tYXQtY2hpcC5tYXQtc3RhbmRhcmQtY2hpcC5tYXQtY2hpcC1zZWxlY3RlZC5tYXQtYWNjZW50e2JhY2tncm91bmQtY29sb3I6I2ZmZDc0MDtjb2xvcjpyZ2JhKDAsMCwwLC44Nyl9Lm1hdC1jaGlwLm1hdC1zdGFuZGFyZC1jaGlwLm1hdC1jaGlwLXNlbGVjdGVkLm1hdC1hY2NlbnQgLm1hdC1jaGlwLXJlbW92ZXtjb2xvcjpyZ2JhKDAsMCwwLC44Nyk7b3BhY2l0eTouNH0ubWF0LWNoaXAubWF0LXN0YW5kYXJkLWNoaXAubWF0LWNoaXAtc2VsZWN0ZWQubWF0LWFjY2VudCAubWF0LXJpcHBsZS1lbGVtZW50e2JhY2tncm91bmQ6cmdiYSgwLDAsMCwuMSl9Lm1hdC10YWJsZXtiYWNrZ3JvdW5kOiNmZmZ9Lm1hdC10YWJsZSB0Ym9keSwubWF0LXRhYmxlIHRmb290LC5tYXQtdGFibGUgdGhlYWQsLm1hdC10YWJsZS1zdGlja3ksW21hdC1mb290ZXItcm93XSxbbWF0LWhlYWRlci1yb3ddLFttYXQtcm93XSxtYXQtZm9vdGVyLXJvdyxtYXQtaGVhZGVyLXJvdyxtYXQtcm93e2JhY2tncm91bmQ6aW5oZXJpdH1tYXQtZm9vdGVyLXJvdyxtYXQtaGVhZGVyLXJvdyxtYXQtcm93LHRkLm1hdC1jZWxsLHRkLm1hdC1mb290ZXItY2VsbCx0aC5tYXQtaGVhZGVyLWNlbGx7Ym9yZGVyLWJvdHRvbS1jb2xvcjpyZ2JhKDAsMCwwLC4xMil9Lm1hdC1oZWFkZXItY2VsbHtjb2xvcjpyZ2JhKDAsMCwwLC41NCl9Lm1hdC1jZWxsLC5tYXQtZm9vdGVyLWNlbGx7Y29sb3I6cmdiYSgwLDAsMCwuODcpfS5tYXQtY2FsZW5kYXItYXJyb3d7Ym9yZGVyLXRvcC1jb2xvcjpyZ2JhKDAsMCwwLC41NCl9Lm1hdC1kYXRlcGlja2VyLWNvbnRlbnQgLm1hdC1jYWxlbmRhci1uZXh0LWJ1dHRvbiwubWF0LWRhdGVwaWNrZXItY29udGVudCAubWF0LWNhbGVuZGFyLXByZXZpb3VzLWJ1dHRvbiwubWF0LWRhdGVwaWNrZXItdG9nZ2xle2NvbG9yOnJnYmEoMCwwLDAsLjU0KX0ubWF0LWNhbGVuZGFyLXRhYmxlLWhlYWRlcntjb2xvcjpyZ2JhKDAsMCwwLC4zOCl9Lm1hdC1jYWxlbmRhci10YWJsZS1oZWFkZXItZGl2aWRlcjo6YWZ0ZXJ7YmFja2dyb3VuZDpyZ2JhKDAsMCwwLC4xMil9Lm1hdC1jYWxlbmRhci1ib2R5LWxhYmVse2NvbG9yOnJnYmEoMCwwLDAsLjU0KX0ubWF0LWNhbGVuZGFyLWJvZHktY2VsbC1jb250ZW50e2NvbG9yOnJnYmEoMCwwLDAsLjg3KTtib3JkZXItY29sb3I6dHJhbnNwYXJlbnR9Lm1hdC1jYWxlbmRhci1ib2R5LWRpc2FibGVkPi5tYXQtY2FsZW5kYXItYm9keS1jZWxsLWNvbnRlbnQ6bm90KC5tYXQtY2FsZW5kYXItYm9keS1zZWxlY3RlZCl7Y29sb3I6cmdiYSgwLDAsMCwuMzgpfS5jZGsta2V5Ym9hcmQtZm9jdXNlZCAubWF0LWNhbGVuZGFyLWJvZHktYWN0aXZlPi5tYXQtY2FsZW5kYXItYm9keS1jZWxsLWNvbnRlbnQ6bm90KC5tYXQtY2FsZW5kYXItYm9keS1zZWxlY3RlZCksLmNkay1wcm9ncmFtLWZvY3VzZWQgLm1hdC1jYWxlbmRhci1ib2R5LWFjdGl2ZT4ubWF0LWNhbGVuZGFyLWJvZHktY2VsbC1jb250ZW50Om5vdCgubWF0LWNhbGVuZGFyLWJvZHktc2VsZWN0ZWQpLC5tYXQtY2FsZW5kYXItYm9keS1jZWxsOm5vdCgubWF0LWNhbGVuZGFyLWJvZHktZGlzYWJsZWQpOmhvdmVyPi5tYXQtY2FsZW5kYXItYm9keS1jZWxsLWNvbnRlbnQ6bm90KC5tYXQtY2FsZW5kYXItYm9keS1zZWxlY3RlZCl7YmFja2dyb3VuZC1jb2xvcjpyZ2JhKDAsMCwwLC4wNCl9Lm1hdC1jYWxlbmRhci1ib2R5LXRvZGF5Om5vdCgubWF0LWNhbGVuZGFyLWJvZHktc2VsZWN0ZWQpe2JvcmRlci1jb2xvcjpyZ2JhKDAsMCwwLC4zOCl9Lm1hdC1jYWxlbmRhci1ib2R5LWRpc2FibGVkPi5tYXQtY2FsZW5kYXItYm9keS10b2RheTpub3QoLm1hdC1jYWxlbmRhci1ib2R5LXNlbGVjdGVkKXtib3JkZXItY29sb3I6cmdiYSgwLDAsMCwuMTgpfS5tYXQtY2FsZW5kYXItYm9keS1zZWxlY3RlZHtiYWNrZ3JvdW5kLWNvbG9yOiM2NzNhYjc7Y29sb3I6I2ZmZn0ubWF0LWNhbGVuZGFyLWJvZHktZGlzYWJsZWQ+Lm1hdC1jYWxlbmRhci1ib2R5LXNlbGVjdGVke2JhY2tncm91bmQtY29sb3I6cmdiYSgxMDMsNTgsMTgzLC40KX0ubWF0LWNhbGVuZGFyLWJvZHktdG9kYXkubWF0LWNhbGVuZGFyLWJvZHktc2VsZWN0ZWR7Ym94LXNoYWRvdzppbnNldCAwIDAgMCAxcHggI2ZmZn0ubWF0LWRhdGVwaWNrZXItY29udGVudHtib3gtc2hhZG93OjAgMnB4IDRweCAtMXB4IHJnYmEoMCwwLDAsLjIpLDAgNHB4IDVweCAwIHJnYmEoMCwwLDAsLjE0KSwwIDFweCAxMHB4IDAgcmdiYSgwLDAsMCwuMTIpO2JhY2tncm91bmQtY29sb3I6I2ZmZjtjb2xvcjpyZ2JhKDAsMCwwLC44Nyl9Lm1hdC1kYXRlcGlja2VyLWNvbnRlbnQubWF0LWFjY2VudCAubWF0LWNhbGVuZGFyLWJvZHktc2VsZWN0ZWR7YmFja2dyb3VuZC1jb2xvcjojZmZkNzQwO2NvbG9yOnJnYmEoMCwwLDAsLjg3KX0ubWF0LWRhdGVwaWNrZXItY29udGVudC5tYXQtYWNjZW50IC5tYXQtY2FsZW5kYXItYm9keS1kaXNhYmxlZD4ubWF0LWNhbGVuZGFyLWJvZHktc2VsZWN0ZWR7YmFja2dyb3VuZC1jb2xvcjpyZ2JhKDI1NSwyMTUsNjQsLjQpfS5tYXQtZGF0ZXBpY2tlci1jb250ZW50Lm1hdC1hY2NlbnQgLm1hdC1jYWxlbmRhci1ib2R5LXRvZGF5Lm1hdC1jYWxlbmRhci1ib2R5LXNlbGVjdGVke2JveC1zaGFkb3c6aW5zZXQgMCAwIDAgMXB4IHJnYmEoMCwwLDAsLjg3KX0ubWF0LWRhdGVwaWNrZXItY29udGVudC5tYXQtd2FybiAubWF0LWNhbGVuZGFyLWJvZHktc2VsZWN0ZWR7YmFja2dyb3VuZC1jb2xvcjojZjQ0MzM2O2NvbG9yOiNmZmZ9Lm1hdC1kYXRlcGlja2VyLWNvbnRlbnQubWF0LXdhcm4gLm1hdC1jYWxlbmRhci1ib2R5LWRpc2FibGVkPi5tYXQtY2FsZW5kYXItYm9keS1zZWxlY3RlZHtiYWNrZ3JvdW5kLWNvbG9yOnJnYmEoMjQ0LDY3LDU0LC40KX0ubWF0LWRhdGVwaWNrZXItY29udGVudC5tYXQtd2FybiAubWF0LWNhbGVuZGFyLWJvZHktdG9kYXkubWF0LWNhbGVuZGFyLWJvZHktc2VsZWN0ZWR7Ym94LXNoYWRvdzppbnNldCAwIDAgMCAxcHggI2ZmZn0ubWF0LWRhdGVwaWNrZXItY29udGVudC10b3VjaHtib3gtc2hhZG93OjAgMCAwIDAgcmdiYSgwLDAsMCwuMiksMCAwIDAgMCByZ2JhKDAsMCwwLC4xNCksMCAwIDAgMCByZ2JhKDAsMCwwLC4xMil9Lm1hdC1kYXRlcGlja2VyLXRvZ2dsZS1hY3RpdmV7Y29sb3I6IzY3M2FiN30ubWF0LWRhdGVwaWNrZXItdG9nZ2xlLWFjdGl2ZS5tYXQtYWNjZW50e2NvbG9yOiNmZmQ3NDB9Lm1hdC1kYXRlcGlja2VyLXRvZ2dsZS1hY3RpdmUubWF0LXdhcm57Y29sb3I6I2Y0NDMzNn0ubWF0LWRpYWxvZy1jb250YWluZXJ7Ym94LXNoYWRvdzowIDExcHggMTVweCAtN3B4IHJnYmEoMCwwLDAsLjIpLDAgMjRweCAzOHB4IDNweCByZ2JhKDAsMCwwLC4xNCksMCA5cHggNDZweCA4cHggcmdiYSgwLDAsMCwuMTIpO2JhY2tncm91bmQ6I2ZmZjtjb2xvcjpyZ2JhKDAsMCwwLC44Nyl9Lm1hdC1kaXZpZGVye2JvcmRlci10b3AtY29sb3I6cmdiYSgwLDAsMCwuMTIpfS5tYXQtZGl2aWRlci12ZXJ0aWNhbHtib3JkZXItcmlnaHQtY29sb3I6cmdiYSgwLDAsMCwuMTIpfS5tYXQtZXhwYW5zaW9uLXBhbmVse2JhY2tncm91bmQ6I2ZmZjtjb2xvcjpyZ2JhKDAsMCwwLC44Nyl9Lm1hdC1leHBhbnNpb24tcGFuZWw6bm90KFtjbGFzcyo9bWF0LWVsZXZhdGlvbi16XSl7Ym94LXNoYWRvdzowIDNweCAxcHggLTJweCByZ2JhKDAsMCwwLC4yKSwwIDJweCAycHggMCByZ2JhKDAsMCwwLC4xNCksMCAxcHggNXB4IDAgcmdiYSgwLDAsMCwuMTIpfS5tYXQtYWN0aW9uLXJvd3tib3JkZXItdG9wLWNvbG9yOnJnYmEoMCwwLDAsLjEyKX0ubWF0LWV4cGFuc2lvbi1wYW5lbDpub3QoLm1hdC1leHBhbmRlZCkgLm1hdC1leHBhbnNpb24tcGFuZWwtaGVhZGVyOm5vdChbYXJpYS1kaXNhYmxlZD10cnVlXSkuY2RrLWtleWJvYXJkLWZvY3VzZWQsLm1hdC1leHBhbnNpb24tcGFuZWw6bm90KC5tYXQtZXhwYW5kZWQpIC5tYXQtZXhwYW5zaW9uLXBhbmVsLWhlYWRlcjpub3QoW2FyaWEtZGlzYWJsZWQ9dHJ1ZV0pLmNkay1wcm9ncmFtLWZvY3VzZWQsLm1hdC1leHBhbnNpb24tcGFuZWw6bm90KC5tYXQtZXhwYW5kZWQpIC5tYXQtZXhwYW5zaW9uLXBhbmVsLWhlYWRlcjpub3QoW2FyaWEtZGlzYWJsZWQ9dHJ1ZV0pOmhvdmVye2JhY2tncm91bmQ6cmdiYSgwLDAsMCwuMDQpfUBtZWRpYSAoaG92ZXI6bm9uZSl7Lm1hdC1leHBhbnNpb24tcGFuZWw6bm90KC5tYXQtZXhwYW5kZWQpOm5vdChbYXJpYS1kaXNhYmxlZD10cnVlXSkgLm1hdC1leHBhbnNpb24tcGFuZWwtaGVhZGVyOmhvdmVye2JhY2tncm91bmQ6I2ZmZn19Lm1hdC1leHBhbnNpb24tcGFuZWwtaGVhZGVyLXRpdGxle2NvbG9yOnJnYmEoMCwwLDAsLjg3KX0ubWF0LWV4cGFuc2lvbi1pbmRpY2F0b3I6OmFmdGVyLC5tYXQtZXhwYW5zaW9uLXBhbmVsLWhlYWRlci1kZXNjcmlwdGlvbntjb2xvcjpyZ2JhKDAsMCwwLC41NCl9Lm1hdC1leHBhbnNpb24tcGFuZWwtaGVhZGVyW2FyaWEtZGlzYWJsZWQ9dHJ1ZV17Y29sb3I6cmdiYSgwLDAsMCwuMjYpfS5tYXQtZXhwYW5zaW9uLXBhbmVsLWhlYWRlclthcmlhLWRpc2FibGVkPXRydWVdIC5tYXQtZXhwYW5zaW9uLXBhbmVsLWhlYWRlci1kZXNjcmlwdGlvbiwubWF0LWV4cGFuc2lvbi1wYW5lbC1oZWFkZXJbYXJpYS1kaXNhYmxlZD10cnVlXSAubWF0LWV4cGFuc2lvbi1wYW5lbC1oZWFkZXItdGl0bGV7Y29sb3I6aW5oZXJpdH0ubWF0LWZvcm0tZmllbGQtbGFiZWx7Y29sb3I6cmdiYSgwLDAsMCwuNil9Lm1hdC1oaW50e2NvbG9yOnJnYmEoMCwwLDAsLjYpfS5tYXQtZm9ybS1maWVsZC5tYXQtZm9jdXNlZCAubWF0LWZvcm0tZmllbGQtbGFiZWx7Y29sb3I6IzY3M2FiN30ubWF0LWZvcm0tZmllbGQubWF0LWZvY3VzZWQgLm1hdC1mb3JtLWZpZWxkLWxhYmVsLm1hdC1hY2NlbnR7Y29sb3I6I2ZmZDc0MH0ubWF0LWZvcm0tZmllbGQubWF0LWZvY3VzZWQgLm1hdC1mb3JtLWZpZWxkLWxhYmVsLm1hdC13YXJue2NvbG9yOiNmNDQzMzZ9Lm1hdC1mb2N1c2VkIC5tYXQtZm9ybS1maWVsZC1yZXF1aXJlZC1tYXJrZXJ7Y29sb3I6I2ZmZDc0MH0ubWF0LWZvcm0tZmllbGQtcmlwcGxle2JhY2tncm91bmQtY29sb3I6cmdiYSgwLDAsMCwuODcpfS5tYXQtZm9ybS1maWVsZC5tYXQtZm9jdXNlZCAubWF0LWZvcm0tZmllbGQtcmlwcGxle2JhY2tncm91bmQtY29sb3I6IzY3M2FiN30ubWF0LWZvcm0tZmllbGQubWF0LWZvY3VzZWQgLm1hdC1mb3JtLWZpZWxkLXJpcHBsZS5tYXQtYWNjZW50e2JhY2tncm91bmQtY29sb3I6I2ZmZDc0MH0ubWF0LWZvcm0tZmllbGQubWF0LWZvY3VzZWQgLm1hdC1mb3JtLWZpZWxkLXJpcHBsZS5tYXQtd2FybntiYWNrZ3JvdW5kLWNvbG9yOiNmNDQzMzZ9Lm1hdC1mb3JtLWZpZWxkLXR5cGUtbWF0LW5hdGl2ZS1zZWxlY3QubWF0LWZvY3VzZWQ6bm90KC5tYXQtZm9ybS1maWVsZC1pbnZhbGlkKSAubWF0LWZvcm0tZmllbGQtaW5maXg6OmFmdGVye2NvbG9yOiM2NzNhYjd9Lm1hdC1mb3JtLWZpZWxkLXR5cGUtbWF0LW5hdGl2ZS1zZWxlY3QubWF0LWZvY3VzZWQ6bm90KC5tYXQtZm9ybS1maWVsZC1pbnZhbGlkKS5tYXQtYWNjZW50IC5tYXQtZm9ybS1maWVsZC1pbmZpeDo6YWZ0ZXJ7Y29sb3I6I2ZmZDc0MH0ubWF0LWZvcm0tZmllbGQtdHlwZS1tYXQtbmF0aXZlLXNlbGVjdC5tYXQtZm9jdXNlZDpub3QoLm1hdC1mb3JtLWZpZWxkLWludmFsaWQpLm1hdC13YXJuIC5tYXQtZm9ybS1maWVsZC1pbmZpeDo6YWZ0ZXJ7Y29sb3I6I2Y0NDMzNn0ubWF0LWZvcm0tZmllbGQubWF0LWZvcm0tZmllbGQtaW52YWxpZCAubWF0LWZvcm0tZmllbGQtbGFiZWx7Y29sb3I6I2Y0NDMzNn0ubWF0LWZvcm0tZmllbGQubWF0LWZvcm0tZmllbGQtaW52YWxpZCAubWF0LWZvcm0tZmllbGQtbGFiZWwgLm1hdC1mb3JtLWZpZWxkLXJlcXVpcmVkLW1hcmtlciwubWF0LWZvcm0tZmllbGQubWF0LWZvcm0tZmllbGQtaW52YWxpZCAubWF0LWZvcm0tZmllbGQtbGFiZWwubWF0LWFjY2VudHtjb2xvcjojZjQ0MzM2fS5tYXQtZm9ybS1maWVsZC5tYXQtZm9ybS1maWVsZC1pbnZhbGlkIC5tYXQtZm9ybS1maWVsZC1yaXBwbGUsLm1hdC1mb3JtLWZpZWxkLm1hdC1mb3JtLWZpZWxkLWludmFsaWQgLm1hdC1mb3JtLWZpZWxkLXJpcHBsZS5tYXQtYWNjZW50e2JhY2tncm91bmQtY29sb3I6I2Y0NDMzNn0ubWF0LWVycm9ye2NvbG9yOiNmNDQzMzZ9Lm1hdC1mb3JtLWZpZWxkLWFwcGVhcmFuY2UtbGVnYWN5IC5tYXQtZm9ybS1maWVsZC1sYWJlbHtjb2xvcjpyZ2JhKDAsMCwwLC41NCl9Lm1hdC1mb3JtLWZpZWxkLWFwcGVhcmFuY2UtbGVnYWN5IC5tYXQtaGludHtjb2xvcjpyZ2JhKDAsMCwwLC41NCl9Lm1hdC1mb3JtLWZpZWxkLWFwcGVhcmFuY2UtbGVnYWN5IC5tYXQtZm9ybS1maWVsZC11bmRlcmxpbmV7YmFja2dyb3VuZC1jb2xvcjpyZ2JhKDAsMCwwLC40Mil9Lm1hdC1mb3JtLWZpZWxkLWFwcGVhcmFuY2UtbGVnYWN5Lm1hdC1mb3JtLWZpZWxkLWRpc2FibGVkIC5tYXQtZm9ybS1maWVsZC11bmRlcmxpbmV7YmFja2dyb3VuZC1pbWFnZTpsaW5lYXItZ3JhZGllbnQodG8gcmlnaHQscmdiYSgwLDAsMCwuNDIpIDAscmdiYSgwLDAsMCwuNDIpIDMzJSx0cmFuc3BhcmVudCAwKTtiYWNrZ3JvdW5kLXNpemU6NHB4IDEwMCU7YmFja2dyb3VuZC1yZXBlYXQ6cmVwZWF0LXh9Lm1hdC1mb3JtLWZpZWxkLWFwcGVhcmFuY2Utc3RhbmRhcmQgLm1hdC1mb3JtLWZpZWxkLXVuZGVybGluZXtiYWNrZ3JvdW5kLWNvbG9yOnJnYmEoMCwwLDAsLjQyKX0ubWF0LWZvcm0tZmllbGQtYXBwZWFyYW5jZS1zdGFuZGFyZC5tYXQtZm9ybS1maWVsZC1kaXNhYmxlZCAubWF0LWZvcm0tZmllbGQtdW5kZXJsaW5le2JhY2tncm91bmQtaW1hZ2U6bGluZWFyLWdyYWRpZW50KHRvIHJpZ2h0LHJnYmEoMCwwLDAsLjQyKSAwLHJnYmEoMCwwLDAsLjQyKSAzMyUsdHJhbnNwYXJlbnQgMCk7YmFja2dyb3VuZC1zaXplOjRweCAxMDAlO2JhY2tncm91bmQtcmVwZWF0OnJlcGVhdC14fS5tYXQtZm9ybS1maWVsZC1hcHBlYXJhbmNlLWZpbGwgLm1hdC1mb3JtLWZpZWxkLWZsZXh7YmFja2dyb3VuZC1jb2xvcjpyZ2JhKDAsMCwwLC4wNCl9Lm1hdC1mb3JtLWZpZWxkLWFwcGVhcmFuY2UtZmlsbC5tYXQtZm9ybS1maWVsZC1kaXNhYmxlZCAubWF0LWZvcm0tZmllbGQtZmxleHtiYWNrZ3JvdW5kLWNvbG9yOnJnYmEoMCwwLDAsLjAyKX0ubWF0LWZvcm0tZmllbGQtYXBwZWFyYW5jZS1maWxsIC5tYXQtZm9ybS1maWVsZC11bmRlcmxpbmU6OmJlZm9yZXtiYWNrZ3JvdW5kLWNvbG9yOnJnYmEoMCwwLDAsLjQyKX0ubWF0LWZvcm0tZmllbGQtYXBwZWFyYW5jZS1maWxsLm1hdC1mb3JtLWZpZWxkLWRpc2FibGVkIC5tYXQtZm9ybS1maWVsZC1sYWJlbHtjb2xvcjpyZ2JhKDAsMCwwLC4zOCl9Lm1hdC1mb3JtLWZpZWxkLWFwcGVhcmFuY2UtZmlsbC5tYXQtZm9ybS1maWVsZC1kaXNhYmxlZCAubWF0LWZvcm0tZmllbGQtdW5kZXJsaW5lOjpiZWZvcmV7YmFja2dyb3VuZC1jb2xvcjp0cmFuc3BhcmVudH0ubWF0LWZvcm0tZmllbGQtYXBwZWFyYW5jZS1vdXRsaW5lIC5tYXQtZm9ybS1maWVsZC1vdXRsaW5le2NvbG9yOnJnYmEoMCwwLDAsLjEyKX0ubWF0LWZvcm0tZmllbGQtYXBwZWFyYW5jZS1vdXRsaW5lIC5tYXQtZm9ybS1maWVsZC1vdXRsaW5lLXRoaWNre2NvbG9yOnJnYmEoMCwwLDAsLjg3KX0ubWF0LWZvcm0tZmllbGQtYXBwZWFyYW5jZS1vdXRsaW5lLm1hdC1mb2N1c2VkIC5tYXQtZm9ybS1maWVsZC1vdXRsaW5lLXRoaWNre2NvbG9yOiM2NzNhYjd9Lm1hdC1mb3JtLWZpZWxkLWFwcGVhcmFuY2Utb3V0bGluZS5tYXQtZm9jdXNlZC5tYXQtYWNjZW50IC5tYXQtZm9ybS1maWVsZC1vdXRsaW5lLXRoaWNre2NvbG9yOiNmZmQ3NDB9Lm1hdC1mb3JtLWZpZWxkLWFwcGVhcmFuY2Utb3V0bGluZS5tYXQtZm9jdXNlZC5tYXQtd2FybiAubWF0LWZvcm0tZmllbGQtb3V0bGluZS10aGlja3tjb2xvcjojZjQ0MzM2fS5tYXQtZm9ybS1maWVsZC1hcHBlYXJhbmNlLW91dGxpbmUubWF0LWZvcm0tZmllbGQtaW52YWxpZC5tYXQtZm9ybS1maWVsZC1pbnZhbGlkIC5tYXQtZm9ybS1maWVsZC1vdXRsaW5lLXRoaWNre2NvbG9yOiNmNDQzMzZ9Lm1hdC1mb3JtLWZpZWxkLWFwcGVhcmFuY2Utb3V0bGluZS5tYXQtZm9ybS1maWVsZC1kaXNhYmxlZCAubWF0LWZvcm0tZmllbGQtbGFiZWx7Y29sb3I6cmdiYSgwLDAsMCwuMzgpfS5tYXQtZm9ybS1maWVsZC1hcHBlYXJhbmNlLW91dGxpbmUubWF0LWZvcm0tZmllbGQtZGlzYWJsZWQgLm1hdC1mb3JtLWZpZWxkLW91dGxpbmV7Y29sb3I6cmdiYSgwLDAsMCwuMDYpfS5tYXQtaWNvbi5tYXQtcHJpbWFyeXtjb2xvcjojNjczYWI3fS5tYXQtaWNvbi5tYXQtYWNjZW50e2NvbG9yOiNmZmQ3NDB9Lm1hdC1pY29uLm1hdC13YXJue2NvbG9yOiNmNDQzMzZ9Lm1hdC1mb3JtLWZpZWxkLXR5cGUtbWF0LW5hdGl2ZS1zZWxlY3QgLm1hdC1mb3JtLWZpZWxkLWluZml4OjphZnRlcntjb2xvcjpyZ2JhKDAsMCwwLC41NCl9Lm1hdC1mb3JtLWZpZWxkLXR5cGUtbWF0LW5hdGl2ZS1zZWxlY3QubWF0LWZvcm0tZmllbGQtZGlzYWJsZWQgLm1hdC1mb3JtLWZpZWxkLWluZml4OjphZnRlciwubWF0LWlucHV0LWVsZW1lbnQ6ZGlzYWJsZWR7Y29sb3I6cmdiYSgwLDAsMCwuMzgpfS5tYXQtaW5wdXQtZWxlbWVudHtjYXJldC1jb2xvcjojNjczYWI3fS5tYXQtaW5wdXQtZWxlbWVudDo6cGxhY2Vob2xkZXJ7Y29sb3I6cmdiYSgwLDAsMCwuNDIpfS5tYXQtaW5wdXQtZWxlbWVudDo6LW1vei1wbGFjZWhvbGRlcntjb2xvcjpyZ2JhKDAsMCwwLC40Mil9Lm1hdC1pbnB1dC1lbGVtZW50Ojotd2Via2l0LWlucHV0LXBsYWNlaG9sZGVye2NvbG9yOnJnYmEoMCwwLDAsLjQyKX0ubWF0LWlucHV0LWVsZW1lbnQ6LW1zLWlucHV0LXBsYWNlaG9sZGVye2NvbG9yOnJnYmEoMCwwLDAsLjQyKX0ubWF0LWFjY2VudCAubWF0LWlucHV0LWVsZW1lbnR7Y2FyZXQtY29sb3I6I2ZmZDc0MH0ubWF0LWZvcm0tZmllbGQtaW52YWxpZCAubWF0LWlucHV0LWVsZW1lbnQsLm1hdC13YXJuIC5tYXQtaW5wdXQtZWxlbWVudHtjYXJldC1jb2xvcjojZjQ0MzM2fS5tYXQtZm9ybS1maWVsZC10eXBlLW1hdC1uYXRpdmUtc2VsZWN0Lm1hdC1mb3JtLWZpZWxkLWludmFsaWQgLm1hdC1mb3JtLWZpZWxkLWluZml4OjphZnRlcntjb2xvcjojZjQ0MzM2fS5tYXQtbGlzdC1iYXNlIC5tYXQtbGlzdC1pdGVte2NvbG9yOnJnYmEoMCwwLDAsLjg3KX0ubWF0LWxpc3QtYmFzZSAubWF0LWxpc3Qtb3B0aW9ue2NvbG9yOnJnYmEoMCwwLDAsLjg3KX0ubWF0LWxpc3QtYmFzZSAubWF0LXN1YmhlYWRlcntjb2xvcjpyZ2JhKDAsMCwwLC41NCl9Lm1hdC1saXN0LWl0ZW0tZGlzYWJsZWR7YmFja2dyb3VuZC1jb2xvcjojZWVlfS5tYXQtbGlzdC1vcHRpb246Zm9jdXMsLm1hdC1saXN0LW9wdGlvbjpob3ZlciwubWF0LW5hdi1saXN0IC5tYXQtbGlzdC1pdGVtOmZvY3VzLC5tYXQtbmF2LWxpc3QgLm1hdC1saXN0LWl0ZW06aG92ZXJ7YmFja2dyb3VuZDpyZ2JhKDAsMCwwLC4wNCl9Lm1hdC1tZW51LXBhbmVse2JhY2tncm91bmQ6I2ZmZn0ubWF0LW1lbnUtcGFuZWw6bm90KFtjbGFzcyo9bWF0LWVsZXZhdGlvbi16XSl7Ym94LXNoYWRvdzowIDJweCA0cHggLTFweCByZ2JhKDAsMCwwLC4yKSwwIDRweCA1cHggMCByZ2JhKDAsMCwwLC4xNCksMCAxcHggMTBweCAwIHJnYmEoMCwwLDAsLjEyKX0ubWF0LW1lbnUtaXRlbXtiYWNrZ3JvdW5kOjAgMDtjb2xvcjpyZ2JhKDAsMCwwLC44Nyl9Lm1hdC1tZW51LWl0ZW1bZGlzYWJsZWRdLC5tYXQtbWVudS1pdGVtW2Rpc2FibGVkXTo6YWZ0ZXJ7Y29sb3I6cmdiYSgwLDAsMCwuMzgpfS5tYXQtbWVudS1pdGVtIC5tYXQtaWNvbi1uby1jb2xvciwubWF0LW1lbnUtaXRlbS1zdWJtZW51LXRyaWdnZXI6OmFmdGVye2NvbG9yOnJnYmEoMCwwLDAsLjU0KX0ubWF0LW1lbnUtaXRlbS1oaWdobGlnaHRlZDpub3QoW2Rpc2FibGVkXSksLm1hdC1tZW51LWl0ZW0uY2RrLWtleWJvYXJkLWZvY3VzZWQ6bm90KFtkaXNhYmxlZF0pLC5tYXQtbWVudS1pdGVtLmNkay1wcm9ncmFtLWZvY3VzZWQ6bm90KFtkaXNhYmxlZF0pLC5tYXQtbWVudS1pdGVtOmhvdmVyOm5vdChbZGlzYWJsZWRdKXtiYWNrZ3JvdW5kOnJnYmEoMCwwLDAsLjA0KX0ubWF0LXBhZ2luYXRvcntiYWNrZ3JvdW5kOiNmZmZ9Lm1hdC1wYWdpbmF0b3IsLm1hdC1wYWdpbmF0b3ItcGFnZS1zaXplIC5tYXQtc2VsZWN0LXRyaWdnZXJ7Y29sb3I6cmdiYSgwLDAsMCwuNTQpfS5tYXQtcGFnaW5hdG9yLWRlY3JlbWVudCwubWF0LXBhZ2luYXRvci1pbmNyZW1lbnR7Ym9yZGVyLXRvcDoycHggc29saWQgcmdiYSgwLDAsMCwuNTQpO2JvcmRlci1yaWdodDoycHggc29saWQgcmdiYSgwLDAsMCwuNTQpfS5tYXQtcGFnaW5hdG9yLWZpcnN0LC5tYXQtcGFnaW5hdG9yLWxhc3R7Ym9yZGVyLXRvcDoycHggc29saWQgcmdiYSgwLDAsMCwuNTQpfS5tYXQtaWNvbi1idXR0b25bZGlzYWJsZWRdIC5tYXQtcGFnaW5hdG9yLWRlY3JlbWVudCwubWF0LWljb24tYnV0dG9uW2Rpc2FibGVkXSAubWF0LXBhZ2luYXRvci1maXJzdCwubWF0LWljb24tYnV0dG9uW2Rpc2FibGVkXSAubWF0LXBhZ2luYXRvci1pbmNyZW1lbnQsLm1hdC1pY29uLWJ1dHRvbltkaXNhYmxlZF0gLm1hdC1wYWdpbmF0b3ItbGFzdHtib3JkZXItY29sb3I6cmdiYSgwLDAsMCwuMzgpfS5tYXQtcHJvZ3Jlc3MtYmFyLWJhY2tncm91bmR7ZmlsbDojZDFjNGU5fS5tYXQtcHJvZ3Jlc3MtYmFyLWJ1ZmZlcntiYWNrZ3JvdW5kLWNvbG9yOiNkMWM0ZTl9Lm1hdC1wcm9ncmVzcy1iYXItZmlsbDo6YWZ0ZXJ7YmFja2dyb3VuZC1jb2xvcjojNjczYWI3fS5tYXQtcHJvZ3Jlc3MtYmFyLm1hdC1hY2NlbnQgLm1hdC1wcm9ncmVzcy1iYXItYmFja2dyb3VuZHtmaWxsOiNmZmU1N2Z9Lm1hdC1wcm9ncmVzcy1iYXIubWF0LWFjY2VudCAubWF0LXByb2dyZXNzLWJhci1idWZmZXJ7YmFja2dyb3VuZC1jb2xvcjojZmZlNTdmfS5tYXQtcHJvZ3Jlc3MtYmFyLm1hdC1hY2NlbnQgLm1hdC1wcm9ncmVzcy1iYXItZmlsbDo6YWZ0ZXJ7YmFja2dyb3VuZC1jb2xvcjojZmZkNzQwfS5tYXQtcHJvZ3Jlc3MtYmFyLm1hdC13YXJuIC5tYXQtcHJvZ3Jlc3MtYmFyLWJhY2tncm91bmR7ZmlsbDojZmZjZGQyfS5tYXQtcHJvZ3Jlc3MtYmFyLm1hdC13YXJuIC5tYXQtcHJvZ3Jlc3MtYmFyLWJ1ZmZlcntiYWNrZ3JvdW5kLWNvbG9yOiNmZmNkZDJ9Lm1hdC1wcm9ncmVzcy1iYXIubWF0LXdhcm4gLm1hdC1wcm9ncmVzcy1iYXItZmlsbDo6YWZ0ZXJ7YmFja2dyb3VuZC1jb2xvcjojZjQ0MzM2fS5tYXQtcHJvZ3Jlc3Mtc3Bpbm5lciBjaXJjbGUsLm1hdC1zcGlubmVyIGNpcmNsZXtzdHJva2U6IzY3M2FiN30ubWF0LXByb2dyZXNzLXNwaW5uZXIubWF0LWFjY2VudCBjaXJjbGUsLm1hdC1zcGlubmVyLm1hdC1hY2NlbnQgY2lyY2xle3N0cm9rZTojZmZkNzQwfS5tYXQtcHJvZ3Jlc3Mtc3Bpbm5lci5tYXQtd2FybiBjaXJjbGUsLm1hdC1zcGlubmVyLm1hdC13YXJuIGNpcmNsZXtzdHJva2U6I2Y0NDMzNn0ubWF0LXJhZGlvLW91dGVyLWNpcmNsZXtib3JkZXItY29sb3I6cmdiYSgwLDAsMCwuNTQpfS5tYXQtcmFkaW8tYnV0dG9uLm1hdC1wcmltYXJ5Lm1hdC1yYWRpby1jaGVja2VkIC5tYXQtcmFkaW8tb3V0ZXItY2lyY2xle2JvcmRlci1jb2xvcjojNjczYWI3fS5tYXQtcmFkaW8tYnV0dG9uLm1hdC1wcmltYXJ5IC5tYXQtcmFkaW8taW5uZXItY2lyY2xlLC5tYXQtcmFkaW8tYnV0dG9uLm1hdC1wcmltYXJ5IC5tYXQtcmFkaW8tcmlwcGxlIC5tYXQtcmlwcGxlLWVsZW1lbnQ6bm90KC5tYXQtcmFkaW8tcGVyc2lzdGVudC1yaXBwbGUpLC5tYXQtcmFkaW8tYnV0dG9uLm1hdC1wcmltYXJ5Lm1hdC1yYWRpby1jaGVja2VkIC5tYXQtcmFkaW8tcGVyc2lzdGVudC1yaXBwbGUsLm1hdC1yYWRpby1idXR0b24ubWF0LXByaW1hcnk6YWN0aXZlIC5tYXQtcmFkaW8tcGVyc2lzdGVudC1yaXBwbGV7YmFja2dyb3VuZC1jb2xvcjojNjczYWI3fS5tYXQtcmFkaW8tYnV0dG9uLm1hdC1hY2NlbnQubWF0LXJhZGlvLWNoZWNrZWQgLm1hdC1yYWRpby1vdXRlci1jaXJjbGV7Ym9yZGVyLWNvbG9yOiNmZmQ3NDB9Lm1hdC1yYWRpby1idXR0b24ubWF0LWFjY2VudCAubWF0LXJhZGlvLWlubmVyLWNpcmNsZSwubWF0LXJhZGlvLWJ1dHRvbi5tYXQtYWNjZW50IC5tYXQtcmFkaW8tcmlwcGxlIC5tYXQtcmlwcGxlLWVsZW1lbnQ6bm90KC5tYXQtcmFkaW8tcGVyc2lzdGVudC1yaXBwbGUpLC5tYXQtcmFkaW8tYnV0dG9uLm1hdC1hY2NlbnQubWF0LXJhZGlvLWNoZWNrZWQgLm1hdC1yYWRpby1wZXJzaXN0ZW50LXJpcHBsZSwubWF0LXJhZGlvLWJ1dHRvbi5tYXQtYWNjZW50OmFjdGl2ZSAubWF0LXJhZGlvLXBlcnNpc3RlbnQtcmlwcGxle2JhY2tncm91bmQtY29sb3I6I2ZmZDc0MH0ubWF0LXJhZGlvLWJ1dHRvbi5tYXQtd2Fybi5tYXQtcmFkaW8tY2hlY2tlZCAubWF0LXJhZGlvLW91dGVyLWNpcmNsZXtib3JkZXItY29sb3I6I2Y0NDMzNn0ubWF0LXJhZGlvLWJ1dHRvbi5tYXQtd2FybiAubWF0LXJhZGlvLWlubmVyLWNpcmNsZSwubWF0LXJhZGlvLWJ1dHRvbi5tYXQtd2FybiAubWF0LXJhZGlvLXJpcHBsZSAubWF0LXJpcHBsZS1lbGVtZW50Om5vdCgubWF0LXJhZGlvLXBlcnNpc3RlbnQtcmlwcGxlKSwubWF0LXJhZGlvLWJ1dHRvbi5tYXQtd2Fybi5tYXQtcmFkaW8tY2hlY2tlZCAubWF0LXJhZGlvLXBlcnNpc3RlbnQtcmlwcGxlLC5tYXQtcmFkaW8tYnV0dG9uLm1hdC13YXJuOmFjdGl2ZSAubWF0LXJhZGlvLXBlcnNpc3RlbnQtcmlwcGxle2JhY2tncm91bmQtY29sb3I6I2Y0NDMzNn0ubWF0LXJhZGlvLWJ1dHRvbi5tYXQtcmFkaW8tZGlzYWJsZWQgLm1hdC1yYWRpby1vdXRlci1jaXJjbGUsLm1hdC1yYWRpby1idXR0b24ubWF0LXJhZGlvLWRpc2FibGVkLm1hdC1yYWRpby1jaGVja2VkIC5tYXQtcmFkaW8tb3V0ZXItY2lyY2xle2JvcmRlci1jb2xvcjpyZ2JhKDAsMCwwLC4zOCl9Lm1hdC1yYWRpby1idXR0b24ubWF0LXJhZGlvLWRpc2FibGVkIC5tYXQtcmFkaW8taW5uZXItY2lyY2xlLC5tYXQtcmFkaW8tYnV0dG9uLm1hdC1yYWRpby1kaXNhYmxlZCAubWF0LXJhZGlvLXJpcHBsZSAubWF0LXJpcHBsZS1lbGVtZW50e2JhY2tncm91bmQtY29sb3I6cmdiYSgwLDAsMCwuMzgpfS5tYXQtcmFkaW8tYnV0dG9uLm1hdC1yYWRpby1kaXNhYmxlZCAubWF0LXJhZGlvLWxhYmVsLWNvbnRlbnR7Y29sb3I6cmdiYSgwLDAsMCwuMzgpfS5tYXQtcmFkaW8tYnV0dG9uIC5tYXQtcmlwcGxlLWVsZW1lbnR7YmFja2dyb3VuZC1jb2xvcjojMDAwfS5tYXQtc2VsZWN0LXZhbHVle2NvbG9yOnJnYmEoMCwwLDAsLjg3KX0ubWF0LXNlbGVjdC1wbGFjZWhvbGRlcntjb2xvcjpyZ2JhKDAsMCwwLC40Mil9Lm1hdC1zZWxlY3QtZGlzYWJsZWQgLm1hdC1zZWxlY3QtdmFsdWV7Y29sb3I6cmdiYSgwLDAsMCwuMzgpfS5tYXQtc2VsZWN0LWFycm93e2NvbG9yOnJnYmEoMCwwLDAsLjU0KX0ubWF0LXNlbGVjdC1wYW5lbHtiYWNrZ3JvdW5kOiNmZmZ9Lm1hdC1zZWxlY3QtcGFuZWw6bm90KFtjbGFzcyo9bWF0LWVsZXZhdGlvbi16XSl7Ym94LXNoYWRvdzowIDJweCA0cHggLTFweCByZ2JhKDAsMCwwLC4yKSwwIDRweCA1cHggMCByZ2JhKDAsMCwwLC4xNCksMCAxcHggMTBweCAwIHJnYmEoMCwwLDAsLjEyKX0ubWF0LXNlbGVjdC1wYW5lbCAubWF0LW9wdGlvbi5tYXQtc2VsZWN0ZWQ6bm90KC5tYXQtb3B0aW9uLW11bHRpcGxlKXtiYWNrZ3JvdW5kOnJnYmEoMCwwLDAsLjEyKX0ubWF0LWZvcm0tZmllbGQubWF0LWZvY3VzZWQubWF0LXByaW1hcnkgLm1hdC1zZWxlY3QtYXJyb3d7Y29sb3I6IzY3M2FiN30ubWF0LWZvcm0tZmllbGQubWF0LWZvY3VzZWQubWF0LWFjY2VudCAubWF0LXNlbGVjdC1hcnJvd3tjb2xvcjojZmZkNzQwfS5tYXQtZm9ybS1maWVsZC5tYXQtZm9jdXNlZC5tYXQtd2FybiAubWF0LXNlbGVjdC1hcnJvd3tjb2xvcjojZjQ0MzM2fS5tYXQtZm9ybS1maWVsZCAubWF0LXNlbGVjdC5tYXQtc2VsZWN0LWludmFsaWQgLm1hdC1zZWxlY3QtYXJyb3d7Y29sb3I6I2Y0NDMzNn0ubWF0LWZvcm0tZmllbGQgLm1hdC1zZWxlY3QubWF0LXNlbGVjdC1kaXNhYmxlZCAubWF0LXNlbGVjdC1hcnJvd3tjb2xvcjpyZ2JhKDAsMCwwLC4zOCl9Lm1hdC1kcmF3ZXItY29udGFpbmVye2JhY2tncm91bmQtY29sb3I6I2ZhZmFmYTtjb2xvcjpyZ2JhKDAsMCwwLC44Nyl9Lm1hdC1kcmF3ZXJ7YmFja2dyb3VuZC1jb2xvcjojZmZmO2NvbG9yOnJnYmEoMCwwLDAsLjg3KX0ubWF0LWRyYXdlci5tYXQtZHJhd2VyLXB1c2h7YmFja2dyb3VuZC1jb2xvcjojZmZmfS5tYXQtZHJhd2VyOm5vdCgubWF0LWRyYXdlci1zaWRlKXtib3gtc2hhZG93OjAgOHB4IDEwcHggLTVweCByZ2JhKDAsMCwwLC4yKSwwIDE2cHggMjRweCAycHggcmdiYSgwLDAsMCwuMTQpLDAgNnB4IDMwcHggNXB4IHJnYmEoMCwwLDAsLjEyKX0ubWF0LWRyYXdlci1zaWRle2JvcmRlci1yaWdodDpzb2xpZCAxcHggcmdiYSgwLDAsMCwuMTIpfS5tYXQtZHJhd2VyLXNpZGUubWF0LWRyYXdlci1lbmR7Ym9yZGVyLWxlZnQ6c29saWQgMXB4IHJnYmEoMCwwLDAsLjEyKTtib3JkZXItcmlnaHQ6bm9uZX1bZGlyPXJ0bF0gLm1hdC1kcmF3ZXItc2lkZXtib3JkZXItbGVmdDpzb2xpZCAxcHggcmdiYSgwLDAsMCwuMTIpO2JvcmRlci1yaWdodDpub25lfVtkaXI9cnRsXSAubWF0LWRyYXdlci1zaWRlLm1hdC1kcmF3ZXItZW5ke2JvcmRlci1sZWZ0Om5vbmU7Ym9yZGVyLXJpZ2h0OnNvbGlkIDFweCByZ2JhKDAsMCwwLC4xMil9Lm1hdC1kcmF3ZXItYmFja2Ryb3AubWF0LWRyYXdlci1zaG93bntiYWNrZ3JvdW5kLWNvbG9yOnJnYmEoMCwwLDAsLjYpfS5tYXQtc2xpZGUtdG9nZ2xlLm1hdC1jaGVja2VkIC5tYXQtc2xpZGUtdG9nZ2xlLXRodW1ie2JhY2tncm91bmQtY29sb3I6I2ZmZDc0MH0ubWF0LXNsaWRlLXRvZ2dsZS5tYXQtY2hlY2tlZCAubWF0LXNsaWRlLXRvZ2dsZS1iYXJ7YmFja2dyb3VuZC1jb2xvcjpyZ2JhKDI1NSwyMTUsNjQsLjU0KX0ubWF0LXNsaWRlLXRvZ2dsZS5tYXQtY2hlY2tlZCAubWF0LXJpcHBsZS1lbGVtZW50e2JhY2tncm91bmQtY29sb3I6I2ZmZDc0MH0ubWF0LXNsaWRlLXRvZ2dsZS5tYXQtcHJpbWFyeS5tYXQtY2hlY2tlZCAubWF0LXNsaWRlLXRvZ2dsZS10aHVtYntiYWNrZ3JvdW5kLWNvbG9yOiM2NzNhYjd9Lm1hdC1zbGlkZS10b2dnbGUubWF0LXByaW1hcnkubWF0LWNoZWNrZWQgLm1hdC1zbGlkZS10b2dnbGUtYmFye2JhY2tncm91bmQtY29sb3I6cmdiYSgxMDMsNTgsMTgzLC41NCl9Lm1hdC1zbGlkZS10b2dnbGUubWF0LXByaW1hcnkubWF0LWNoZWNrZWQgLm1hdC1yaXBwbGUtZWxlbWVudHtiYWNrZ3JvdW5kLWNvbG9yOiM2NzNhYjd9Lm1hdC1zbGlkZS10b2dnbGUubWF0LXdhcm4ubWF0LWNoZWNrZWQgLm1hdC1zbGlkZS10b2dnbGUtdGh1bWJ7YmFja2dyb3VuZC1jb2xvcjojZjQ0MzM2fS5tYXQtc2xpZGUtdG9nZ2xlLm1hdC13YXJuLm1hdC1jaGVja2VkIC5tYXQtc2xpZGUtdG9nZ2xlLWJhcntiYWNrZ3JvdW5kLWNvbG9yOnJnYmEoMjQ0LDY3LDU0LC41NCl9Lm1hdC1zbGlkZS10b2dnbGUubWF0LXdhcm4ubWF0LWNoZWNrZWQgLm1hdC1yaXBwbGUtZWxlbWVudHtiYWNrZ3JvdW5kLWNvbG9yOiNmNDQzMzZ9Lm1hdC1zbGlkZS10b2dnbGU6bm90KC5tYXQtY2hlY2tlZCkgLm1hdC1yaXBwbGUtZWxlbWVudHtiYWNrZ3JvdW5kLWNvbG9yOiMwMDB9Lm1hdC1zbGlkZS10b2dnbGUtdGh1bWJ7Ym94LXNoYWRvdzowIDJweCAxcHggLTFweCByZ2JhKDAsMCwwLC4yKSwwIDFweCAxcHggMCByZ2JhKDAsMCwwLC4xNCksMCAxcHggM3B4IDAgcmdiYSgwLDAsMCwuMTIpO2JhY2tncm91bmQtY29sb3I6I2ZhZmFmYX0ubWF0LXNsaWRlLXRvZ2dsZS1iYXJ7YmFja2dyb3VuZC1jb2xvcjpyZ2JhKDAsMCwwLC4zOCl9Lm1hdC1zbGlkZXItdHJhY2stYmFja2dyb3VuZHtiYWNrZ3JvdW5kLWNvbG9yOnJnYmEoMCwwLDAsLjI2KX0ubWF0LXByaW1hcnkgLm1hdC1zbGlkZXItdGh1bWIsLm1hdC1wcmltYXJ5IC5tYXQtc2xpZGVyLXRodW1iLWxhYmVsLC5tYXQtcHJpbWFyeSAubWF0LXNsaWRlci10cmFjay1maWxse2JhY2tncm91bmQtY29sb3I6IzY3M2FiN30ubWF0LXByaW1hcnkgLm1hdC1zbGlkZXItdGh1bWItbGFiZWwtdGV4dHtjb2xvcjojZmZmfS5tYXQtYWNjZW50IC5tYXQtc2xpZGVyLXRodW1iLC5tYXQtYWNjZW50IC5tYXQtc2xpZGVyLXRodW1iLWxhYmVsLC5tYXQtYWNjZW50IC5tYXQtc2xpZGVyLXRyYWNrLWZpbGx7YmFja2dyb3VuZC1jb2xvcjojZmZkNzQwfS5tYXQtYWNjZW50IC5tYXQtc2xpZGVyLXRodW1iLWxhYmVsLXRleHR7Y29sb3I6cmdiYSgwLDAsMCwuODcpfS5tYXQtd2FybiAubWF0LXNsaWRlci10aHVtYiwubWF0LXdhcm4gLm1hdC1zbGlkZXItdGh1bWItbGFiZWwsLm1hdC13YXJuIC5tYXQtc2xpZGVyLXRyYWNrLWZpbGx7YmFja2dyb3VuZC1jb2xvcjojZjQ0MzM2fS5tYXQtd2FybiAubWF0LXNsaWRlci10aHVtYi1sYWJlbC10ZXh0e2NvbG9yOiNmZmZ9Lm1hdC1zbGlkZXItZm9jdXMtcmluZ3tiYWNrZ3JvdW5kLWNvbG9yOnJnYmEoMjU1LDIxNSw2NCwuMil9LmNkay1mb2N1c2VkIC5tYXQtc2xpZGVyLXRyYWNrLWJhY2tncm91bmQsLm1hdC1zbGlkZXI6aG92ZXIgLm1hdC1zbGlkZXItdHJhY2stYmFja2dyb3VuZHtiYWNrZ3JvdW5kLWNvbG9yOnJnYmEoMCwwLDAsLjM4KX0ubWF0LXNsaWRlci1kaXNhYmxlZCAubWF0LXNsaWRlci10aHVtYiwubWF0LXNsaWRlci1kaXNhYmxlZCAubWF0LXNsaWRlci10cmFjay1iYWNrZ3JvdW5kLC5tYXQtc2xpZGVyLWRpc2FibGVkIC5tYXQtc2xpZGVyLXRyYWNrLWZpbGx7YmFja2dyb3VuZC1jb2xvcjpyZ2JhKDAsMCwwLC4yNil9Lm1hdC1zbGlkZXItZGlzYWJsZWQ6aG92ZXIgLm1hdC1zbGlkZXItdHJhY2stYmFja2dyb3VuZHtiYWNrZ3JvdW5kLWNvbG9yOnJnYmEoMCwwLDAsLjI2KX0ubWF0LXNsaWRlci1taW4tdmFsdWUgLm1hdC1zbGlkZXItZm9jdXMtcmluZ3tiYWNrZ3JvdW5kLWNvbG9yOnJnYmEoMCwwLDAsLjEyKX0ubWF0LXNsaWRlci1taW4tdmFsdWUubWF0LXNsaWRlci10aHVtYi1sYWJlbC1zaG93aW5nIC5tYXQtc2xpZGVyLXRodW1iLC5tYXQtc2xpZGVyLW1pbi12YWx1ZS5tYXQtc2xpZGVyLXRodW1iLWxhYmVsLXNob3dpbmcgLm1hdC1zbGlkZXItdGh1bWItbGFiZWx7YmFja2dyb3VuZC1jb2xvcjpyZ2JhKDAsMCwwLC44Nyl9Lm1hdC1zbGlkZXItbWluLXZhbHVlLm1hdC1zbGlkZXItdGh1bWItbGFiZWwtc2hvd2luZy5jZGstZm9jdXNlZCAubWF0LXNsaWRlci10aHVtYiwubWF0LXNsaWRlci1taW4tdmFsdWUubWF0LXNsaWRlci10aHVtYi1sYWJlbC1zaG93aW5nLmNkay1mb2N1c2VkIC5tYXQtc2xpZGVyLXRodW1iLWxhYmVse2JhY2tncm91bmQtY29sb3I6cmdiYSgwLDAsMCwuMjYpfS5tYXQtc2xpZGVyLW1pbi12YWx1ZTpub3QoLm1hdC1zbGlkZXItdGh1bWItbGFiZWwtc2hvd2luZykgLm1hdC1zbGlkZXItdGh1bWJ7Ym9yZGVyLWNvbG9yOnJnYmEoMCwwLDAsLjI2KTtiYWNrZ3JvdW5kLWNvbG9yOnRyYW5zcGFyZW50fS5tYXQtc2xpZGVyLW1pbi12YWx1ZTpub3QoLm1hdC1zbGlkZXItdGh1bWItbGFiZWwtc2hvd2luZykuY2RrLWZvY3VzZWQgLm1hdC1zbGlkZXItdGh1bWIsLm1hdC1zbGlkZXItbWluLXZhbHVlOm5vdCgubWF0LXNsaWRlci10aHVtYi1sYWJlbC1zaG93aW5nKTpob3ZlciAubWF0LXNsaWRlci10aHVtYntib3JkZXItY29sb3I6cmdiYSgwLDAsMCwuMzgpfS5tYXQtc2xpZGVyLW1pbi12YWx1ZTpub3QoLm1hdC1zbGlkZXItdGh1bWItbGFiZWwtc2hvd2luZykuY2RrLWZvY3VzZWQubWF0LXNsaWRlci1kaXNhYmxlZCAubWF0LXNsaWRlci10aHVtYiwubWF0LXNsaWRlci1taW4tdmFsdWU6bm90KC5tYXQtc2xpZGVyLXRodW1iLWxhYmVsLXNob3dpbmcpOmhvdmVyLm1hdC1zbGlkZXItZGlzYWJsZWQgLm1hdC1zbGlkZXItdGh1bWJ7Ym9yZGVyLWNvbG9yOnJnYmEoMCwwLDAsLjI2KX0ubWF0LXNsaWRlci1oYXMtdGlja3MgLm1hdC1zbGlkZXItd3JhcHBlcjo6YWZ0ZXJ7Ym9yZGVyLWNvbG9yOnJnYmEoMCwwLDAsLjcpfS5tYXQtc2xpZGVyLWhvcml6b250YWwgLm1hdC1zbGlkZXItdGlja3N7YmFja2dyb3VuZC1pbWFnZTpyZXBlYXRpbmctbGluZWFyLWdyYWRpZW50KHRvIHJpZ2h0LHJnYmEoMCwwLDAsLjcpLHJnYmEoMCwwLDAsLjcpIDJweCx0cmFuc3BhcmVudCAwLHRyYW5zcGFyZW50KTtiYWNrZ3JvdW5kLWltYWdlOi1tb3otcmVwZWF0aW5nLWxpbmVhci1ncmFkaWVudCguMDAwMWRlZyxyZ2JhKDAsMCwwLC43KSxyZ2JhKDAsMCwwLC43KSAycHgsdHJhbnNwYXJlbnQgMCx0cmFuc3BhcmVudCl9Lm1hdC1zbGlkZXItdmVydGljYWwgLm1hdC1zbGlkZXItdGlja3N7YmFja2dyb3VuZC1pbWFnZTpyZXBlYXRpbmctbGluZWFyLWdyYWRpZW50KHRvIGJvdHRvbSxyZ2JhKDAsMCwwLC43KSxyZ2JhKDAsMCwwLC43KSAycHgsdHJhbnNwYXJlbnQgMCx0cmFuc3BhcmVudCl9Lm1hdC1zdGVwLWhlYWRlci5jZGsta2V5Ym9hcmQtZm9jdXNlZCwubWF0LXN0ZXAtaGVhZGVyLmNkay1wcm9ncmFtLWZvY3VzZWQsLm1hdC1zdGVwLWhlYWRlcjpob3ZlcntiYWNrZ3JvdW5kLWNvbG9yOnJnYmEoMCwwLDAsLjA0KX1AbWVkaWEgKGhvdmVyOm5vbmUpey5tYXQtc3RlcC1oZWFkZXI6aG92ZXJ7YmFja2dyb3VuZDowIDB9fS5tYXQtc3RlcC1oZWFkZXIgLm1hdC1zdGVwLWxhYmVsLC5tYXQtc3RlcC1oZWFkZXIgLm1hdC1zdGVwLW9wdGlvbmFse2NvbG9yOnJnYmEoMCwwLDAsLjU0KX0ubWF0LXN0ZXAtaGVhZGVyIC5tYXQtc3RlcC1pY29ue2JhY2tncm91bmQtY29sb3I6cmdiYSgwLDAsMCwuNTQpO2NvbG9yOiNmZmZ9Lm1hdC1zdGVwLWhlYWRlciAubWF0LXN0ZXAtaWNvbi1zZWxlY3RlZCwubWF0LXN0ZXAtaGVhZGVyIC5tYXQtc3RlcC1pY29uLXN0YXRlLWRvbmUsLm1hdC1zdGVwLWhlYWRlciAubWF0LXN0ZXAtaWNvbi1zdGF0ZS1lZGl0e2JhY2tncm91bmQtY29sb3I6IzY3M2FiNztjb2xvcjojZmZmfS5tYXQtc3RlcC1oZWFkZXIgLm1hdC1zdGVwLWljb24tc3RhdGUtZXJyb3J7YmFja2dyb3VuZC1jb2xvcjp0cmFuc3BhcmVudDtjb2xvcjojZjQ0MzM2fS5tYXQtc3RlcC1oZWFkZXIgLm1hdC1zdGVwLWxhYmVsLm1hdC1zdGVwLWxhYmVsLWFjdGl2ZXtjb2xvcjpyZ2JhKDAsMCwwLC44Nyl9Lm1hdC1zdGVwLWhlYWRlciAubWF0LXN0ZXAtbGFiZWwubWF0LXN0ZXAtbGFiZWwtZXJyb3J7Y29sb3I6I2Y0NDMzNn0ubWF0LXN0ZXBwZXItaG9yaXpvbnRhbCwubWF0LXN0ZXBwZXItdmVydGljYWx7YmFja2dyb3VuZC1jb2xvcjojZmZmfS5tYXQtc3RlcHBlci12ZXJ0aWNhbC1saW5lOjpiZWZvcmV7Ym9yZGVyLWxlZnQtY29sb3I6cmdiYSgwLDAsMCwuMTIpfS5tYXQtaG9yaXpvbnRhbC1zdGVwcGVyLWhlYWRlcjo6YWZ0ZXIsLm1hdC1ob3Jpem9udGFsLXN0ZXBwZXItaGVhZGVyOjpiZWZvcmUsLm1hdC1zdGVwcGVyLWhvcml6b250YWwtbGluZXtib3JkZXItdG9wLWNvbG9yOnJnYmEoMCwwLDAsLjEyKX0ubWF0LXNvcnQtaGVhZGVyLWFycm93e2NvbG9yOiM3NTc1NzV9Lm1hdC10YWItaGVhZGVyLC5tYXQtdGFiLW5hdi1iYXJ7Ym9yZGVyLWJvdHRvbToxcHggc29saWQgcmdiYSgwLDAsMCwuMTIpfS5tYXQtdGFiLWdyb3VwLWludmVydGVkLWhlYWRlciAubWF0LXRhYi1oZWFkZXIsLm1hdC10YWItZ3JvdXAtaW52ZXJ0ZWQtaGVhZGVyIC5tYXQtdGFiLW5hdi1iYXJ7Ym9yZGVyLXRvcDoxcHggc29saWQgcmdiYSgwLDAsMCwuMTIpO2JvcmRlci1ib3R0b206bm9uZX0ubWF0LXRhYi1sYWJlbCwubWF0LXRhYi1saW5re2NvbG9yOnJnYmEoMCwwLDAsLjg3KX0ubWF0LXRhYi1sYWJlbC5tYXQtdGFiLWRpc2FibGVkLC5tYXQtdGFiLWxpbmsubWF0LXRhYi1kaXNhYmxlZHtjb2xvcjpyZ2JhKDAsMCwwLC4zOCl9Lm1hdC10YWItaGVhZGVyLXBhZ2luYXRpb24tY2hldnJvbntib3JkZXItY29sb3I6cmdiYSgwLDAsMCwuODcpfS5tYXQtdGFiLWhlYWRlci1wYWdpbmF0aW9uLWRpc2FibGVkIC5tYXQtdGFiLWhlYWRlci1wYWdpbmF0aW9uLWNoZXZyb257Ym9yZGVyLWNvbG9yOnJnYmEoMCwwLDAsLjM4KX0ubWF0LXRhYi1ncm91cFtjbGFzcyo9bWF0LWJhY2tncm91bmQtXSAubWF0LXRhYi1oZWFkZXIsLm1hdC10YWItbmF2LWJhcltjbGFzcyo9bWF0LWJhY2tncm91bmQtXXtib3JkZXItYm90dG9tOm5vbmU7Ym9yZGVyLXRvcDpub25lfS5tYXQtdGFiLWdyb3VwLm1hdC1wcmltYXJ5IC5tYXQtdGFiLWxhYmVsLmNkay1rZXlib2FyZC1mb2N1c2VkOm5vdCgubWF0LXRhYi1kaXNhYmxlZCksLm1hdC10YWItZ3JvdXAubWF0LXByaW1hcnkgLm1hdC10YWItbGFiZWwuY2RrLXByb2dyYW0tZm9jdXNlZDpub3QoLm1hdC10YWItZGlzYWJsZWQpLC5tYXQtdGFiLWdyb3VwLm1hdC1wcmltYXJ5IC5tYXQtdGFiLWxpbmsuY2RrLWtleWJvYXJkLWZvY3VzZWQ6bm90KC5tYXQtdGFiLWRpc2FibGVkKSwubWF0LXRhYi1ncm91cC5tYXQtcHJpbWFyeSAubWF0LXRhYi1saW5rLmNkay1wcm9ncmFtLWZvY3VzZWQ6bm90KC5tYXQtdGFiLWRpc2FibGVkKSwubWF0LXRhYi1uYXYtYmFyLm1hdC1wcmltYXJ5IC5tYXQtdGFiLWxhYmVsLmNkay1rZXlib2FyZC1mb2N1c2VkOm5vdCgubWF0LXRhYi1kaXNhYmxlZCksLm1hdC10YWItbmF2LWJhci5tYXQtcHJpbWFyeSAubWF0LXRhYi1sYWJlbC5jZGstcHJvZ3JhbS1mb2N1c2VkOm5vdCgubWF0LXRhYi1kaXNhYmxlZCksLm1hdC10YWItbmF2LWJhci5tYXQtcHJpbWFyeSAubWF0LXRhYi1saW5rLmNkay1rZXlib2FyZC1mb2N1c2VkOm5vdCgubWF0LXRhYi1kaXNhYmxlZCksLm1hdC10YWItbmF2LWJhci5tYXQtcHJpbWFyeSAubWF0LXRhYi1saW5rLmNkay1wcm9ncmFtLWZvY3VzZWQ6bm90KC5tYXQtdGFiLWRpc2FibGVkKXtiYWNrZ3JvdW5kLWNvbG9yOnJnYmEoMjA5LDE5NiwyMzMsLjMpfS5tYXQtdGFiLWdyb3VwLm1hdC1wcmltYXJ5IC5tYXQtaW5rLWJhciwubWF0LXRhYi1uYXYtYmFyLm1hdC1wcmltYXJ5IC5tYXQtaW5rLWJhcntiYWNrZ3JvdW5kLWNvbG9yOiM2NzNhYjd9Lm1hdC10YWItZ3JvdXAubWF0LXByaW1hcnkubWF0LWJhY2tncm91bmQtcHJpbWFyeSAubWF0LWluay1iYXIsLm1hdC10YWItbmF2LWJhci5tYXQtcHJpbWFyeS5tYXQtYmFja2dyb3VuZC1wcmltYXJ5IC5tYXQtaW5rLWJhcntiYWNrZ3JvdW5kLWNvbG9yOiNmZmZ9Lm1hdC10YWItZ3JvdXAubWF0LWFjY2VudCAubWF0LXRhYi1sYWJlbC5jZGsta2V5Ym9hcmQtZm9jdXNlZDpub3QoLm1hdC10YWItZGlzYWJsZWQpLC5tYXQtdGFiLWdyb3VwLm1hdC1hY2NlbnQgLm1hdC10YWItbGFiZWwuY2RrLXByb2dyYW0tZm9jdXNlZDpub3QoLm1hdC10YWItZGlzYWJsZWQpLC5tYXQtdGFiLWdyb3VwLm1hdC1hY2NlbnQgLm1hdC10YWItbGluay5jZGsta2V5Ym9hcmQtZm9jdXNlZDpub3QoLm1hdC10YWItZGlzYWJsZWQpLC5tYXQtdGFiLWdyb3VwLm1hdC1hY2NlbnQgLm1hdC10YWItbGluay5jZGstcHJvZ3JhbS1mb2N1c2VkOm5vdCgubWF0LXRhYi1kaXNhYmxlZCksLm1hdC10YWItbmF2LWJhci5tYXQtYWNjZW50IC5tYXQtdGFiLWxhYmVsLmNkay1rZXlib2FyZC1mb2N1c2VkOm5vdCgubWF0LXRhYi1kaXNhYmxlZCksLm1hdC10YWItbmF2LWJhci5tYXQtYWNjZW50IC5tYXQtdGFiLWxhYmVsLmNkay1wcm9ncmFtLWZvY3VzZWQ6bm90KC5tYXQtdGFiLWRpc2FibGVkKSwubWF0LXRhYi1uYXYtYmFyLm1hdC1hY2NlbnQgLm1hdC10YWItbGluay5jZGsta2V5Ym9hcmQtZm9jdXNlZDpub3QoLm1hdC10YWItZGlzYWJsZWQpLC5tYXQtdGFiLW5hdi1iYXIubWF0LWFjY2VudCAubWF0LXRhYi1saW5rLmNkay1wcm9ncmFtLWZvY3VzZWQ6bm90KC5tYXQtdGFiLWRpc2FibGVkKXtiYWNrZ3JvdW5kLWNvbG9yOnJnYmEoMjU1LDIyOSwxMjcsLjMpfS5tYXQtdGFiLWdyb3VwLm1hdC1hY2NlbnQgLm1hdC1pbmstYmFyLC5tYXQtdGFiLW5hdi1iYXIubWF0LWFjY2VudCAubWF0LWluay1iYXJ7YmFja2dyb3VuZC1jb2xvcjojZmZkNzQwfS5tYXQtdGFiLWdyb3VwLm1hdC1hY2NlbnQubWF0LWJhY2tncm91bmQtYWNjZW50IC5tYXQtaW5rLWJhciwubWF0LXRhYi1uYXYtYmFyLm1hdC1hY2NlbnQubWF0LWJhY2tncm91bmQtYWNjZW50IC5tYXQtaW5rLWJhcntiYWNrZ3JvdW5kLWNvbG9yOnJnYmEoMCwwLDAsLjg3KX0ubWF0LXRhYi1ncm91cC5tYXQtd2FybiAubWF0LXRhYi1sYWJlbC5jZGsta2V5Ym9hcmQtZm9jdXNlZDpub3QoLm1hdC10YWItZGlzYWJsZWQpLC5tYXQtdGFiLWdyb3VwLm1hdC13YXJuIC5tYXQtdGFiLWxhYmVsLmNkay1wcm9ncmFtLWZvY3VzZWQ6bm90KC5tYXQtdGFiLWRpc2FibGVkKSwubWF0LXRhYi1ncm91cC5tYXQtd2FybiAubWF0LXRhYi1saW5rLmNkay1rZXlib2FyZC1mb2N1c2VkOm5vdCgubWF0LXRhYi1kaXNhYmxlZCksLm1hdC10YWItZ3JvdXAubWF0LXdhcm4gLm1hdC10YWItbGluay5jZGstcHJvZ3JhbS1mb2N1c2VkOm5vdCgubWF0LXRhYi1kaXNhYmxlZCksLm1hdC10YWItbmF2LWJhci5tYXQtd2FybiAubWF0LXRhYi1sYWJlbC5jZGsta2V5Ym9hcmQtZm9jdXNlZDpub3QoLm1hdC10YWItZGlzYWJsZWQpLC5tYXQtdGFiLW5hdi1iYXIubWF0LXdhcm4gLm1hdC10YWItbGFiZWwuY2RrLXByb2dyYW0tZm9jdXNlZDpub3QoLm1hdC10YWItZGlzYWJsZWQpLC5tYXQtdGFiLW5hdi1iYXIubWF0LXdhcm4gLm1hdC10YWItbGluay5jZGsta2V5Ym9hcmQtZm9jdXNlZDpub3QoLm1hdC10YWItZGlzYWJsZWQpLC5tYXQtdGFiLW5hdi1iYXIubWF0LXdhcm4gLm1hdC10YWItbGluay5jZGstcHJvZ3JhbS1mb2N1c2VkOm5vdCgubWF0LXRhYi1kaXNhYmxlZCl7YmFja2dyb3VuZC1jb2xvcjpyZ2JhKDI1NSwyMDUsMjEwLC4zKX0ubWF0LXRhYi1ncm91cC5tYXQtd2FybiAubWF0LWluay1iYXIsLm1hdC10YWItbmF2LWJhci5tYXQtd2FybiAubWF0LWluay1iYXJ7YmFja2dyb3VuZC1jb2xvcjojZjQ0MzM2fS5tYXQtdGFiLWdyb3VwLm1hdC13YXJuLm1hdC1iYWNrZ3JvdW5kLXdhcm4gLm1hdC1pbmstYmFyLC5tYXQtdGFiLW5hdi1iYXIubWF0LXdhcm4ubWF0LWJhY2tncm91bmQtd2FybiAubWF0LWluay1iYXJ7YmFja2dyb3VuZC1jb2xvcjojZmZmfS5tYXQtdGFiLWdyb3VwLm1hdC1iYWNrZ3JvdW5kLXByaW1hcnkgLm1hdC10YWItbGFiZWwuY2RrLWtleWJvYXJkLWZvY3VzZWQ6bm90KC5tYXQtdGFiLWRpc2FibGVkKSwubWF0LXRhYi1ncm91cC5tYXQtYmFja2dyb3VuZC1wcmltYXJ5IC5tYXQtdGFiLWxhYmVsLmNkay1wcm9ncmFtLWZvY3VzZWQ6bm90KC5tYXQtdGFiLWRpc2FibGVkKSwubWF0LXRhYi1ncm91cC5tYXQtYmFja2dyb3VuZC1wcmltYXJ5IC5tYXQtdGFiLWxpbmsuY2RrLWtleWJvYXJkLWZvY3VzZWQ6bm90KC5tYXQtdGFiLWRpc2FibGVkKSwubWF0LXRhYi1ncm91cC5tYXQtYmFja2dyb3VuZC1wcmltYXJ5IC5tYXQtdGFiLWxpbmsuY2RrLXByb2dyYW0tZm9jdXNlZDpub3QoLm1hdC10YWItZGlzYWJsZWQpLC5tYXQtdGFiLW5hdi1iYXIubWF0LWJhY2tncm91bmQtcHJpbWFyeSAubWF0LXRhYi1sYWJlbC5jZGsta2V5Ym9hcmQtZm9jdXNlZDpub3QoLm1hdC10YWItZGlzYWJsZWQpLC5tYXQtdGFiLW5hdi1iYXIubWF0LWJhY2tncm91bmQtcHJpbWFyeSAubWF0LXRhYi1sYWJlbC5jZGstcHJvZ3JhbS1mb2N1c2VkOm5vdCgubWF0LXRhYi1kaXNhYmxlZCksLm1hdC10YWItbmF2LWJhci5tYXQtYmFja2dyb3VuZC1wcmltYXJ5IC5tYXQtdGFiLWxpbmsuY2RrLWtleWJvYXJkLWZvY3VzZWQ6bm90KC5tYXQtdGFiLWRpc2FibGVkKSwubWF0LXRhYi1uYXYtYmFyLm1hdC1iYWNrZ3JvdW5kLXByaW1hcnkgLm1hdC10YWItbGluay5jZGstcHJvZ3JhbS1mb2N1c2VkOm5vdCgubWF0LXRhYi1kaXNhYmxlZCl7YmFja2dyb3VuZC1jb2xvcjpyZ2JhKDIwOSwxOTYsMjMzLC4zKX0ubWF0LXRhYi1ncm91cC5tYXQtYmFja2dyb3VuZC1wcmltYXJ5IC5tYXQtdGFiLWhlYWRlciwubWF0LXRhYi1ncm91cC5tYXQtYmFja2dyb3VuZC1wcmltYXJ5IC5tYXQtdGFiLWxpbmtzLC5tYXQtdGFiLW5hdi1iYXIubWF0LWJhY2tncm91bmQtcHJpbWFyeSAubWF0LXRhYi1oZWFkZXIsLm1hdC10YWItbmF2LWJhci5tYXQtYmFja2dyb3VuZC1wcmltYXJ5IC5tYXQtdGFiLWxpbmtze2JhY2tncm91bmQtY29sb3I6IzY3M2FiN30ubWF0LXRhYi1ncm91cC5tYXQtYmFja2dyb3VuZC1wcmltYXJ5IC5tYXQtdGFiLWxhYmVsLC5tYXQtdGFiLWdyb3VwLm1hdC1iYWNrZ3JvdW5kLXByaW1hcnkgLm1hdC10YWItbGluaywubWF0LXRhYi1uYXYtYmFyLm1hdC1iYWNrZ3JvdW5kLXByaW1hcnkgLm1hdC10YWItbGFiZWwsLm1hdC10YWItbmF2LWJhci5tYXQtYmFja2dyb3VuZC1wcmltYXJ5IC5tYXQtdGFiLWxpbmt7Y29sb3I6I2ZmZn0ubWF0LXRhYi1ncm91cC5tYXQtYmFja2dyb3VuZC1wcmltYXJ5IC5tYXQtdGFiLWxhYmVsLm1hdC10YWItZGlzYWJsZWQsLm1hdC10YWItZ3JvdXAubWF0LWJhY2tncm91bmQtcHJpbWFyeSAubWF0LXRhYi1saW5rLm1hdC10YWItZGlzYWJsZWQsLm1hdC10YWItbmF2LWJhci5tYXQtYmFja2dyb3VuZC1wcmltYXJ5IC5tYXQtdGFiLWxhYmVsLm1hdC10YWItZGlzYWJsZWQsLm1hdC10YWItbmF2LWJhci5tYXQtYmFja2dyb3VuZC1wcmltYXJ5IC5tYXQtdGFiLWxpbmsubWF0LXRhYi1kaXNhYmxlZHtjb2xvcjpyZ2JhKDI1NSwyNTUsMjU1LC40KX0ubWF0LXRhYi1ncm91cC5tYXQtYmFja2dyb3VuZC1wcmltYXJ5IC5tYXQtdGFiLWhlYWRlci1wYWdpbmF0aW9uLWNoZXZyb24sLm1hdC10YWItbmF2LWJhci5tYXQtYmFja2dyb3VuZC1wcmltYXJ5IC5tYXQtdGFiLWhlYWRlci1wYWdpbmF0aW9uLWNoZXZyb257Ym9yZGVyLWNvbG9yOiNmZmZ9Lm1hdC10YWItZ3JvdXAubWF0LWJhY2tncm91bmQtcHJpbWFyeSAubWF0LXRhYi1oZWFkZXItcGFnaW5hdGlvbi1kaXNhYmxlZCAubWF0LXRhYi1oZWFkZXItcGFnaW5hdGlvbi1jaGV2cm9uLC5tYXQtdGFiLW5hdi1iYXIubWF0LWJhY2tncm91bmQtcHJpbWFyeSAubWF0LXRhYi1oZWFkZXItcGFnaW5hdGlvbi1kaXNhYmxlZCAubWF0LXRhYi1oZWFkZXItcGFnaW5hdGlvbi1jaGV2cm9ue2JvcmRlci1jb2xvcjpyZ2JhKDI1NSwyNTUsMjU1LC40KX0ubWF0LXRhYi1ncm91cC5tYXQtYmFja2dyb3VuZC1wcmltYXJ5IC5tYXQtcmlwcGxlLWVsZW1lbnQsLm1hdC10YWItbmF2LWJhci5tYXQtYmFja2dyb3VuZC1wcmltYXJ5IC5tYXQtcmlwcGxlLWVsZW1lbnR7YmFja2dyb3VuZC1jb2xvcjpyZ2JhKDI1NSwyNTUsMjU1LC4xMil9Lm1hdC10YWItZ3JvdXAubWF0LWJhY2tncm91bmQtYWNjZW50IC5tYXQtdGFiLWxhYmVsLmNkay1rZXlib2FyZC1mb2N1c2VkOm5vdCgubWF0LXRhYi1kaXNhYmxlZCksLm1hdC10YWItZ3JvdXAubWF0LWJhY2tncm91bmQtYWNjZW50IC5tYXQtdGFiLWxhYmVsLmNkay1wcm9ncmFtLWZvY3VzZWQ6bm90KC5tYXQtdGFiLWRpc2FibGVkKSwubWF0LXRhYi1ncm91cC5tYXQtYmFja2dyb3VuZC1hY2NlbnQgLm1hdC10YWItbGluay5jZGsta2V5Ym9hcmQtZm9jdXNlZDpub3QoLm1hdC10YWItZGlzYWJsZWQpLC5tYXQtdGFiLWdyb3VwLm1hdC1iYWNrZ3JvdW5kLWFjY2VudCAubWF0LXRhYi1saW5rLmNkay1wcm9ncmFtLWZvY3VzZWQ6bm90KC5tYXQtdGFiLWRpc2FibGVkKSwubWF0LXRhYi1uYXYtYmFyLm1hdC1iYWNrZ3JvdW5kLWFjY2VudCAubWF0LXRhYi1sYWJlbC5jZGsta2V5Ym9hcmQtZm9jdXNlZDpub3QoLm1hdC10YWItZGlzYWJsZWQpLC5tYXQtdGFiLW5hdi1iYXIubWF0LWJhY2tncm91bmQtYWNjZW50IC5tYXQtdGFiLWxhYmVsLmNkay1wcm9ncmFtLWZvY3VzZWQ6bm90KC5tYXQtdGFiLWRpc2FibGVkKSwubWF0LXRhYi1uYXYtYmFyLm1hdC1iYWNrZ3JvdW5kLWFjY2VudCAubWF0LXRhYi1saW5rLmNkay1rZXlib2FyZC1mb2N1c2VkOm5vdCgubWF0LXRhYi1kaXNhYmxlZCksLm1hdC10YWItbmF2LWJhci5tYXQtYmFja2dyb3VuZC1hY2NlbnQgLm1hdC10YWItbGluay5jZGstcHJvZ3JhbS1mb2N1c2VkOm5vdCgubWF0LXRhYi1kaXNhYmxlZCl7YmFja2dyb3VuZC1jb2xvcjpyZ2JhKDI1NSwyMjksMTI3LC4zKX0ubWF0LXRhYi1ncm91cC5tYXQtYmFja2dyb3VuZC1hY2NlbnQgLm1hdC10YWItaGVhZGVyLC5tYXQtdGFiLWdyb3VwLm1hdC1iYWNrZ3JvdW5kLWFjY2VudCAubWF0LXRhYi1saW5rcywubWF0LXRhYi1uYXYtYmFyLm1hdC1iYWNrZ3JvdW5kLWFjY2VudCAubWF0LXRhYi1oZWFkZXIsLm1hdC10YWItbmF2LWJhci5tYXQtYmFja2dyb3VuZC1hY2NlbnQgLm1hdC10YWItbGlua3N7YmFja2dyb3VuZC1jb2xvcjojZmZkNzQwfS5tYXQtdGFiLWdyb3VwLm1hdC1iYWNrZ3JvdW5kLWFjY2VudCAubWF0LXRhYi1sYWJlbCwubWF0LXRhYi1ncm91cC5tYXQtYmFja2dyb3VuZC1hY2NlbnQgLm1hdC10YWItbGluaywubWF0LXRhYi1uYXYtYmFyLm1hdC1iYWNrZ3JvdW5kLWFjY2VudCAubWF0LXRhYi1sYWJlbCwubWF0LXRhYi1uYXYtYmFyLm1hdC1iYWNrZ3JvdW5kLWFjY2VudCAubWF0LXRhYi1saW5re2NvbG9yOnJnYmEoMCwwLDAsLjg3KX0ubWF0LXRhYi1ncm91cC5tYXQtYmFja2dyb3VuZC1hY2NlbnQgLm1hdC10YWItbGFiZWwubWF0LXRhYi1kaXNhYmxlZCwubWF0LXRhYi1ncm91cC5tYXQtYmFja2dyb3VuZC1hY2NlbnQgLm1hdC10YWItbGluay5tYXQtdGFiLWRpc2FibGVkLC5tYXQtdGFiLW5hdi1iYXIubWF0LWJhY2tncm91bmQtYWNjZW50IC5tYXQtdGFiLWxhYmVsLm1hdC10YWItZGlzYWJsZWQsLm1hdC10YWItbmF2LWJhci5tYXQtYmFja2dyb3VuZC1hY2NlbnQgLm1hdC10YWItbGluay5tYXQtdGFiLWRpc2FibGVke2NvbG9yOnJnYmEoMCwwLDAsLjQpfS5tYXQtdGFiLWdyb3VwLm1hdC1iYWNrZ3JvdW5kLWFjY2VudCAubWF0LXRhYi1oZWFkZXItcGFnaW5hdGlvbi1jaGV2cm9uLC5tYXQtdGFiLW5hdi1iYXIubWF0LWJhY2tncm91bmQtYWNjZW50IC5tYXQtdGFiLWhlYWRlci1wYWdpbmF0aW9uLWNoZXZyb257Ym9yZGVyLWNvbG9yOnJnYmEoMCwwLDAsLjg3KX0ubWF0LXRhYi1ncm91cC5tYXQtYmFja2dyb3VuZC1hY2NlbnQgLm1hdC10YWItaGVhZGVyLXBhZ2luYXRpb24tZGlzYWJsZWQgLm1hdC10YWItaGVhZGVyLXBhZ2luYXRpb24tY2hldnJvbiwubWF0LXRhYi1uYXYtYmFyLm1hdC1iYWNrZ3JvdW5kLWFjY2VudCAubWF0LXRhYi1oZWFkZXItcGFnaW5hdGlvbi1kaXNhYmxlZCAubWF0LXRhYi1oZWFkZXItcGFnaW5hdGlvbi1jaGV2cm9ue2JvcmRlci1jb2xvcjpyZ2JhKDAsMCwwLC40KX0ubWF0LXRhYi1ncm91cC5tYXQtYmFja2dyb3VuZC1hY2NlbnQgLm1hdC1yaXBwbGUtZWxlbWVudCwubWF0LXRhYi1uYXYtYmFyLm1hdC1iYWNrZ3JvdW5kLWFjY2VudCAubWF0LXJpcHBsZS1lbGVtZW50e2JhY2tncm91bmQtY29sb3I6cmdiYSgwLDAsMCwuMTIpfS5tYXQtdGFiLWdyb3VwLm1hdC1iYWNrZ3JvdW5kLXdhcm4gLm1hdC10YWItbGFiZWwuY2RrLWtleWJvYXJkLWZvY3VzZWQ6bm90KC5tYXQtdGFiLWRpc2FibGVkKSwubWF0LXRhYi1ncm91cC5tYXQtYmFja2dyb3VuZC13YXJuIC5tYXQtdGFiLWxhYmVsLmNkay1wcm9ncmFtLWZvY3VzZWQ6bm90KC5tYXQtdGFiLWRpc2FibGVkKSwubWF0LXRhYi1ncm91cC5tYXQtYmFja2dyb3VuZC13YXJuIC5tYXQtdGFiLWxpbmsuY2RrLWtleWJvYXJkLWZvY3VzZWQ6bm90KC5tYXQtdGFiLWRpc2FibGVkKSwubWF0LXRhYi1ncm91cC5tYXQtYmFja2dyb3VuZC13YXJuIC5tYXQtdGFiLWxpbmsuY2RrLXByb2dyYW0tZm9jdXNlZDpub3QoLm1hdC10YWItZGlzYWJsZWQpLC5tYXQtdGFiLW5hdi1iYXIubWF0LWJhY2tncm91bmQtd2FybiAubWF0LXRhYi1sYWJlbC5jZGsta2V5Ym9hcmQtZm9jdXNlZDpub3QoLm1hdC10YWItZGlzYWJsZWQpLC5tYXQtdGFiLW5hdi1iYXIubWF0LWJhY2tncm91bmQtd2FybiAubWF0LXRhYi1sYWJlbC5jZGstcHJvZ3JhbS1mb2N1c2VkOm5vdCgubWF0LXRhYi1kaXNhYmxlZCksLm1hdC10YWItbmF2LWJhci5tYXQtYmFja2dyb3VuZC13YXJuIC5tYXQtdGFiLWxpbmsuY2RrLWtleWJvYXJkLWZvY3VzZWQ6bm90KC5tYXQtdGFiLWRpc2FibGVkKSwubWF0LXRhYi1uYXYtYmFyLm1hdC1iYWNrZ3JvdW5kLXdhcm4gLm1hdC10YWItbGluay5jZGstcHJvZ3JhbS1mb2N1c2VkOm5vdCgubWF0LXRhYi1kaXNhYmxlZCl7YmFja2dyb3VuZC1jb2xvcjpyZ2JhKDI1NSwyMDUsMjEwLC4zKX0ubWF0LXRhYi1ncm91cC5tYXQtYmFja2dyb3VuZC13YXJuIC5tYXQtdGFiLWhlYWRlciwubWF0LXRhYi1ncm91cC5tYXQtYmFja2dyb3VuZC13YXJuIC5tYXQtdGFiLWxpbmtzLC5tYXQtdGFiLW5hdi1iYXIubWF0LWJhY2tncm91bmQtd2FybiAubWF0LXRhYi1oZWFkZXIsLm1hdC10YWItbmF2LWJhci5tYXQtYmFja2dyb3VuZC13YXJuIC5tYXQtdGFiLWxpbmtze2JhY2tncm91bmQtY29sb3I6I2Y0NDMzNn0ubWF0LXRhYi1ncm91cC5tYXQtYmFja2dyb3VuZC13YXJuIC5tYXQtdGFiLWxhYmVsLC5tYXQtdGFiLWdyb3VwLm1hdC1iYWNrZ3JvdW5kLXdhcm4gLm1hdC10YWItbGluaywubWF0LXRhYi1uYXYtYmFyLm1hdC1iYWNrZ3JvdW5kLXdhcm4gLm1hdC10YWItbGFiZWwsLm1hdC10YWItbmF2LWJhci5tYXQtYmFja2dyb3VuZC13YXJuIC5tYXQtdGFiLWxpbmt7Y29sb3I6I2ZmZn0ubWF0LXRhYi1ncm91cC5tYXQtYmFja2dyb3VuZC13YXJuIC5tYXQtdGFiLWxhYmVsLm1hdC10YWItZGlzYWJsZWQsLm1hdC10YWItZ3JvdXAubWF0LWJhY2tncm91bmQtd2FybiAubWF0LXRhYi1saW5rLm1hdC10YWItZGlzYWJsZWQsLm1hdC10YWItbmF2LWJhci5tYXQtYmFja2dyb3VuZC13YXJuIC5tYXQtdGFiLWxhYmVsLm1hdC10YWItZGlzYWJsZWQsLm1hdC10YWItbmF2LWJhci5tYXQtYmFja2dyb3VuZC13YXJuIC5tYXQtdGFiLWxpbmsubWF0LXRhYi1kaXNhYmxlZHtjb2xvcjpyZ2JhKDI1NSwyNTUsMjU1LC40KX0ubWF0LXRhYi1ncm91cC5tYXQtYmFja2dyb3VuZC13YXJuIC5tYXQtdGFiLWhlYWRlci1wYWdpbmF0aW9uLWNoZXZyb24sLm1hdC10YWItbmF2LWJhci5tYXQtYmFja2dyb3VuZC13YXJuIC5tYXQtdGFiLWhlYWRlci1wYWdpbmF0aW9uLWNoZXZyb257Ym9yZGVyLWNvbG9yOiNmZmZ9Lm1hdC10YWItZ3JvdXAubWF0LWJhY2tncm91bmQtd2FybiAubWF0LXRhYi1oZWFkZXItcGFnaW5hdGlvbi1kaXNhYmxlZCAubWF0LXRhYi1oZWFkZXItcGFnaW5hdGlvbi1jaGV2cm9uLC5tYXQtdGFiLW5hdi1iYXIubWF0LWJhY2tncm91bmQtd2FybiAubWF0LXRhYi1oZWFkZXItcGFnaW5hdGlvbi1kaXNhYmxlZCAubWF0LXRhYi1oZWFkZXItcGFnaW5hdGlvbi1jaGV2cm9ue2JvcmRlci1jb2xvcjpyZ2JhKDI1NSwyNTUsMjU1LC40KX0ubWF0LXRhYi1ncm91cC5tYXQtYmFja2dyb3VuZC13YXJuIC5tYXQtcmlwcGxlLWVsZW1lbnQsLm1hdC10YWItbmF2LWJhci5tYXQtYmFja2dyb3VuZC13YXJuIC5tYXQtcmlwcGxlLWVsZW1lbnR7YmFja2dyb3VuZC1jb2xvcjpyZ2JhKDI1NSwyNTUsMjU1LC4xMil9Lm1hdC10b29sYmFye2JhY2tncm91bmQ6I2Y1ZjVmNTtjb2xvcjpyZ2JhKDAsMCwwLC44Nyl9Lm1hdC10b29sYmFyLm1hdC1wcmltYXJ5e2JhY2tncm91bmQ6IzY3M2FiNztjb2xvcjojZmZmfS5tYXQtdG9vbGJhci5tYXQtYWNjZW50e2JhY2tncm91bmQ6I2ZmZDc0MDtjb2xvcjpyZ2JhKDAsMCwwLC44Nyl9Lm1hdC10b29sYmFyLm1hdC13YXJue2JhY2tncm91bmQ6I2Y0NDMzNjtjb2xvcjojZmZmfS5tYXQtdG9vbGJhciAubWF0LWZvY3VzZWQgLm1hdC1mb3JtLWZpZWxkLXJpcHBsZSwubWF0LXRvb2xiYXIgLm1hdC1mb3JtLWZpZWxkLXJpcHBsZSwubWF0LXRvb2xiYXIgLm1hdC1mb3JtLWZpZWxkLXVuZGVybGluZXtiYWNrZ3JvdW5kLWNvbG9yOmN1cnJlbnRDb2xvcn0ubWF0LXRvb2xiYXIgLm1hdC1mb2N1c2VkIC5tYXQtZm9ybS1maWVsZC1sYWJlbCwubWF0LXRvb2xiYXIgLm1hdC1mb3JtLWZpZWxkLWxhYmVsLC5tYXQtdG9vbGJhciAubWF0LWZvcm0tZmllbGQubWF0LWZvY3VzZWQgLm1hdC1zZWxlY3QtYXJyb3csLm1hdC10b29sYmFyIC5tYXQtc2VsZWN0LWFycm93LC5tYXQtdG9vbGJhciAubWF0LXNlbGVjdC12YWx1ZXtjb2xvcjppbmhlcml0fS5tYXQtdG9vbGJhciAubWF0LWlucHV0LWVsZW1lbnR7Y2FyZXQtY29sb3I6Y3VycmVudENvbG9yfS5tYXQtdG9vbHRpcHtiYWNrZ3JvdW5kOnJnYmEoOTcsOTcsOTcsLjkpfS5tYXQtdHJlZXtiYWNrZ3JvdW5kOiNmZmZ9Lm1hdC1uZXN0ZWQtdHJlZS1ub2RlLC5tYXQtdHJlZS1ub2Rle2NvbG9yOnJnYmEoMCwwLDAsLjg3KX0ubWF0LXNuYWNrLWJhci1jb250YWluZXJ7Y29sb3I6cmdiYSgyNTUsMjU1LDI1NSwuNyk7YmFja2dyb3VuZDojMzIzMjMyO2JveC1zaGFkb3c6MCAzcHggNXB4IC0xcHggcmdiYSgwLDAsMCwuMiksMCA2cHggMTBweCAwIHJnYmEoMCwwLDAsLjE0KSwwIDFweCAxOHB4IDAgcmdiYSgwLDAsMCwuMTIpfS5tYXQtc2ltcGxlLXNuYWNrYmFyLWFjdGlvbntjb2xvcjojZmZkNzQwfSJdfQ== */"

/***/ }),

/***/ "./src/app/components/native-setting-dialog/native-setting-dialog.component.ts":
/*!*************************************************************************************!*\
  !*** ./src/app/components/native-setting-dialog/native-setting-dialog.component.ts ***!
  \*************************************************************************************/
/*! exports provided: NativeSettingDialogComponent */
/***/ (function(module, __webpack_exports__, __webpack_require__) {

"use strict";
__webpack_require__.r(__webpack_exports__);
/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, "NativeSettingDialogComponent", function() { return NativeSettingDialogComponent; });
/* harmony import */ var _angular_core__WEBPACK_IMPORTED_MODULE_0__ = __webpack_require__(/*! @angular/core */ "./node_modules/@angular/core/fesm5/core.js");
/* harmony import */ var _angular_material__WEBPACK_IMPORTED_MODULE_1__ = __webpack_require__(/*! @angular/material */ "./node_modules/@angular/material/esm5/material.es5.js");
var __decorate = (undefined && undefined.__decorate) || function (decorators, target, key, desc) {
    var c = arguments.length, r = c < 3 ? target : desc === null ? desc = Object.getOwnPropertyDescriptor(target, key) : desc, d;
    if (typeof Reflect === "object" && typeof Reflect.decorate === "function") r = Reflect.decorate(decorators, target, key, desc);
    else for (var i = decorators.length - 1; i >= 0; i--) if (d = decorators[i]) r = (c < 3 ? d(r) : c > 3 ? d(target, key, r) : d(target, key)) || r;
    return c > 3 && r && Object.defineProperty(target, key, r), r;
};
var __metadata = (undefined && undefined.__metadata) || function (k, v) {
    if (typeof Reflect === "object" && typeof Reflect.metadata === "function") return Reflect.metadata(k, v);
};
var __param = (undefined && undefined.__param) || function (paramIndex, decorator) {
    return function (target, key) { decorator(target, key, paramIndex); }
};


var NativeSettingDialogComponent = /** @class */ (function () {
    function NativeSettingDialogComponent(thisDialogRef, data) {
        this.thisDialogRef = thisDialogRef;
        this.data = data;
    }
    NativeSettingDialogComponent.prototype.ngOnInit = function () {
    };
    NativeSettingDialogComponent.prototype.cancelDialog = function () {
        this.thisDialogRef.close('cancel');
        // console.log("canceled");
    };
    NativeSettingDialogComponent.prototype.confirmDialog = function () {
        this.thisDialogRef.close('confirm');
        // console.log("confirmed");
    };
    NativeSettingDialogComponent = __decorate([
        Object(_angular_core__WEBPACK_IMPORTED_MODULE_0__["Component"])({
            selector: 'app-native-setting-dialog',
            template: __webpack_require__(/*! ./native-setting-dialog.component.html */ "./src/app/components/native-setting-dialog/native-setting-dialog.component.html"),
            styles: [__webpack_require__(/*! ./native-setting-dialog.component.scss */ "./src/app/components/native-setting-dialog/native-setting-dialog.component.scss")]
        }),
        __param(1, Object(_angular_core__WEBPACK_IMPORTED_MODULE_0__["Inject"])(_angular_material__WEBPACK_IMPORTED_MODULE_1__["MAT_DIALOG_DATA"])),
        __metadata("design:paramtypes", [_angular_material__WEBPACK_IMPORTED_MODULE_1__["MatDialogRef"], Object])
    ], NativeSettingDialogComponent);
    return NativeSettingDialogComponent;
}());



/***/ }),

/***/ "./src/app/components/page-not-found/page-not-found.component.css":
/*!************************************************************************!*\
  !*** ./src/app/components/page-not-found/page-not-found.component.css ***!
  \************************************************************************/
/*! no static exports found */
/***/ (function(module, exports) {

module.exports = "\n/*# sourceMappingURL=data:application/json;base64,eyJ2ZXJzaW9uIjozLCJzb3VyY2VzIjpbXSwibmFtZXMiOltdLCJtYXBwaW5ncyI6IiIsImZpbGUiOiJzcmMvYXBwL2NvbXBvbmVudHMvcGFnZS1ub3QtZm91bmQvcGFnZS1ub3QtZm91bmQuY29tcG9uZW50LmNzcyJ9 */"

/***/ }),

/***/ "./src/app/components/page-not-found/page-not-found.component.html":
/*!*************************************************************************!*\
  !*** ./src/app/components/page-not-found/page-not-found.component.html ***!
  \*************************************************************************/
/*! no static exports found */
/***/ (function(module, exports) {

module.exports = "<p>\n  page-not-found!\n</p>\n"

/***/ }),

/***/ "./src/app/components/page-not-found/page-not-found.component.ts":
/*!***********************************************************************!*\
  !*** ./src/app/components/page-not-found/page-not-found.component.ts ***!
  \***********************************************************************/
/*! exports provided: PageNotFoundComponent */
/***/ (function(module, __webpack_exports__, __webpack_require__) {

"use strict";
__webpack_require__.r(__webpack_exports__);
/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, "PageNotFoundComponent", function() { return PageNotFoundComponent; });
/* harmony import */ var _angular_core__WEBPACK_IMPORTED_MODULE_0__ = __webpack_require__(/*! @angular/core */ "./node_modules/@angular/core/fesm5/core.js");
var __decorate = (undefined && undefined.__decorate) || function (decorators, target, key, desc) {
    var c = arguments.length, r = c < 3 ? target : desc === null ? desc = Object.getOwnPropertyDescriptor(target, key) : desc, d;
    if (typeof Reflect === "object" && typeof Reflect.decorate === "function") r = Reflect.decorate(decorators, target, key, desc);
    else for (var i = decorators.length - 1; i >= 0; i--) if (d = decorators[i]) r = (c < 3 ? d(r) : c > 3 ? d(target, key, r) : d(target, key)) || r;
    return c > 3 && r && Object.defineProperty(target, key, r), r;
};
var __metadata = (undefined && undefined.__metadata) || function (k, v) {
    if (typeof Reflect === "object" && typeof Reflect.metadata === "function") return Reflect.metadata(k, v);
};

var PageNotFoundComponent = /** @class */ (function () {
    function PageNotFoundComponent() {
    }
    PageNotFoundComponent.prototype.ngOnInit = function () {
    };
    PageNotFoundComponent = __decorate([
        Object(_angular_core__WEBPACK_IMPORTED_MODULE_0__["Component"])({
            selector: 'app-page-not-found',
            template: __webpack_require__(/*! ./page-not-found.component.html */ "./src/app/components/page-not-found/page-not-found.component.html"),
            styles: [__webpack_require__(/*! ./page-not-found.component.css */ "./src/app/components/page-not-found/page-not-found.component.css")]
        }),
        __metadata("design:paramtypes", [])
    ], PageNotFoundComponent);
    return PageNotFoundComponent;
}());



/***/ }),

/***/ "./src/app/components/register-realuser/register-realuser.component.css":
/*!******************************************************************************!*\
  !*** ./src/app/components/register-realuser/register-realuser.component.css ***!
  \******************************************************************************/
/*! no static exports found */
/***/ (function(module, exports) {

module.exports = "@font-face {\n  font-family: 'OpenSans';\n  src: url('OpenSans-Regular.ttf');\n}\n\n@font-face {\n  font-family: 'Vollkorn';\n  src: url('Vollkorn-Bold.ttf');\n}\n\n.wrapper h2{\n    font-family: 'OpenSans', Helvetica, Arial, Sans-Serif;\n    margin: 20px;\n    text-align: center;\n    font-size: 1em;\n}\n\n.wrapper {\n  padding: 0;\n  margin: 0;\n  position: absolute;\n  width: 100%;\n  top: 90px;\n}\n\n.loginFormWrapper{\n  width: 70%;\n  margin: 20px auto;\n}\n\n.btnLogin{\n  border: none;\n  outline: none;\n  text-transform: uppercase;\n  font-size: 1em;\n  font-family: 'OpenSans', Helvetica, Arial, Sans-Serif;\n  display: block;\n  margin: 30px auto 0 auto;\n  background: #494949;\n  color: #ffffff;\n  min-width: 180px;\n  padding: 0.8em;\n}\n\ninput{\n  font-family: 'Vollkorn', Times, serif;\n  margin-bottom: 6px;\n  font-size: 1.3em;\n  text-align: center; \n}\n\n.error{\n  font-family: 'OpenSans', Helvetica, Arial, Sans-Serif;\n  text-align: center;\n  height: 2em;\n  font-size: 0.9em;\n}\n\n@media (max-height: 650px) {\n  .wrapper h2{\n    font-size: 0.8em;\n    margin: 0;\n  }\n\n  input{\n    font-size: 0.9em;\n  }\n\n  .btnLogin{\n    margin: 0px auto 0 auto;\n    font-size: 0.8em;\n  }\n\n  .error{\n    height: auto;\n    font-size: 0.8em;\n  }\n}\n\n/*# sourceMappingURL=data:application/json;base64,eyJ2ZXJzaW9uIjozLCJzb3VyY2VzIjpbInNyYy9hcHAvY29tcG9uZW50cy9yZWdpc3Rlci1yZWFsdXNlci9yZWdpc3Rlci1yZWFsdXNlci5jb21wb25lbnQuY3NzIl0sIm5hbWVzIjpbXSwibWFwcGluZ3MiOiJBQUFBO0VBQ0UsdUJBQXVCO0VBQ3ZCLGdDQUFnRTtBQUNsRTs7QUFFQTtFQUNFLHVCQUF1QjtFQUN2Qiw2QkFBNEQ7QUFDOUQ7O0FBR0E7SUFDSSxxREFBcUQ7SUFDckQsWUFBWTtJQUNaLGtCQUFrQjtJQUNsQixjQUFjO0FBQ2xCOztBQUVBO0VBQ0UsVUFBVTtFQUNWLFNBQVM7RUFDVCxrQkFBa0I7RUFDbEIsV0FBVztFQUNYLFNBQVM7QUFDWDs7QUFFQTtFQUNFLFVBQVU7RUFDVixpQkFBaUI7QUFDbkI7O0FBRUE7RUFDRSxZQUFZO0VBQ1osYUFBYTtFQUNiLHlCQUF5QjtFQUN6QixjQUFjO0VBQ2QscURBQXFEO0VBQ3JELGNBQWM7RUFDZCx3QkFBd0I7RUFDeEIsbUJBQW1CO0VBQ25CLGNBQWM7RUFDZCxnQkFBZ0I7RUFDaEIsY0FBYztBQUNoQjs7QUFFQTtFQUNFLHFDQUFxQztFQUNyQyxrQkFBa0I7RUFDbEIsZ0JBQWdCO0VBQ2hCLGtCQUFrQjtBQUNwQjs7QUFFQTtFQUNFLHFEQUFxRDtFQUNyRCxrQkFBa0I7RUFDbEIsV0FBVztFQUNYLGdCQUFnQjtBQUNsQjs7QUFHQTtFQUNFO0lBQ0UsZ0JBQWdCO0lBQ2hCLFNBQVM7RUFDWDs7RUFFQTtJQUNFLGdCQUFnQjtFQUNsQjs7RUFFQTtJQUNFLHVCQUF1QjtJQUN2QixnQkFBZ0I7RUFDbEI7O0VBRUE7SUFDRSxZQUFZO0lBQ1osZ0JBQWdCO0VBQ2xCO0FBQ0YiLCJmaWxlIjoic3JjL2FwcC9jb21wb25lbnRzL3JlZ2lzdGVyLXJlYWx1c2VyL3JlZ2lzdGVyLXJlYWx1c2VyLmNvbXBvbmVudC5jc3MiLCJzb3VyY2VzQ29udGVudCI6WyJAZm9udC1mYWNlIHtcbiAgZm9udC1mYW1pbHk6ICdPcGVuU2Fucyc7XG4gIHNyYzogdXJsKFwiLi4vLi4vLi4vYXNzZXRzL2ZvbnRzL09wZW5fU2Fucy9PcGVuU2Fucy1SZWd1bGFyLnR0ZlwiKTtcbn1cblxuQGZvbnQtZmFjZSB7XG4gIGZvbnQtZmFtaWx5OiAnVm9sbGtvcm4nO1xuICBzcmM6IHVybChcIi4uLy4uLy4uL2Fzc2V0cy9mb250cy9Wb2xsa29ybi9Wb2xsa29ybi1Cb2xkLnR0ZlwiKTtcbn1cblxuXG4ud3JhcHBlciBoMntcbiAgICBmb250LWZhbWlseTogJ09wZW5TYW5zJywgSGVsdmV0aWNhLCBBcmlhbCwgU2Fucy1TZXJpZjtcbiAgICBtYXJnaW46IDIwcHg7XG4gICAgdGV4dC1hbGlnbjogY2VudGVyO1xuICAgIGZvbnQtc2l6ZTogMWVtO1xufVxuXG4ud3JhcHBlciB7XG4gIHBhZGRpbmc6IDA7XG4gIG1hcmdpbjogMDtcbiAgcG9zaXRpb246IGFic29sdXRlO1xuICB3aWR0aDogMTAwJTtcbiAgdG9wOiA5MHB4O1xufVxuXG4ubG9naW5Gb3JtV3JhcHBlcntcbiAgd2lkdGg6IDcwJTtcbiAgbWFyZ2luOiAyMHB4IGF1dG87XG59XG5cbi5idG5Mb2dpbntcbiAgYm9yZGVyOiBub25lO1xuICBvdXRsaW5lOiBub25lO1xuICB0ZXh0LXRyYW5zZm9ybTogdXBwZXJjYXNlO1xuICBmb250LXNpemU6IDFlbTtcbiAgZm9udC1mYW1pbHk6ICdPcGVuU2FucycsIEhlbHZldGljYSwgQXJpYWwsIFNhbnMtU2VyaWY7XG4gIGRpc3BsYXk6IGJsb2NrO1xuICBtYXJnaW46IDMwcHggYXV0byAwIGF1dG87XG4gIGJhY2tncm91bmQ6ICM0OTQ5NDk7XG4gIGNvbG9yOiAjZmZmZmZmO1xuICBtaW4td2lkdGg6IDE4MHB4O1xuICBwYWRkaW5nOiAwLjhlbTtcbn1cblxuaW5wdXR7XG4gIGZvbnQtZmFtaWx5OiAnVm9sbGtvcm4nLCBUaW1lcywgc2VyaWY7XG4gIG1hcmdpbi1ib3R0b206IDZweDtcbiAgZm9udC1zaXplOiAxLjNlbTtcbiAgdGV4dC1hbGlnbjogY2VudGVyOyBcbn1cblxuLmVycm9ye1xuICBmb250LWZhbWlseTogJ09wZW5TYW5zJywgSGVsdmV0aWNhLCBBcmlhbCwgU2Fucy1TZXJpZjtcbiAgdGV4dC1hbGlnbjogY2VudGVyO1xuICBoZWlnaHQ6IDJlbTtcbiAgZm9udC1zaXplOiAwLjllbTtcbn1cblxuXG5AbWVkaWEgKG1heC1oZWlnaHQ6IDY1MHB4KSB7XG4gIC53cmFwcGVyIGgye1xuICAgIGZvbnQtc2l6ZTogMC44ZW07XG4gICAgbWFyZ2luOiAwO1xuICB9XG5cbiAgaW5wdXR7XG4gICAgZm9udC1zaXplOiAwLjllbTtcbiAgfVxuXG4gIC5idG5Mb2dpbntcbiAgICBtYXJnaW46IDBweCBhdXRvIDAgYXV0bztcbiAgICBmb250LXNpemU6IDAuOGVtO1xuICB9XG5cbiAgLmVycm9ye1xuICAgIGhlaWdodDogYXV0bztcbiAgICBmb250LXNpemU6IDAuOGVtO1xuICB9XG59XG4iXX0= */"

/***/ }),

/***/ "./src/app/components/register-realuser/register-realuser.component.html":
/*!*******************************************************************************!*\
  !*** ./src/app/components/register-realuser/register-realuser.component.html ***!
  \*******************************************************************************/
/*! no static exports found */
/***/ (function(module, exports) {

module.exports = "<div class=\"wrapper\">\n  <h2>{{ 'register.title' | translate }}</h2>\n  <div class=\"loginFormWrapper\">\n    <form name=\"registerRealForm\" [formGroup]=\"registerRealUserForm\">\n      <div class=\"fix-mat-form-field\">\n        <mat-form-field class=\"full-with-field\" appearance=\"outline\">\n          <input matInput placeholder=\"{{ 'register.username' | translate }}\" required [(ngModel)]=\"name\" [formControl]=\"nameFormControl\">\n          <mat-error *ngIf=\"nameFormControl.invalid\">{{getRequiredErrorMessage('name')}}</mat-error>\n        </mat-form-field>\n      </div>\n\n      <div class=\"fix-mat-form-field\">\n        <mat-form-field class=\"full-with-field\" appearance=\"outline\">\n          <input matInput placeholder=\"{{ 'register.email' | translate }}\" [(ngModel)]=\"email\" required [formControl]=\"emailFormControl\">\n          <mat-error *ngIf=\"emailFormControl.invalid\">{{getRequiredErrorMessage('email')}}</mat-error>\n        </mat-form-field>\n      </div>\n\n      <div class=\"fix-mat-form-field\">\n        <mat-form-field class=\"full-with-field\" appearance=\"outline\">\n          <input matInput placeholder=\"{{ 'register.password' | translate }}\" [(ngModel)]=\"password\" required [formControl]=\"passwordFormControl\">\n          <mat-error *ngIf=\"passwordFormControl.invalid\">{{getPasswordErrorMessage()}}</mat-error>\n        </mat-form-field>\n      </div>\n\n      <div class=\"fix-mat-form-field\">\n        <mat-form-field class=\"full-with-field\" appearance=\"outline\">\n          <input matInput placeholder=\"{{ 'register.passwordConfirm' | translate }}\" [(ngModel)]=\"confirmPassword\" required [formControl]=\"confirmPasswordFormControl\">\n          <mat-error *ngIf=\"confirmPasswordFormControl.invalid\">{{getConfirmPasswordErrorMessage()}}</mat-error>\n        </mat-form-field>\n      </div>\n\n      <div class=\"error\"><mat-error *ngIf=\"wrongCred\">{{getExistsErrorMessage()}}</mat-error></div>\n      <button class=\"btnLogin\" [disabled]=\"registerRealUserForm.invalid\" (click)=\"registerAsRealuser()\">{{ 'register.btnSave' | translate }}</button>\n    </form>\n  </div>\n</div>\n"

/***/ }),

/***/ "./src/app/components/register-realuser/register-realuser.component.ts":
/*!*****************************************************************************!*\
  !*** ./src/app/components/register-realuser/register-realuser.component.ts ***!
  \*****************************************************************************/
/*! exports provided: RegisterRealuserComponent */
/***/ (function(module, __webpack_exports__, __webpack_require__) {

"use strict";
__webpack_require__.r(__webpack_exports__);
/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, "RegisterRealuserComponent", function() { return RegisterRealuserComponent; });
/* harmony import */ var _angular_core__WEBPACK_IMPORTED_MODULE_0__ = __webpack_require__(/*! @angular/core */ "./node_modules/@angular/core/fesm5/core.js");
/* harmony import */ var _angular_router__WEBPACK_IMPORTED_MODULE_1__ = __webpack_require__(/*! @angular/router */ "./node_modules/@angular/router/fesm5/router.js");
/* harmony import */ var _WindowRef__WEBPACK_IMPORTED_MODULE_2__ = __webpack_require__(/*! ../../WindowRef */ "./src/app/WindowRef.ts");
/* harmony import */ var _store_actions_UserActions__WEBPACK_IMPORTED_MODULE_3__ = __webpack_require__(/*! ../../store/actions/UserActions */ "./src/app/store/actions/UserActions.ts");
/* harmony import */ var _services_native_native_communication_service__WEBPACK_IMPORTED_MODULE_4__ = __webpack_require__(/*! ../../services/native/native-communication.service */ "./src/app/services/native/native-communication.service.ts");
/* harmony import */ var _angular_forms__WEBPACK_IMPORTED_MODULE_5__ = __webpack_require__(/*! @angular/forms */ "./node_modules/@angular/forms/fesm5/forms.js");
/* harmony import */ var _services_transmission_service__WEBPACK_IMPORTED_MODULE_6__ = __webpack_require__(/*! ../../services/transmission.service */ "./src/app/services/transmission.service.ts");
/* harmony import */ var _services_alert_service__WEBPACK_IMPORTED_MODULE_7__ = __webpack_require__(/*! ../../services/alert.service */ "./src/app/services/alert.service.ts");
var __decorate = (undefined && undefined.__decorate) || function (decorators, target, key, desc) {
    var c = arguments.length, r = c < 3 ? target : desc === null ? desc = Object.getOwnPropertyDescriptor(target, key) : desc, d;
    if (typeof Reflect === "object" && typeof Reflect.decorate === "function") r = Reflect.decorate(decorators, target, key, desc);
    else for (var i = decorators.length - 1; i >= 0; i--) if (d = decorators[i]) r = (c < 3 ? d(r) : c > 3 ? d(target, key, r) : d(target, key)) || r;
    return c > 3 && r && Object.defineProperty(target, key, r), r;
};
var __metadata = (undefined && undefined.__metadata) || function (k, v) {
    if (typeof Reflect === "object" && typeof Reflect.metadata === "function") return Reflect.metadata(k, v);
};
var __param = (undefined && undefined.__param) || function (paramIndex, decorator) {
    return function (target, key) { decorator(target, key, paramIndex); }
};








var RegisterRealuserComponent = /** @class */ (function () {
    function RegisterRealuserComponent(router, transmissionService, winRef, appStore, userActions, nativeCommunicationService, fb, alertService) {
        var _this = this;
        this.router = router;
        this.transmissionService = transmissionService;
        this.winRef = winRef;
        this.appStore = appStore;
        this.userActions = userActions;
        this.nativeCommunicationService = nativeCommunicationService;
        this.fb = fb;
        this.alertService = alertService;
        this.nameFormControl = new _angular_forms__WEBPACK_IMPORTED_MODULE_5__["FormControl"]('', [_angular_forms__WEBPACK_IMPORTED_MODULE_5__["Validators"].required]);
        this.emailFormControl = new _angular_forms__WEBPACK_IMPORTED_MODULE_5__["FormControl"]('', [_angular_forms__WEBPACK_IMPORTED_MODULE_5__["Validators"].required]);
        this.passwordFormControl = new _angular_forms__WEBPACK_IMPORTED_MODULE_5__["FormControl"]('', [_angular_forms__WEBPACK_IMPORTED_MODULE_5__["Validators"].required,
            _angular_forms__WEBPACK_IMPORTED_MODULE_5__["Validators"].pattern('(?=.*[0-9])(?=.*[A-Z])(?=.*[a-z])(?=.*[!@#$%^*&?)§(\/])[A-Za-z0-9!@#$%^*&?)§(\/].{5,}')]);
        this.confirmPasswordFormControl = new _angular_forms__WEBPACK_IMPORTED_MODULE_5__["FormControl"]('', [_angular_forms__WEBPACK_IMPORTED_MODULE_5__["Validators"].required]);
        this.registerRealUserForm = new _angular_forms__WEBPACK_IMPORTED_MODULE_5__["FormGroup"]({
            name: this.nameFormControl,
            email: this.emailFormControl,
            password: this.passwordFormControl,
            confirmPassword: this.confirmPasswordFormControl
        });
        this.subscriptionExistingCred = this.alertService.getMessageExistingCredentialsRealUser().subscribe(function (message) {
            _this.existingUser = message.user;
            _this.existingEmail = message.email;
            if (_this.existingUser && _this.existingEmail) {
                _this.wrongCred = true;
                _this.errorCredentialMessage = 'These username and email already exists';
            }
            else if (_this.existingUser) {
                _this.wrongCred = true;
                _this.errorCredentialMessage = 'This username already exists';
            }
            else if (_this.existingEmail) {
                _this.wrongCred = true;
                _this.errorCredentialMessage = 'This email already exists';
            }
            else {
                _this.wrongCred = true;
                _this.errorCredentialMessage = 'These credentials don\'t match';
            }
        });
    }
    RegisterRealuserComponent.prototype.registerAsRealuser = function () {
        this.transmissionService.registerName = this.nameFormControl.value;
        this.transmissionService.registerEmail = this.emailFormControl.value;
        this.transmissionService.registerPassword = this.passwordFormControl.value;
        var state = this.appStore.getState();
        var platform = state.platform;
        this.transmissionService.transmitODGuestToRealRegister();
    };
    RegisterRealuserComponent.prototype.ngOnInit = function () {
        this.registerName = '';
        this.registerPassword = '';
        this.registerEmail = '';
        this.registerRealUserForm.get('confirmPassword').setValidators(this.matchingpassword('password'));
    };
    RegisterRealuserComponent.prototype.getPasswordErrorMessage = function () {
        return this.passwordFormControl.hasError('required') ? 'You must enter a value' :
            this.passwordFormControl.hasError('pattern') ?
                'Please use at least 6 characters with at least 1 upper case, 1 lower case, ' +
                    '1 number and 1 special character! Example: ! $ § % & / ( ) = ?' : '';
    };
    RegisterRealuserComponent.prototype.getConfirmPasswordErrorMessage = function () {
        return this.confirmPasswordFormControl.hasError('required') ? 'You must enter a value' :
            this.confirmPasswordFormControl.hasError('matchingpassword') ? 'The password is not the same' : 'The password is not the same';
    };
    RegisterRealuserComponent.prototype.getRequiredErrorMessage = function (field) {
        return this.registerRealUserForm.get(field).hasError('required') ? 'You must enter a value' : '';
    };
    RegisterRealuserComponent.prototype.matchingpassword = function (field) {
        return function (control) {
            var group = control.parent;
            var fieldToCompare = group.get(field);
            var notMatching;
            if (String(fieldToCompare.value) === String(control.value) && String(control.value) !== '') {
                notMatching = false;
            }
            else {
                notMatching = true;
            }
            return notMatching ? { 'matching': { value: control.value } } : null;
        };
    };
    RegisterRealuserComponent.prototype.getExistsErrorMessage = function () {
        return this.errorCredentialMessage;
    };
    RegisterRealuserComponent = __decorate([
        Object(_angular_core__WEBPACK_IMPORTED_MODULE_0__["Component"])({
            selector: 'app-register-realuser',
            template: __webpack_require__(/*! ./register-realuser.component.html */ "./src/app/components/register-realuser/register-realuser.component.html"),
            styles: [__webpack_require__(/*! ./register-realuser.component.css */ "./src/app/components/register-realuser/register-realuser.component.css")]
        }),
        Object(_angular_core__WEBPACK_IMPORTED_MODULE_0__["Injectable"])(),
        __param(3, Object(_angular_core__WEBPACK_IMPORTED_MODULE_0__["Inject"])('AppStore')),
        __metadata("design:paramtypes", [_angular_router__WEBPACK_IMPORTED_MODULE_1__["Router"],
            _services_transmission_service__WEBPACK_IMPORTED_MODULE_6__["TransmissionService"],
            _WindowRef__WEBPACK_IMPORTED_MODULE_2__["WindowRef"], Object, _store_actions_UserActions__WEBPACK_IMPORTED_MODULE_3__["UserActions"],
            _services_native_native_communication_service__WEBPACK_IMPORTED_MODULE_4__["NativeCommunicationService"],
            _angular_forms__WEBPACK_IMPORTED_MODULE_5__["FormBuilder"],
            _services_alert_service__WEBPACK_IMPORTED_MODULE_7__["AlertService"]])
    ], RegisterRealuserComponent);
    return RegisterRealuserComponent;
}());



/***/ }),

/***/ "./src/app/components/register/register.component.css":
/*!************************************************************!*\
  !*** ./src/app/components/register/register.component.css ***!
  \************************************************************/
/*! no static exports found */
/***/ (function(module, exports) {

module.exports = "@font-face {\n  font-family: 'OpenSans';\n  src: url('OpenSans-Regular.ttf');\n}\n\n@font-face {\n  font-family: 'Vollkorn';\n  src: url('Vollkorn-Bold.ttf');\n}\n\n.wrapper h2{\n    font-family: 'OpenSans', Helvetica, Arial, Sans-Serif;\n    margin: 20px;\n    text-align: center;\n    font-size: 1em;\n}\n\n.wrapper {\n  padding: 0;\n  margin: 0;\n  position: absolute;\n  width: 100%;\n  top: 90px;\n}\n\n.loginFormWrapper{\n  width: 70%;\n  margin: 20px auto;\n}\n\n.btnLogin{\n  border: none;\n  outline: none;\n  text-transform: uppercase;\n  font-size: 1em;\n  font-family: 'OpenSans', Helvetica, Arial, Sans-Serif;\n  display: block;\n  margin: 30px auto 0 auto;\n  background: #494949;\n  color: #ffffff;\n  min-width: 180px;\n  padding: 0.8em;\n}\n\ninput{\n  font-family: 'Vollkorn', Times, serif;\n  margin-bottom: 6px;\n  font-size: 1.3em;\n  text-align: center; \n}\n\n.error{\n  font-family: 'OpenSans', Helvetica, Arial, Sans-Serif;\n  text-align: center;\n  height: 2em;\n  font-size: 0.9em;\n}\n\n@media (max-height: 650px) {\n  .wrapper h2{\n    font-size: 0.8em;\n    margin: 0;\n  }\n\n  input{\n    font-size: 0.9em;\n  }\n\n  .btnLogin{\n    margin: 0px auto 0 auto;\n    font-size: 0.8em;\n  }\n\n  .error{\n    height: auto;\n    font-size: 0.8em;\n  }\n}\n\n/*# sourceMappingURL=data:application/json;base64,eyJ2ZXJzaW9uIjozLCJzb3VyY2VzIjpbInNyYy9hcHAvY29tcG9uZW50cy9yZWdpc3Rlci9yZWdpc3Rlci5jb21wb25lbnQuY3NzIl0sIm5hbWVzIjpbXSwibWFwcGluZ3MiOiJBQUFBO0VBQ0UsdUJBQXVCO0VBQ3ZCLGdDQUFnRTtBQUNsRTs7QUFFQTtFQUNFLHVCQUF1QjtFQUN2Qiw2QkFBNEQ7QUFDOUQ7O0FBR0E7SUFDSSxxREFBcUQ7SUFDckQsWUFBWTtJQUNaLGtCQUFrQjtJQUNsQixjQUFjO0FBQ2xCOztBQUVBO0VBQ0UsVUFBVTtFQUNWLFNBQVM7RUFDVCxrQkFBa0I7RUFDbEIsV0FBVztFQUNYLFNBQVM7QUFDWDs7QUFFQTtFQUNFLFVBQVU7RUFDVixpQkFBaUI7QUFDbkI7O0FBRUE7RUFDRSxZQUFZO0VBQ1osYUFBYTtFQUNiLHlCQUF5QjtFQUN6QixjQUFjO0VBQ2QscURBQXFEO0VBQ3JELGNBQWM7RUFDZCx3QkFBd0I7RUFDeEIsbUJBQW1CO0VBQ25CLGNBQWM7RUFDZCxnQkFBZ0I7RUFDaEIsY0FBYztBQUNoQjs7QUFFQTtFQUNFLHFDQUFxQztFQUNyQyxrQkFBa0I7RUFDbEIsZ0JBQWdCO0VBQ2hCLGtCQUFrQjtBQUNwQjs7QUFFQTtFQUNFLHFEQUFxRDtFQUNyRCxrQkFBa0I7RUFDbEIsV0FBVztFQUNYLGdCQUFnQjtBQUNsQjs7QUFHQTtFQUNFO0lBQ0UsZ0JBQWdCO0lBQ2hCLFNBQVM7RUFDWDs7RUFFQTtJQUNFLGdCQUFnQjtFQUNsQjs7RUFFQTtJQUNFLHVCQUF1QjtJQUN2QixnQkFBZ0I7RUFDbEI7O0VBRUE7SUFDRSxZQUFZO0lBQ1osZ0JBQWdCO0VBQ2xCO0FBQ0YiLCJmaWxlIjoic3JjL2FwcC9jb21wb25lbnRzL3JlZ2lzdGVyL3JlZ2lzdGVyLmNvbXBvbmVudC5jc3MiLCJzb3VyY2VzQ29udGVudCI6WyJAZm9udC1mYWNlIHtcbiAgZm9udC1mYW1pbHk6ICdPcGVuU2Fucyc7XG4gIHNyYzogdXJsKFwiLi4vLi4vLi4vYXNzZXRzL2ZvbnRzL09wZW5fU2Fucy9PcGVuU2Fucy1SZWd1bGFyLnR0ZlwiKTtcbn1cblxuQGZvbnQtZmFjZSB7XG4gIGZvbnQtZmFtaWx5OiAnVm9sbGtvcm4nO1xuICBzcmM6IHVybChcIi4uLy4uLy4uL2Fzc2V0cy9mb250cy9Wb2xsa29ybi9Wb2xsa29ybi1Cb2xkLnR0ZlwiKTtcbn1cblxuXG4ud3JhcHBlciBoMntcbiAgICBmb250LWZhbWlseTogJ09wZW5TYW5zJywgSGVsdmV0aWNhLCBBcmlhbCwgU2Fucy1TZXJpZjtcbiAgICBtYXJnaW46IDIwcHg7XG4gICAgdGV4dC1hbGlnbjogY2VudGVyO1xuICAgIGZvbnQtc2l6ZTogMWVtO1xufVxuXG4ud3JhcHBlciB7XG4gIHBhZGRpbmc6IDA7XG4gIG1hcmdpbjogMDtcbiAgcG9zaXRpb246IGFic29sdXRlO1xuICB3aWR0aDogMTAwJTtcbiAgdG9wOiA5MHB4O1xufVxuXG4ubG9naW5Gb3JtV3JhcHBlcntcbiAgd2lkdGg6IDcwJTtcbiAgbWFyZ2luOiAyMHB4IGF1dG87XG59XG5cbi5idG5Mb2dpbntcbiAgYm9yZGVyOiBub25lO1xuICBvdXRsaW5lOiBub25lO1xuICB0ZXh0LXRyYW5zZm9ybTogdXBwZXJjYXNlO1xuICBmb250LXNpemU6IDFlbTtcbiAgZm9udC1mYW1pbHk6ICdPcGVuU2FucycsIEhlbHZldGljYSwgQXJpYWwsIFNhbnMtU2VyaWY7XG4gIGRpc3BsYXk6IGJsb2NrO1xuICBtYXJnaW46IDMwcHggYXV0byAwIGF1dG87XG4gIGJhY2tncm91bmQ6ICM0OTQ5NDk7XG4gIGNvbG9yOiAjZmZmZmZmO1xuICBtaW4td2lkdGg6IDE4MHB4O1xuICBwYWRkaW5nOiAwLjhlbTtcbn1cblxuaW5wdXR7XG4gIGZvbnQtZmFtaWx5OiAnVm9sbGtvcm4nLCBUaW1lcywgc2VyaWY7XG4gIG1hcmdpbi1ib3R0b206IDZweDtcbiAgZm9udC1zaXplOiAxLjNlbTtcbiAgdGV4dC1hbGlnbjogY2VudGVyOyBcbn1cblxuLmVycm9ye1xuICBmb250LWZhbWlseTogJ09wZW5TYW5zJywgSGVsdmV0aWNhLCBBcmlhbCwgU2Fucy1TZXJpZjtcbiAgdGV4dC1hbGlnbjogY2VudGVyO1xuICBoZWlnaHQ6IDJlbTtcbiAgZm9udC1zaXplOiAwLjllbTtcbn1cblxuXG5AbWVkaWEgKG1heC1oZWlnaHQ6IDY1MHB4KSB7XG4gIC53cmFwcGVyIGgye1xuICAgIGZvbnQtc2l6ZTogMC44ZW07XG4gICAgbWFyZ2luOiAwO1xuICB9XG5cbiAgaW5wdXR7XG4gICAgZm9udC1zaXplOiAwLjllbTtcbiAgfVxuXG4gIC5idG5Mb2dpbntcbiAgICBtYXJnaW46IDBweCBhdXRvIDAgYXV0bztcbiAgICBmb250LXNpemU6IDAuOGVtO1xuICB9XG5cbiAgLmVycm9ye1xuICAgIGhlaWdodDogYXV0bztcbiAgICBmb250LXNpemU6IDAuOGVtO1xuICB9XG59XG4iXX0= */"

/***/ }),

/***/ "./src/app/components/register/register.component.html":
/*!*************************************************************!*\
  !*** ./src/app/components/register/register.component.html ***!
  \*************************************************************/
/*! no static exports found */
/***/ (function(module, exports) {

module.exports = "<div class=\"wrapper\">\n  <h2>{{ 'register.title' | translate }}</h2>\n  <div class=\"loginFormWrapper\">\n    <form name=\"registerForm\" [formGroup]=\"signupForm\">\n      <div class=\"fix-mat-form-field\">\n        <mat-form-field class=\"full-with-field\" appearance=\"outline\">\n          <input matInput placeholder=\"{{ 'register.username' | translate }}\" required [(ngModel)]=\"name\" [formControl]=\"nameFormControl\">\n          <mat-error *ngIf=\"nameFormControl.invalid\">{{getRequiredErrorMessage('name')}}</mat-error>\n        </mat-form-field>\n      </div>\n\n      <div class=\"fix-mat-form-field\">\n        <mat-form-field class=\"full-with-field\" appearance=\"outline\">\n          <input matInput placeholder=\"{{ 'register.email' | translate }}\" [(ngModel)]=\"email\" required [formControl]=\"emailFormControl\">\n          <mat-error *ngIf=\"emailFormControl.invalid\">{{getRequiredErrorMessage('email')}}</mat-error>\n        </mat-form-field>\n      </div>\n\n      <div class=\"fix-mat-form-field\">\n        <mat-form-field class=\"full-with-field\" appearance=\"outline\">\n          <input matInput placeholder=\"{{ 'register.password' | translate }}\" [(ngModel)]=\"password\" required [formControl]=\"passwordFormControl\">\n          <mat-error *ngIf=\"passwordFormControl.invalid\">{{getPasswordErrorMessage()}}</mat-error>\n        </mat-form-field>\n      </div>\n\n      <div class=\"fix-mat-form-field\">\n        <mat-form-field class=\"full-with-field\" appearance=\"outline\">\n          <input matInput placeholder=\"{{ 'register.passwordConfirm' | translate }}\" [(ngModel)]=\"confirmPassword\" required [formControl]=\"confirmPasswordFormControl\">\n          <mat-error *ngIf=\"confirmPasswordFormControl.invalid\">{{getConfirmPasswordErrorMessage()}}</mat-error>\n        </mat-form-field>\n      </div>\n\n      <div class=\"error\"><mat-error *ngIf=\"wrongCred\">{{getExistsErrorMessage()}}</mat-error></div>\n\n      <button class=\"btnLogin\" [disabled]=\"signupForm.invalid\" (click)=\"requestDeviceInfos(false)\">{{ 'register.btnSave' | translate }}</button>\n    </form>\n  </div>\n</div>\n"

/***/ }),

/***/ "./src/app/components/register/register.component.ts":
/*!***********************************************************!*\
  !*** ./src/app/components/register/register.component.ts ***!
  \***********************************************************/
/*! exports provided: RegisterComponent */
/***/ (function(module, __webpack_exports__, __webpack_require__) {

"use strict";
__webpack_require__.r(__webpack_exports__);
/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, "RegisterComponent", function() { return RegisterComponent; });
/* harmony import */ var _angular_core__WEBPACK_IMPORTED_MODULE_0__ = __webpack_require__(/*! @angular/core */ "./node_modules/@angular/core/fesm5/core.js");
/* harmony import */ var _angular_router__WEBPACK_IMPORTED_MODULE_1__ = __webpack_require__(/*! @angular/router */ "./node_modules/@angular/router/fesm5/router.js");
/* harmony import */ var _WindowRef__WEBPACK_IMPORTED_MODULE_2__ = __webpack_require__(/*! ../../WindowRef */ "./src/app/WindowRef.ts");
/* harmony import */ var _store_actions_UserActions__WEBPACK_IMPORTED_MODULE_3__ = __webpack_require__(/*! ../../store/actions/UserActions */ "./src/app/store/actions/UserActions.ts");
/* harmony import */ var _services_native_native_communication_service__WEBPACK_IMPORTED_MODULE_4__ = __webpack_require__(/*! ../../services/native/native-communication.service */ "./src/app/services/native/native-communication.service.ts");
/* harmony import */ var _angular_forms__WEBPACK_IMPORTED_MODULE_5__ = __webpack_require__(/*! @angular/forms */ "./node_modules/@angular/forms/fesm5/forms.js");
/* harmony import */ var _services_transmission_service__WEBPACK_IMPORTED_MODULE_6__ = __webpack_require__(/*! ../../services/transmission.service */ "./src/app/services/transmission.service.ts");
/* harmony import */ var _services_alert_service__WEBPACK_IMPORTED_MODULE_7__ = __webpack_require__(/*! ../../services/alert.service */ "./src/app/services/alert.service.ts");
var __decorate = (undefined && undefined.__decorate) || function (decorators, target, key, desc) {
    var c = arguments.length, r = c < 3 ? target : desc === null ? desc = Object.getOwnPropertyDescriptor(target, key) : desc, d;
    if (typeof Reflect === "object" && typeof Reflect.decorate === "function") r = Reflect.decorate(decorators, target, key, desc);
    else for (var i = decorators.length - 1; i >= 0; i--) if (d = decorators[i]) r = (c < 3 ? d(r) : c > 3 ? d(target, key, r) : d(target, key)) || r;
    return c > 3 && r && Object.defineProperty(target, key, r), r;
};
var __metadata = (undefined && undefined.__metadata) || function (k, v) {
    if (typeof Reflect === "object" && typeof Reflect.metadata === "function") return Reflect.metadata(k, v);
};
var __param = (undefined && undefined.__param) || function (paramIndex, decorator) {
    return function (target, key) { decorator(target, key, paramIndex); }
};








var RegisterComponent = /** @class */ (function () {
    function RegisterComponent(router, transmissionService, winRef, appStore, userActions, nativeCommunicationService, fb, alertService) {
        var _this = this;
        this.router = router;
        this.transmissionService = transmissionService;
        this.winRef = winRef;
        this.appStore = appStore;
        this.userActions = userActions;
        this.nativeCommunicationService = nativeCommunicationService;
        this.fb = fb;
        this.alertService = alertService;
        this.nameFormControl = new _angular_forms__WEBPACK_IMPORTED_MODULE_5__["FormControl"]('', [_angular_forms__WEBPACK_IMPORTED_MODULE_5__["Validators"].required]);
        this.emailFormControl = new _angular_forms__WEBPACK_IMPORTED_MODULE_5__["FormControl"]('', [_angular_forms__WEBPACK_IMPORTED_MODULE_5__["Validators"].required]);
        this.passwordFormControl = new _angular_forms__WEBPACK_IMPORTED_MODULE_5__["FormControl"]('', [_angular_forms__WEBPACK_IMPORTED_MODULE_5__["Validators"].required,
            _angular_forms__WEBPACK_IMPORTED_MODULE_5__["Validators"].pattern('(?=.*[0-9])(?=.*[A-Z])(?=.*[a-z])(?=.*[!@#$%^*&?)§(\/])[A-Za-z0-9!@#$%^*&?)§(\/].{5,}')]);
        this.confirmPasswordFormControl = new _angular_forms__WEBPACK_IMPORTED_MODULE_5__["FormControl"]('', [_angular_forms__WEBPACK_IMPORTED_MODULE_5__["Validators"].required]);
        this.signupForm = new _angular_forms__WEBPACK_IMPORTED_MODULE_5__["FormGroup"]({
            name: this.nameFormControl,
            email: this.emailFormControl,
            password: this.passwordFormControl,
            confirmPassword: this.confirmPasswordFormControl
        });
        this.subscriptionExistingCred = this.alertService.getMessageExistingCredentials().subscribe(function (message) {
            _this.existingUser = message.user;
            _this.existingEmail = message.email;
            if (_this.existingUser && _this.existingEmail) {
                _this.wrongCred = true;
                _this.errorCredentialMessage = 'These username and email already exists';
            }
            else if (_this.existingUser) {
                _this.wrongCred = true;
                _this.errorCredentialMessage = 'This username already exists';
            }
            else if (_this.existingEmail) {
                _this.wrongCred = true;
                _this.errorCredentialMessage = 'This email already exists';
            }
            else {
                _this.wrongCred = true;
                _this.errorCredentialMessage = 'These credentials don\'t match';
            }
        });
    }
    RegisterComponent.prototype.requestDeviceInfos = function (isGuest) {
        this.transmissionService.registerName = this.nameFormControl.value;
        this.transmissionService.registerEmail = this.emailFormControl.value;
        this.transmissionService.registerPassword = this.passwordFormControl.value;
        this.transmissionService.registerIsGuest = isGuest;
        // console.log(this.registerEmail + ' ' + this.registerName + ' ' + this.registerPassword);
        var state = this.appStore.getState();
        var platform = state.platform;
        this.nativeCommunicationService.sendToNative('getDeviceInfos', 'getDeviceInfos');
        if (platform !== 'IOS' && platform !== 'Android') {
            var data = { deviceAddress: 'deviceAddress', deviceOS: 'deviceOS', deviceVersion: 'deviceVersion', deviceModel: 'deviceModel' };
            this.transmissionService.transmitODRegister(data);
        }
    };
    RegisterComponent.prototype.ngOnInit = function () {
        this.registerName = '';
        this.registerPassword = '';
        this.registerEmail = '';
        this.signupForm.get('confirmPassword').setValidators(this.matchingpassword('password'));
    };
    RegisterComponent.prototype.getPasswordErrorMessage = function () {
        return this.passwordFormControl.hasError('required') ? 'You must enter a value' :
            this.passwordFormControl.hasError('pattern') ?
                'Please use at least 6 characters with at least 1 upper case, 1 lower case, ' +
                    '1 number and 1 special character! Example: ! $ § % & / ( ) = ?' : '';
    };
    RegisterComponent.prototype.getConfirmPasswordErrorMessage = function () {
        return this.confirmPasswordFormControl.hasError('required') ? 'You must enter a value' :
            this.confirmPasswordFormControl.hasError('matchingpassword') ? 'The password is not the same' : 'The password is not the same';
    };
    RegisterComponent.prototype.getRequiredErrorMessage = function (field) {
        return this.signupForm.get(field).hasError('required') ? 'You must enter a value' : '';
    };
    RegisterComponent.prototype.matchingpassword = function (field) {
        return function (control) {
            var group = control.parent;
            var fieldToCompare = group.get(field);
            var notMatching;
            if (String(fieldToCompare.value) === String(control.value) && String(control.value) !== '') {
                notMatching = false;
            }
            else {
                notMatching = true;
            }
            return notMatching ? { 'matching': { value: control.value } } : null;
        };
    };
    RegisterComponent.prototype.getExistsErrorMessage = function () {
        return this.errorCredentialMessage;
    };
    RegisterComponent = __decorate([
        Object(_angular_core__WEBPACK_IMPORTED_MODULE_0__["Component"])({
            selector: 'app-register',
            template: __webpack_require__(/*! ./register.component.html */ "./src/app/components/register/register.component.html"),
            styles: [__webpack_require__(/*! ./register.component.css */ "./src/app/components/register/register.component.css")]
        }),
        Object(_angular_core__WEBPACK_IMPORTED_MODULE_0__["Injectable"])(),
        __param(3, Object(_angular_core__WEBPACK_IMPORTED_MODULE_0__["Inject"])('AppStore')),
        __metadata("design:paramtypes", [_angular_router__WEBPACK_IMPORTED_MODULE_1__["Router"],
            _services_transmission_service__WEBPACK_IMPORTED_MODULE_6__["TransmissionService"],
            _WindowRef__WEBPACK_IMPORTED_MODULE_2__["WindowRef"], Object, _store_actions_UserActions__WEBPACK_IMPORTED_MODULE_3__["UserActions"],
            _services_native_native_communication_service__WEBPACK_IMPORTED_MODULE_4__["NativeCommunicationService"],
            _angular_forms__WEBPACK_IMPORTED_MODULE_5__["FormBuilder"],
            _services_alert_service__WEBPACK_IMPORTED_MODULE_7__["AlertService"]])
    ], RegisterComponent);
    return RegisterComponent;
}());



/***/ }),

/***/ "./src/app/components/start-view/start-view.component.css":
/*!****************************************************************!*\
  !*** ./src/app/components/start-view/start-view.component.css ***!
  \****************************************************************/
/*! no static exports found */
/***/ (function(module, exports) {

module.exports = "@font-face {\n  font-family: 'OpenSans';\n  src: url('OpenSans-Regular.ttf');\n}\n\n.registerForm {\n  margin: 50px 0;\n}\n\n.btnWrapper{\n  height: 45%;\n  width: 100%;\n  position: absolute;\n  bottom: 0;\n}\n\n.btnLogin, .btnLoginGuest, .btnRegister, .btnLang{\n  border: none;\n  outline: none;\n  text-transform: uppercase;\n  font-size: 1em;\n  font-family: 'OpenSans', Helvetica, Arial, Sans-Serif;\n  display: block;\n  margin: 10px auto 0 auto;\n}\n\n.btnLogin{\n  background: #93272c;\n  color: #ffffff;\n  min-width: 180px;\n  padding: 0.8em;\n}\n\n.btnLoginGuest{\n  background: #93272c;\n  color: #ffffff;\n  min-width: 180px;\n  padding: 0.8em;\n}\n\n.btnRegister{\n  background: #ffffff;\n  border: 1px solid #93272c;\n  color: #93272c;\n  min-width: 180px;\n  padding: 0.5em;\n}\n\n.btnLang{\n  margin: 0;\n  padding: 0;\n  height: 50px;\n  position: absolute;\n  bottom: 20px;\n  right: 20px;\n}\n\n.btnLang img{\n  height: 50px;\n}\n\n.wrapper {\n  padding: 0;\n  margin: 0;\n  position: absolute;\n  height: 100%;\n  width: 100%;\n  background-image: url('Section1BG.png');\n  background-size: 100%;\n  background-position: center 0px;\n  background-repeat: no-repeat;\n}\n\n@media (max-height: 620px) {\n  .btnLogin, .btnLoginGuest, .btnRegister{\n    font-size: 0.8em;\n    min-width: 150px;\n  }\n\n  .btnLang, .btnLang img{\n    height: 40px;\n  }\n\n}\n\n@media (max-width: 320px) {\n  .wrapper {\n    background-image: url('320_480.jpg');\n  }\n}\n\n@media (min-width: 320px) and (max-width: 700px) {\n  @media (max-height: 1000px) {\n    .wrapper {\n      background-image: url('640_960.jpg');\n    }\n  }\n  @media (min-height: 1000px) {\n    .wrapper {\n      background-image: url('640_1136.png');\n    }\n  }\n}\n\n@media (min-width: 700px) and (max-width: 800px) {\n  .wrapper {\n    background-image: url('750_1334.png');\n  }\n}\n\n@media (min-width: 800px) and (max-width: 1000px) {\n  .wrapper {\n    background-image: url('828_1792.png');\n  }\n}\n\n@media (min-width: 1000px) and (max-width: 1200px) {\n  .wrapper {\n    background-image: url('1125_2436.png');\n  }\n}\n\n@media (min-width: 1200px) and (max-width: 1400px) {\n  @media (max-height: 2300px) {\n    .wrapper {\n      background-image: url('1242_2208.png');\n    }\n  }\n  @media (min-height: 2300px) {\n    .wrapper {\n      background-image: url('1242_2688.png');\n    }\n  }\n}\n\n@media (min-width: 1400px) and (max-width: 1600px) {\n  .wrapper {\n    background-image: url('1536_2048.png');\n  }\n}\n\n@media (min-width: 1600px) and (max-width: 1800px) {\n  @media (max-height: 2300px) {\n    .wrapper {\n      background-image: url('1668_2224.png');\n    }\n  }\n  @media (min-height: 2300px) {\n    .wrapper {\n      background-image: url('1668_2388.png');\n    }\n  }\n}\n\n@media (min-width: 1800px) {\n  .wrapper {\n    background-image: url('2048_2732.png');\n  }\n}\n\n\n/*# sourceMappingURL=data:application/json;base64,eyJ2ZXJzaW9uIjozLCJzb3VyY2VzIjpbInNyYy9hcHAvY29tcG9uZW50cy9zdGFydC12aWV3L3N0YXJ0LXZpZXcuY29tcG9uZW50LmNzcyJdLCJuYW1lcyI6W10sIm1hcHBpbmdzIjoiQUFBQTtFQUNFLHVCQUF1QjtFQUN2QixnQ0FBdUQ7QUFDekQ7O0FBRUE7RUFDRSxjQUFjO0FBQ2hCOztBQUVBO0VBQ0UsV0FBVztFQUNYLFdBQVc7RUFDWCxrQkFBa0I7RUFDbEIsU0FBUztBQUNYOztBQUVBO0VBQ0UsWUFBWTtFQUNaLGFBQWE7RUFDYix5QkFBeUI7RUFDekIsY0FBYztFQUNkLHFEQUFxRDtFQUNyRCxjQUFjO0VBQ2Qsd0JBQXdCO0FBQzFCOztBQUVBO0VBQ0UsbUJBQW1CO0VBQ25CLGNBQWM7RUFDZCxnQkFBZ0I7RUFDaEIsY0FBYztBQUNoQjs7QUFFQTtFQUNFLG1CQUFtQjtFQUNuQixjQUFjO0VBQ2QsZ0JBQWdCO0VBQ2hCLGNBQWM7QUFDaEI7O0FBRUE7RUFDRSxtQkFBbUI7RUFDbkIseUJBQXlCO0VBQ3pCLGNBQWM7RUFDZCxnQkFBZ0I7RUFDaEIsY0FBYztBQUNoQjs7QUFFQTtFQUNFLFNBQVM7RUFDVCxVQUFVO0VBQ1YsWUFBWTtFQUNaLGtCQUFrQjtFQUNsQixZQUFZO0VBQ1osV0FBVztBQUNiOztBQUVBO0VBQ0UsWUFBWTtBQUNkOztBQUVBO0VBQ0UsVUFBVTtFQUNWLFNBQVM7RUFDVCxrQkFBa0I7RUFDbEIsWUFBWTtFQUNaLFdBQVc7RUFDWCx1Q0FBb0U7RUFDcEUscUJBQXFCO0VBQ3JCLCtCQUErQjtFQUMvQiw0QkFBNEI7QUFDOUI7O0FBRUE7RUFDRTtJQUNFLGdCQUFnQjtJQUNoQixnQkFBZ0I7RUFDbEI7O0VBRUE7SUFDRSxZQUFZO0VBQ2Q7O0FBRUY7O0FBRUE7RUFDRTtJQUNFLG9DQUFxRTtFQUN2RTtBQUNGOztBQUVBO0VBQ0U7SUFDRTtNQUNFLG9DQUFxRTtJQUN2RTtFQUNGO0VBQ0E7SUFDRTtNQUNFLHFDQUFzRTtJQUN4RTtFQUNGO0FBQ0Y7O0FBRUE7RUFDRTtJQUNFLHFDQUFzRTtFQUN4RTtBQUNGOztBQUVBO0VBQ0U7SUFDRSxxQ0FBc0U7RUFDeEU7QUFDRjs7QUFFQTtFQUNFO0lBQ0Usc0NBQXVFO0VBQ3pFO0FBQ0Y7O0FBRUE7RUFDRTtJQUNFO01BQ0Usc0NBQXVFO0lBQ3pFO0VBQ0Y7RUFDQTtJQUNFO01BQ0Usc0NBQXVFO0lBQ3pFO0VBQ0Y7QUFDRjs7QUFFQTtFQUNFO0lBQ0Usc0NBQXVFO0VBQ3pFO0FBQ0Y7O0FBRUE7RUFDRTtJQUNFO01BQ0Usc0NBQXVFO0lBQ3pFO0VBQ0Y7RUFDQTtJQUNFO01BQ0Usc0NBQXVFO0lBQ3pFO0VBQ0Y7QUFDRjs7QUFFQTtFQUNFO0lBQ0Usc0NBQXVFO0VBQ3pFO0FBQ0YiLCJmaWxlIjoic3JjL2FwcC9jb21wb25lbnRzL3N0YXJ0LXZpZXcvc3RhcnQtdmlldy5jb21wb25lbnQuY3NzIiwic291cmNlc0NvbnRlbnQiOlsiQGZvbnQtZmFjZSB7XG4gIGZvbnQtZmFtaWx5OiAnT3BlblNhbnMnO1xuICBzcmM6IHVybChcImFzc2V0cy9mb250cy9PcGVuX1NhbnMvT3BlblNhbnMtUmVndWxhci50dGZcIik7XG59XG5cbi5yZWdpc3RlckZvcm0ge1xuICBtYXJnaW46IDUwcHggMDtcbn1cblxuLmJ0bldyYXBwZXJ7XG4gIGhlaWdodDogNDUlO1xuICB3aWR0aDogMTAwJTtcbiAgcG9zaXRpb246IGFic29sdXRlO1xuICBib3R0b206IDA7XG59XG5cbi5idG5Mb2dpbiwgLmJ0bkxvZ2luR3Vlc3QsIC5idG5SZWdpc3RlciwgLmJ0bkxhbmd7XG4gIGJvcmRlcjogbm9uZTtcbiAgb3V0bGluZTogbm9uZTtcbiAgdGV4dC10cmFuc2Zvcm06IHVwcGVyY2FzZTtcbiAgZm9udC1zaXplOiAxZW07XG4gIGZvbnQtZmFtaWx5OiAnT3BlblNhbnMnLCBIZWx2ZXRpY2EsIEFyaWFsLCBTYW5zLVNlcmlmO1xuICBkaXNwbGF5OiBibG9jaztcbiAgbWFyZ2luOiAxMHB4IGF1dG8gMCBhdXRvO1xufVxuXG4uYnRuTG9naW57XG4gIGJhY2tncm91bmQ6ICM5MzI3MmM7XG4gIGNvbG9yOiAjZmZmZmZmO1xuICBtaW4td2lkdGg6IDE4MHB4O1xuICBwYWRkaW5nOiAwLjhlbTtcbn1cblxuLmJ0bkxvZ2luR3Vlc3R7XG4gIGJhY2tncm91bmQ6ICM5MzI3MmM7XG4gIGNvbG9yOiAjZmZmZmZmO1xuICBtaW4td2lkdGg6IDE4MHB4O1xuICBwYWRkaW5nOiAwLjhlbTtcbn1cblxuLmJ0blJlZ2lzdGVye1xuICBiYWNrZ3JvdW5kOiAjZmZmZmZmO1xuICBib3JkZXI6IDFweCBzb2xpZCAjOTMyNzJjO1xuICBjb2xvcjogIzkzMjcyYztcbiAgbWluLXdpZHRoOiAxODBweDtcbiAgcGFkZGluZzogMC41ZW07XG59XG5cbi5idG5MYW5ne1xuICBtYXJnaW46IDA7XG4gIHBhZGRpbmc6IDA7XG4gIGhlaWdodDogNTBweDtcbiAgcG9zaXRpb246IGFic29sdXRlO1xuICBib3R0b206IDIwcHg7XG4gIHJpZ2h0OiAyMHB4O1xufVxuXG4uYnRuTGFuZyBpbWd7XG4gIGhlaWdodDogNTBweDtcbn1cblxuLndyYXBwZXIge1xuICBwYWRkaW5nOiAwO1xuICBtYXJnaW46IDA7XG4gIHBvc2l0aW9uOiBhYnNvbHV0ZTtcbiAgaGVpZ2h0OiAxMDAlO1xuICB3aWR0aDogMTAwJTtcbiAgYmFja2dyb3VuZC1pbWFnZTogdXJsKFwiLi4vLi4vLi4vYXNzZXRzL2ltZy93b29kY3V0cy9TZWN0aW9uMUJHLnBuZ1wiKTtcbiAgYmFja2dyb3VuZC1zaXplOiAxMDAlO1xuICBiYWNrZ3JvdW5kLXBvc2l0aW9uOiBjZW50ZXIgMHB4O1xuICBiYWNrZ3JvdW5kLXJlcGVhdDogbm8tcmVwZWF0O1xufVxuXG5AbWVkaWEgKG1heC1oZWlnaHQ6IDYyMHB4KSB7XG4gIC5idG5Mb2dpbiwgLmJ0bkxvZ2luR3Vlc3QsIC5idG5SZWdpc3RlcntcbiAgICBmb250LXNpemU6IDAuOGVtO1xuICAgIG1pbi13aWR0aDogMTUwcHg7XG4gIH1cblxuICAuYnRuTGFuZywgLmJ0bkxhbmcgaW1ne1xuICAgIGhlaWdodDogNDBweDtcbiAgfVxuXG59XG5cbkBtZWRpYSAobWF4LXdpZHRoOiAzMjBweCkge1xuICAud3JhcHBlciB7XG4gICAgYmFja2dyb3VuZC1pbWFnZTogdXJsKFwiLi4vLi4vLi4vYXNzZXRzL2ltZy9sYXVuY2hTY3JlZW4vMzIwXzQ4MC5qcGdcIik7XG4gIH1cbn1cblxuQG1lZGlhIChtaW4td2lkdGg6IDMyMHB4KSBhbmQgKG1heC13aWR0aDogNzAwcHgpIHtcbiAgQG1lZGlhIChtYXgtaGVpZ2h0OiAxMDAwcHgpIHtcbiAgICAud3JhcHBlciB7XG4gICAgICBiYWNrZ3JvdW5kLWltYWdlOiB1cmwoXCIuLi8uLi8uLi9hc3NldHMvaW1nL2xhdW5jaFNjcmVlbi82NDBfOTYwLmpwZ1wiKTtcbiAgICB9XG4gIH1cbiAgQG1lZGlhIChtaW4taGVpZ2h0OiAxMDAwcHgpIHtcbiAgICAud3JhcHBlciB7XG4gICAgICBiYWNrZ3JvdW5kLWltYWdlOiB1cmwoXCIuLi8uLi8uLi9hc3NldHMvaW1nL2xhdW5jaFNjcmVlbi82NDBfMTEzNi5wbmdcIik7XG4gICAgfVxuICB9XG59XG5cbkBtZWRpYSAobWluLXdpZHRoOiA3MDBweCkgYW5kIChtYXgtd2lkdGg6IDgwMHB4KSB7XG4gIC53cmFwcGVyIHtcbiAgICBiYWNrZ3JvdW5kLWltYWdlOiB1cmwoXCIuLi8uLi8uLi9hc3NldHMvaW1nL2xhdW5jaFNjcmVlbi83NTBfMTMzNC5wbmdcIik7XG4gIH1cbn1cblxuQG1lZGlhIChtaW4td2lkdGg6IDgwMHB4KSBhbmQgKG1heC13aWR0aDogMTAwMHB4KSB7XG4gIC53cmFwcGVyIHtcbiAgICBiYWNrZ3JvdW5kLWltYWdlOiB1cmwoXCIuLi8uLi8uLi9hc3NldHMvaW1nL2xhdW5jaFNjcmVlbi84MjhfMTc5Mi5wbmdcIik7XG4gIH1cbn1cblxuQG1lZGlhIChtaW4td2lkdGg6IDEwMDBweCkgYW5kIChtYXgtd2lkdGg6IDEyMDBweCkge1xuICAud3JhcHBlciB7XG4gICAgYmFja2dyb3VuZC1pbWFnZTogdXJsKFwiLi4vLi4vLi4vYXNzZXRzL2ltZy9sYXVuY2hTY3JlZW4vMTEyNV8yNDM2LnBuZ1wiKTtcbiAgfVxufVxuXG5AbWVkaWEgKG1pbi13aWR0aDogMTIwMHB4KSBhbmQgKG1heC13aWR0aDogMTQwMHB4KSB7XG4gIEBtZWRpYSAobWF4LWhlaWdodDogMjMwMHB4KSB7XG4gICAgLndyYXBwZXIge1xuICAgICAgYmFja2dyb3VuZC1pbWFnZTogdXJsKFwiLi4vLi4vLi4vYXNzZXRzL2ltZy9sYXVuY2hTY3JlZW4vMTI0Ml8yMjA4LnBuZ1wiKTtcbiAgICB9XG4gIH1cbiAgQG1lZGlhIChtaW4taGVpZ2h0OiAyMzAwcHgpIHtcbiAgICAud3JhcHBlciB7XG4gICAgICBiYWNrZ3JvdW5kLWltYWdlOiB1cmwoXCIuLi8uLi8uLi9hc3NldHMvaW1nL2xhdW5jaFNjcmVlbi8xMjQyXzI2ODgucG5nXCIpO1xuICAgIH1cbiAgfVxufVxuXG5AbWVkaWEgKG1pbi13aWR0aDogMTQwMHB4KSBhbmQgKG1heC13aWR0aDogMTYwMHB4KSB7XG4gIC53cmFwcGVyIHtcbiAgICBiYWNrZ3JvdW5kLWltYWdlOiB1cmwoXCIuLi8uLi8uLi9hc3NldHMvaW1nL2xhdW5jaFNjcmVlbi8xNTM2XzIwNDgucG5nXCIpO1xuICB9XG59XG5cbkBtZWRpYSAobWluLXdpZHRoOiAxNjAwcHgpIGFuZCAobWF4LXdpZHRoOiAxODAwcHgpIHtcbiAgQG1lZGlhIChtYXgtaGVpZ2h0OiAyMzAwcHgpIHtcbiAgICAud3JhcHBlciB7XG4gICAgICBiYWNrZ3JvdW5kLWltYWdlOiB1cmwoXCIuLi8uLi8uLi9hc3NldHMvaW1nL2xhdW5jaFNjcmVlbi8xNjY4XzIyMjQucG5nXCIpO1xuICAgIH1cbiAgfVxuICBAbWVkaWEgKG1pbi1oZWlnaHQ6IDIzMDBweCkge1xuICAgIC53cmFwcGVyIHtcbiAgICAgIGJhY2tncm91bmQtaW1hZ2U6IHVybChcIi4uLy4uLy4uL2Fzc2V0cy9pbWcvbGF1bmNoU2NyZWVuLzE2NjhfMjM4OC5wbmdcIik7XG4gICAgfVxuICB9XG59XG5cbkBtZWRpYSAobWluLXdpZHRoOiAxODAwcHgpIHtcbiAgLndyYXBwZXIge1xuICAgIGJhY2tncm91bmQtaW1hZ2U6IHVybChcIi4uLy4uLy4uL2Fzc2V0cy9pbWcvbGF1bmNoU2NyZWVuLzIwNDhfMjczMi5wbmdcIik7XG4gIH1cbn1cblxuIl19 */"

/***/ }),

/***/ "./src/app/components/start-view/start-view.component.html":
/*!*****************************************************************!*\
  !*** ./src/app/components/start-view/start-view.component.html ***!
  \*****************************************************************/
/*! no static exports found */
/***/ (function(module, exports) {

module.exports = "<div class=\"wrapper\">\n  <!--<h2>{{ 'start.welcomeMessage' | translate }}</h2>\n  <h1>{{ 'start.name' | translate }}</h1>-->\n  <div class=\"btnWrapper\">\n    <button class=\"btnLogin\" (click)=\"forwardToLogin()\">{{ 'start.loginButton' | translate }}</button>\n    <button class=\"btnLoginGuest\" (click)=\"loginAsGuest()\">{{ 'start.registerGuestButton' | translate }}</button>\n    <button class=\"btnRegister\" (click)=\"forwardToRegister()\">{{ 'start.registerButton' | translate }}</button>\n    <button class=\"btnLang\" (click)=\"forwardToLanguage()\"><img src=\"./assets/img/deen.png\" /></button>\n  </div>\n</div>\n"

/***/ }),

/***/ "./src/app/components/start-view/start-view.component.ts":
/*!***************************************************************!*\
  !*** ./src/app/components/start-view/start-view.component.ts ***!
  \***************************************************************/
/*! exports provided: StartViewComponent */
/***/ (function(module, __webpack_exports__, __webpack_require__) {

"use strict";
__webpack_require__.r(__webpack_exports__);
/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, "StartViewComponent", function() { return StartViewComponent; });
/* harmony import */ var _angular_core__WEBPACK_IMPORTED_MODULE_0__ = __webpack_require__(/*! @angular/core */ "./node_modules/@angular/core/fesm5/core.js");
/* harmony import */ var _angular_router__WEBPACK_IMPORTED_MODULE_1__ = __webpack_require__(/*! @angular/router */ "./node_modules/@angular/router/fesm5/router.js");
/* harmony import */ var _WindowRef__WEBPACK_IMPORTED_MODULE_2__ = __webpack_require__(/*! ../../WindowRef */ "./src/app/WindowRef.ts");
/* harmony import */ var _store_actions_UserActions__WEBPACK_IMPORTED_MODULE_3__ = __webpack_require__(/*! ../../store/actions/UserActions */ "./src/app/store/actions/UserActions.ts");
/* harmony import */ var _services_native_native_communication_service__WEBPACK_IMPORTED_MODULE_4__ = __webpack_require__(/*! ../../services/native/native-communication.service */ "./src/app/services/native/native-communication.service.ts");
/* harmony import */ var _services_transmission_service__WEBPACK_IMPORTED_MODULE_5__ = __webpack_require__(/*! ../../services/transmission.service */ "./src/app/services/transmission.service.ts");
var __decorate = (undefined && undefined.__decorate) || function (decorators, target, key, desc) {
    var c = arguments.length, r = c < 3 ? target : desc === null ? desc = Object.getOwnPropertyDescriptor(target, key) : desc, d;
    if (typeof Reflect === "object" && typeof Reflect.decorate === "function") r = Reflect.decorate(decorators, target, key, desc);
    else for (var i = decorators.length - 1; i >= 0; i--) if (d = decorators[i]) r = (c < 3 ? d(r) : c > 3 ? d(target, key, r) : d(target, key)) || r;
    return c > 3 && r && Object.defineProperty(target, key, r), r;
};
var __metadata = (undefined && undefined.__metadata) || function (k, v) {
    if (typeof Reflect === "object" && typeof Reflect.metadata === "function") return Reflect.metadata(k, v);
};
var __param = (undefined && undefined.__param) || function (paramIndex, decorator) {
    return function (target, key) { decorator(target, key, paramIndex); }
};






var StartViewComponent = /** @class */ (function () {
    function StartViewComponent(router, transmissionService, winRef, appStore, userActions, nativeCommunicationService) {
        this.router = router;
        this.transmissionService = transmissionService;
        this.winRef = winRef;
        this.appStore = appStore;
        this.userActions = userActions;
        this.nativeCommunicationService = nativeCommunicationService;
    }
    StartViewComponent.prototype.ngOnInit = function () {
    };
    StartViewComponent.prototype.forwardToRegister = function () {
        this.router.navigate(['/register']);
    };
    StartViewComponent.prototype.forwardToLogin = function () {
        this.router.navigate(['/login']);
    };
    StartViewComponent.prototype.forwardToLanguage = function () {
        this.router.navigate(['/changeLanguageStart']);
    };
    StartViewComponent.prototype.loginAsGuest = function () {
        this.transmissionService.registerIsGuest = true;
        var state = this.appStore.getState();
        var platform = state.platform;
        this.nativeCommunicationService.sendToNative('getDeviceInfos', 'getDeviceInfos');
        if (platform !== 'IOS' && platform !== 'Android') {
            var data = { deviceAddress: 'deviceAddress', deviceOS: 'deviceOS', deviceVersion: 'deviceVersion', deviceModel: 'deviceModel' };
            this.transmissionService.transmitODRegister(data);
        }
    };
    StartViewComponent = __decorate([
        Object(_angular_core__WEBPACK_IMPORTED_MODULE_0__["Component"])({
            selector: 'app-start-view',
            template: __webpack_require__(/*! ./start-view.component.html */ "./src/app/components/start-view/start-view.component.html"),
            styles: [__webpack_require__(/*! ./start-view.component.css */ "./src/app/components/start-view/start-view.component.css")]
        }),
        Object(_angular_core__WEBPACK_IMPORTED_MODULE_0__["Injectable"])(),
        __param(3, Object(_angular_core__WEBPACK_IMPORTED_MODULE_0__["Inject"])('AppStore')),
        __metadata("design:paramtypes", [_angular_router__WEBPACK_IMPORTED_MODULE_1__["Router"],
            _services_transmission_service__WEBPACK_IMPORTED_MODULE_5__["TransmissionService"],
            _WindowRef__WEBPACK_IMPORTED_MODULE_2__["WindowRef"], Object, _store_actions_UserActions__WEBPACK_IMPORTED_MODULE_3__["UserActions"],
            _services_native_native_communication_service__WEBPACK_IMPORTED_MODULE_4__["NativeCommunicationService"]])
    ], StartViewComponent);
    return StartViewComponent;
}());



/***/ }),

/***/ "./src/app/components/wappen/wappen.component.css":
/*!********************************************************!*\
  !*** ./src/app/components/wappen/wappen.component.css ***!
  \********************************************************/
/*! no static exports found */
/***/ (function(module, exports) {

module.exports = "@font-face {\n    font-family: 'Vollkorn';\n    src: url('Vollkorn-Bold.ttf');\n}\n\n@font-face {\n    font-family: 'OpenSans';\n    src: url('OpenSans-Regular.ttf');\n    /*font-weight: bold;*/\n}\n\nh1, h2, h3, h4, h5, h6{\n    font-family: 'Vollkorn', Times, serif;\n}\n\n.wappenHelp p,\n.wappenSettings p{\n    font-family: 'OpenSans', Helvetica, Arial, Sans-Serif;\n    margin: 0;\n}\n\n.toolbar button{\n    border: none;\n    outline: none;\n    height: 50px;\n    width: 50px;\n    margin: 20px 20px 0px 20px; \n    background: #ffffff;\n}\n\n.helpbutton mat-icon{\n    border-radius: 25px;\n    color:#494949;\n    font-size: 60px;\n    margin: -5px 0 0 -35px;\n}\n\n.toolbar .closebutton{\n    float: right; \n    background: #494949;\n    color:#ffffff;\n}\n\n.toolbar .closebutton mat-icon{\n    margin: 4px 0 0 -15px;\n    font-size: 40px;\n}\n\nh1{\n    text-align: center;\n    font-size: 1.5em;\n    margin-top: 0; \n}\n\n.wappenSettingsNav{\n    position: fixed;\n    bottom: 0;\n    z-index: 5;\n    width: 100%;\n}\n\n.wappenSettingsNav ul{\n    list-style-type: none;\n    margin: 0;\n    padding: 0;\n    height: 80px;\n    border-top: 15px solid #494949;\n    background: #494949;\n}\n\n.wappenSettingsNav ul li{\n    background: #fff;\n    float: left;\n    width: 19.36%; \n    height: 100%;\n}\n\n.wappenSettingsNav ul li.selected{\n    background: #494949;\n}\n\n.wappenSettingsNav_weapon,\n.wappenSettingsNav_emblem,\n.wappenSettingsNav_helmet,\n.wappenSettingsNav_color {\n    margin-left: 0.8%;\n}\n\n.wappenSettingsNav ul li button{\n    display: block;\n    margin: 5px auto;\n    width: 70px; \n    height: 70px;\n    border: none;\n    outline: none;\n    background-size: 620px 136px;\n}\n\n.wappenSettingsNav_shield button{ \n    background: url('WappenIcons.png') -92px 0px;\n}\n\n.wappenSettingsNav_emblem button{ \n    background: url('WappenIcons.png') -185px 0px;\n}\n\n.wappenSettingsNav_helmet button{ \n    background: url('WappenIcons.png') -275px 0px;\n}\n\n.wappenSettingsNav_weapon button{ \n    background: url('WappenIcons.png') -365px 0px;\n}\n\n.wappenSettingsNav_color button{ \n    background: url('WappenIcons.png') -460px 0px;\n}\n\n.wappenSettingsNav ul li.selected button{ \n    background-position-y: -70px;\n}\n\n.wappenHelpOut,\n.wappenSettingsNavOut{ \n    height: 100%;\n    width: 100%;\n    position: absolute;\n    top: 0;\n    z-index: 4;\n}\n\n.wappenHelpOut{\n    z-index: 6;\n}\n\n.wappen{\n    position: relative;\n    width: 320px;\n    margin: 12% auto;\n}\n\n.wappen img{\n    position: absolute;\n    left: 50%;\n    height: auto;\n    \n}\n\n.wappen_weapon img{\n    z-index: 1;\n    top: -10px; \n    width: 116%;\n    margin-left: -58%; \n}\n\n.wappen_helmet img{\n    z-index: 2;\n    top: -50px;\n    width: 72%;\n    margin-left: -36%; \n}\n\n.wappen_shield img{\n    z-index: 3;\n    top: 100px;\n    width: 86%;\n    margin-left: -43%; \n}\n\n.wappen_emblem img{\n    z-index: 4;\n    top: 140px;\n    width: 60%;\n    margin-left: -30%; \n}\n\n.wappenSettings_shield .done p:after {\n    content: \" Unlocked from beginning.\";\n    color: #047f0d;\n }\n\n.wappenSettings_emblem .done p:after,\n.wappenSettings_helmet .done p:after,\n.wappenSettings_weapon .done p:after {\n    content: \" Done!\";\n    color: #047f0d;\n }\n\n.hidden{\n    display: none;\n}\n\n.wappenSettings{\n    border: 3px solid #494949;\n    background: #ffffff;\n    position: fixed;\n    bottom: 105px;\n    z-index: 5;\n    width: 90%;\n    margin: 0 4%;\n}\n\n.wappenHelp{\n    border: 3px solid #494949;\n    background: #ffffff;\n    position: fixed;\n    z-index: 7;\n    width: 90%;\n    margin: 0 4%;\n}\n\n.wappenHelp h2,\n.wappenSettings_color p,\n.wappenSettings h2{\n    margin: 20px 0px 0px 20px;\n}\n\n.wappenHelp mat-icon,\n.wappenSettings mat-icon{\n    margin: 20px 20px 0px 0px;\n}\n\n.wappenHelp p{\n    margin: 20px;\n}\n\n.wappenHelp h2,\n.wappenSettings h2{\n    display: inline-block;\n}\n\n.wappenHelp mat-icon,\n.wappenSettings mat-icon{\n    float: right;\n    cursor: pointer;\n    font-size: 35px;\n    margin-top: 15px; \n}\n\n.wappenSettings ul{\n    list-style-type: none;\n    margin: 20px;\n    padding: 0;\n}\n\n.wappenSettings_color ul{\n    list-style-type: none;\n    margin: 10px 20px;\n    padding: 0;\n}\n\n.wappenSettings .options{ \n    height: 85px;\n}\n\n.wappenSettings .tasks{ \n    height: 2em;\n}\n\n.wappenSettings .primary,\n.wappenSettings .secondary{ \n    height: 60px;\n}\n\n.wappenSettings .options li{\n    float: left;\n    width: 25%; \n    height: 100%;\n}\n\n.wappenSettings .primary li,\n.wappenSettings .secondary li{\n    float: left;\n    width: 20%; \n    height: 100%;\n    border-bottom: 3px solid #ffffff;\n}\n\n.wappenSettings .options .used{\n    border-bottom: 3px solid #dddddd;\n}\n\n.wappenSettings .primary .selected,\n.wappenSettings .secondary .selected,\n.wappenSettings .options .selected{\n    border-bottom: 3px solid #494949;\n}\n\n.wappenSettings ul li button{\n    display: block;\n    margin: 5px auto;\n    width: 70px; \n    height: 70px;\n    border: none;\n    outline: none;   \n}\n\n.wappenSettings_color ul li button{\n    border-radius: 50px;\n    width: 45px; \n    height: 45px;\n}\n\n.wappenSettings_shield .options .Shield1 button{ \n    background: url('Shield1.png');\n    background-size: 70px 70px;\n}\n\n.wappenSettings_shield .options .Shield2 button{ \n    background: url('Shield2.png');\n    background-size: 70px 70px;\n}\n\n.wappenSettings_shield .options .Shield3 button { \n    background: url('Shield3.png');\n    background-size: 70px 70px;\n}\n\n.wappenSettings_shield .options .Shield4 button{ \n    background: url('Shield4.png');\n    background-size: 70px 70px;\n}\n\n.wappenSettings_emblem .options .Emblem1 button{ \n    background: url('Emblem1.png');\n    background-size: 70px 70px;\n}\n\n.wappenSettings_emblem .options .Emblem2 button{ \n    background: url('Emblem2.png');\n    background-size: 70px 70px;\n}\n\n.wappenSettings_emblem .options .Emblem3 button { \n    background: url('Emblem3.png');\n    background-size: 70px 70px;\n}\n\n.wappenSettings_emblem .options .Emblem4 button{ \n    background: url('Emblem4.png');\n    background-size: 70px 70px;\n}\n\n.wappenSettings_emblem .options .Emblem5 button { \n    background: url('Emblem5.png');\n    background-size: 70px 70px;\n}\n\n.wappenSettings_emblem .options .Emblem6 button{ \n    background: url('Emblem6.png');\n    background-size: 70px 70px;\n}\n\n.wappenSettings_helmet .options .Helmet1 button{ \n    background: url('Helmet1.png');\n    background-size: 70px 70px;\n}\n\n.wappenSettings_helmet .options .Helmet2 button{ \n    background: url('Helmet2.png');\n    background-size: 70px 70px;\n}\n\n.wappenSettings_helmet .options .Helmet3 button { \n    background: url('Helmet3.png');\n    background-size: 70px 70px;\n}\n\n.wappenSettings_helmet .options .Helmet4 button{ \n    background: url('Helmet4.png');\n    background-size: 70px 70px;\n}\n\n.wappenSettings_weapon .options .Mantle1 button{ \n    background: url('Mantle1.png');\n    background-size: 70px 70px;\n}\n\n.wappenSettings_weapon .options .Mantle2 button{ \n    background: url('Mantle2.png');\n    background-size: 70px 70px;\n}\n\n.wappenSettings_weapon .options .Mantle3 button { \n    background: url('Mantle3.png');\n    background-size: 70px 70px;\n}\n\n.wappenSettings_weapon .options .Mantle4 button{ \n    background: url('Mantle4.png');\n    background-size: 70px 70px;\n}\n\n.wappenSettings_color .Color1 button{\n    background: #ce2828;\n}\n\n.wappenSettings_color .Color2 button{\n    background: #526ba0;\n}\n\n.wappenSettings_color .Color3 button{\n    background: #047f0d;\n}\n\n.wappenSettings_color .Color4 button{\n    background: #c38918;\n}\n\n.wappenSettings_color .Color5 button{\n    background: #a2a2a2;\n}\n\n.wappenSettings .options .locked{ \n    opacity: 0.3;\n}\n\n.wappenSettings .options .unlocked{ \n    opacity: 0.6;\n}\n\n.wappen .Color1{\n    -webkit-filter: invert(88%) sepia(88%) saturate(6586%) hue-rotate(290deg) brightness(101%) contrast(100%);\n            filter: invert(88%) sepia(88%) saturate(6586%) hue-rotate(290deg) brightness(101%) contrast(100%);\n}\n\n.wappen .Color1dark{\n    -webkit-filter: invert(13%) sepia(45%) saturate(4523%) hue-rotate(349deg) brightness(93%) contrast(119%);\n            filter: invert(13%) sepia(45%) saturate(4523%) hue-rotate(349deg) brightness(93%) contrast(119%);\n}\n\n.wappen .Color2{\n    -webkit-filter: invert(76%) sepia(43%) saturate(5712%) hue-rotate(195deg) brightness(103%) contrast(86%);\n            filter: invert(76%) sepia(43%) saturate(5712%) hue-rotate(195deg) brightness(103%) contrast(86%);\n}\n\n.wappen .Color2dark{\n    -webkit-filter: invert(15%) sepia(11%) saturate(1923%) hue-rotate(182deg) brightness(91%) contrast(94%);\n            filter: invert(15%) sepia(11%) saturate(1923%) hue-rotate(182deg) brightness(91%) contrast(94%);\n}\n\n.wappen .Color3{\n    -webkit-filter: invert(92%) sepia(12%) saturate(1432%) hue-rotate(60deg) brightness(93%) contrast(93%);\n            filter: invert(92%) sepia(12%) saturate(1432%) hue-rotate(60deg) brightness(93%) contrast(93%);\n}\n\n.wappen .Color3dark{\n    -webkit-filter: invert(12%) sepia(30%) saturate(2461%) hue-rotate(92deg) brightness(103%) contrast(104%);\n            filter: invert(12%) sepia(30%) saturate(2461%) hue-rotate(92deg) brightness(103%) contrast(104%);\n}\n\n.wappen .Color4{\n    -webkit-filter: invert(78%) sepia(95%) saturate(2356%) hue-rotate(317deg) brightness(103%) contrast(107%);\n            filter: invert(78%) sepia(95%) saturate(2356%) hue-rotate(317deg) brightness(103%) contrast(107%);\n}\n\n.wappen .Color4dark{\n    -webkit-filter: invert(34%) sepia(14%) saturate(7130%) hue-rotate(28deg) brightness(93%) contrast(102%);\n            filter: invert(34%) sepia(14%) saturate(7130%) hue-rotate(28deg) brightness(93%) contrast(102%);\n}\n\n.wappen .Color5{\n    -webkit-filter: invert(75%) sepia(0%) saturate(0%) hue-rotate(161deg) brightness(88%) contrast(86%);\n            filter: invert(75%) sepia(0%) saturate(0%) hue-rotate(161deg) brightness(88%) contrast(86%);\n}\n\n.wappen .Color5dark{\n    -webkit-filter: invert(20%) sepia(0%) saturate(55%) hue-rotate(239deg) brightness(104%) contrast(91%);\n            filter: invert(20%) sepia(0%) saturate(55%) hue-rotate(239deg) brightness(104%) contrast(91%);\n}\n\n/* Scroll for emblem buttons */\n\n.wappenSettings_emblem .overflowWrapper{\n    overflow-x: scroll;\n    margin: 0 20px;\n}\n\n.wappenSettings_emblem .options{\n    margin: 10px 0px 8px 0px;\n    width: 140%;\n}\n\n.wappenSettings_emblem .options li{\n    float: left;\n    width: 16.6%; \n    height: 100%;\n}\n\n.tasks .done p:before {\n    background-image: url('lock_open-24px.svg');\n    background-size: 16px 16px;\n    display: inline-block;\n    width: 18px; \n    height: 15px;\n    content:\"\";\n }\n\n.tasks .locked p:before {\n    background-image: url('lock-24px.svg');\n    background-size: 16px 16px;\n    display: inline-block;\n    width: 18px; \n    height: 15px;\n    content:\"\";\n }\n\n.options .locked + .locker{\n    background-image: url('lock-24px.svg');\n    background-size: 20px 20px;\n    opacity: 1;\n    width: 20px; \n    height: 20px;\n    float: right;\n    margin-top: -25px;\n }\n\ndiv::-webkit-scrollbar {\n    height: 2px;\n}\n\ndiv::-webkit-scrollbar-thumb {\n    border-radius: 25px;\n    background: #CCC;\n}\n\n@media (min-height: 750px) {\n    h1{\n        text-align: center;\n        font-size: 1.8em;\n        margin: 10%;\n    }\n}\n\n@media (max-height: 650px) {\n    h1{\n        text-align: center;\n        font-size: 1.2em;\n    }\n\n    .wappenHelp p,\n    .wappenSettings p{\n        font-size: 0.9em;\n    }\n\n    .wappen{\n        width: 240px;  \n        margin: 15% auto;\n    }\n\n    .wappen_emblem img{\n        top:92px;\n    }\n\n    .wappen_shield img{\n        top: 62px;\n    }\n\n    .wappen_weapon img{\n        top: -22px;\n    }\n}\n/*# sourceMappingURL=data:application/json;base64,eyJ2ZXJzaW9uIjozLCJzb3VyY2VzIjpbInNyYy9hcHAvY29tcG9uZW50cy93YXBwZW4vd2FwcGVuLmNvbXBvbmVudC5jc3MiXSwibmFtZXMiOltdLCJtYXBwaW5ncyI6IkFBQUE7SUFDSSx1QkFBdUI7SUFDdkIsNkJBQTREO0FBQ2hFOztBQUVBO0lBQ0ksdUJBQXVCO0lBQ3ZCLGdDQUFnRTtJQUNoRSxxQkFBcUI7QUFDekI7O0FBRUE7SUFDSSxxQ0FBcUM7QUFDekM7O0FBRUE7O0lBRUkscURBQXFEO0lBQ3JELFNBQVM7QUFDYjs7QUFFQTtJQUNJLFlBQVk7SUFDWixhQUFhO0lBQ2IsWUFBWTtJQUNaLFdBQVc7SUFDWCwwQkFBMEI7SUFDMUIsbUJBQW1CO0FBQ3ZCOztBQUVBO0lBQ0ksbUJBQW1CO0lBQ25CLGFBQWE7SUFDYixlQUFlO0lBQ2Ysc0JBQXNCO0FBQzFCOztBQUVBO0lBQ0ksWUFBWTtJQUNaLG1CQUFtQjtJQUNuQixhQUFhO0FBQ2pCOztBQUVBO0lBQ0kscUJBQXFCO0lBQ3JCLGVBQWU7QUFDbkI7O0FBRUE7SUFDSSxrQkFBa0I7SUFDbEIsZ0JBQWdCO0lBQ2hCLGFBQWE7QUFDakI7O0FBRUE7SUFDSSxlQUFlO0lBQ2YsU0FBUztJQUNULFVBQVU7SUFDVixXQUFXO0FBQ2Y7O0FBRUE7SUFDSSxxQkFBcUI7SUFDckIsU0FBUztJQUNULFVBQVU7SUFDVixZQUFZO0lBQ1osOEJBQThCO0lBQzlCLG1CQUFtQjtBQUN2Qjs7QUFFQTtJQUNJLGdCQUFnQjtJQUNoQixXQUFXO0lBQ1gsYUFBYTtJQUNiLFlBQVk7QUFDaEI7O0FBRUE7SUFDSSxtQkFBbUI7QUFDdkI7O0FBRUE7Ozs7SUFJSSxpQkFBaUI7QUFDckI7O0FBRUE7SUFDSSxjQUFjO0lBQ2QsZ0JBQWdCO0lBQ2hCLFdBQVc7SUFDWCxZQUFZO0lBQ1osWUFBWTtJQUNaLGFBQWE7SUFDYiw0QkFBNEI7QUFDaEM7O0FBRUE7SUFDSSw0Q0FBa0U7QUFDdEU7O0FBRUE7SUFDSSw2Q0FBbUU7QUFDdkU7O0FBRUE7SUFDSSw2Q0FBbUU7QUFDdkU7O0FBRUE7SUFDSSw2Q0FBbUU7QUFDdkU7O0FBRUE7SUFDSSw2Q0FBbUU7QUFDdkU7O0FBRUE7SUFDSSw0QkFBNEI7QUFDaEM7O0FBRUE7O0lBRUksWUFBWTtJQUNaLFdBQVc7SUFDWCxrQkFBa0I7SUFDbEIsTUFBTTtJQUNOLFVBQVU7QUFDZDs7QUFFQTtJQUNJLFVBQVU7QUFDZDs7QUFFQTtJQUNJLGtCQUFrQjtJQUNsQixZQUFZO0lBQ1osZ0JBQWdCO0FBQ3BCOztBQUVBO0lBQ0ksa0JBQWtCO0lBQ2xCLFNBQVM7SUFDVCxZQUFZOztBQUVoQjs7QUFFQTtJQUNJLFVBQVU7SUFDVixVQUFVO0lBQ1YsV0FBVztJQUNYLGlCQUFpQjtBQUNyQjs7QUFFQTtJQUNJLFVBQVU7SUFDVixVQUFVO0lBQ1YsVUFBVTtJQUNWLGlCQUFpQjtBQUNyQjs7QUFFQTtJQUNJLFVBQVU7SUFDVixVQUFVO0lBQ1YsVUFBVTtJQUNWLGlCQUFpQjtBQUNyQjs7QUFDQTtJQUNJLFVBQVU7SUFDVixVQUFVO0lBQ1YsVUFBVTtJQUNWLGlCQUFpQjtBQUNyQjs7QUFFQTtJQUNJLG9DQUFvQztJQUNwQyxjQUFjO0NBQ2pCOztBQUVEOzs7SUFHSSxpQkFBaUI7SUFDakIsY0FBYztDQUNqQjs7QUFFRDtJQUNJLGFBQWE7QUFDakI7O0FBRUE7SUFDSSx5QkFBeUI7SUFDekIsbUJBQW1CO0lBQ25CLGVBQWU7SUFDZixhQUFhO0lBQ2IsVUFBVTtJQUNWLFVBQVU7SUFDVixZQUFZO0FBQ2hCOztBQUVBO0lBQ0kseUJBQXlCO0lBQ3pCLG1CQUFtQjtJQUNuQixlQUFlO0lBQ2YsVUFBVTtJQUNWLFVBQVU7SUFDVixZQUFZO0FBQ2hCOztBQUVBOzs7SUFHSSx5QkFBeUI7QUFDN0I7O0FBRUE7O0lBRUkseUJBQXlCO0FBQzdCOztBQUVBO0lBQ0ksWUFBWTtBQUNoQjs7QUFFQTs7SUFFSSxxQkFBcUI7QUFDekI7O0FBRUE7O0lBRUksWUFBWTtJQUNaLGVBQWU7SUFDZixlQUFlO0lBQ2YsZ0JBQWdCO0FBQ3BCOztBQUVBO0lBQ0kscUJBQXFCO0lBQ3JCLFlBQVk7SUFDWixVQUFVO0FBQ2Q7O0FBRUE7SUFDSSxxQkFBcUI7SUFDckIsaUJBQWlCO0lBQ2pCLFVBQVU7QUFDZDs7QUFFQTtJQUNJLFlBQVk7QUFDaEI7O0FBRUE7SUFDSSxXQUFXO0FBQ2Y7O0FBRUE7O0lBRUksWUFBWTtBQUNoQjs7QUFFQTtJQUNJLFdBQVc7SUFDWCxVQUFVO0lBQ1YsWUFBWTtBQUNoQjs7QUFFQTs7SUFFSSxXQUFXO0lBQ1gsVUFBVTtJQUNWLFlBQVk7SUFDWixnQ0FBZ0M7QUFDcEM7O0FBRUE7SUFDSSxnQ0FBZ0M7QUFDcEM7O0FBRUE7OztJQUdJLGdDQUFnQztBQUNwQzs7QUFFQTtJQUNJLGNBQWM7SUFDZCxnQkFBZ0I7SUFDaEIsV0FBVztJQUNYLFlBQVk7SUFDWixZQUFZO0lBQ1osYUFBYTtBQUNqQjs7QUFFQTtJQUNJLG1CQUFtQjtJQUNuQixXQUFXO0lBQ1gsWUFBWTtBQUNoQjs7QUFFQTtJQUNJLDhCQUEyRDtJQUMzRCwwQkFBMEI7QUFDOUI7O0FBRUE7SUFDSSw4QkFBMkQ7SUFDM0QsMEJBQTBCO0FBQzlCOztBQUVBO0lBQ0ksOEJBQTJEO0lBQzNELDBCQUEwQjtBQUM5Qjs7QUFFQTtJQUNJLDhCQUEyRDtJQUMzRCwwQkFBMEI7QUFDOUI7O0FBRUE7SUFDSSw4QkFBOEQ7SUFDOUQsMEJBQTBCO0FBQzlCOztBQUVBO0lBQ0ksOEJBQTJEO0lBQzNELDBCQUEwQjtBQUM5Qjs7QUFFQTtJQUNJLDhCQUEyRDtJQUMzRCwwQkFBMEI7QUFDOUI7O0FBRUE7SUFDSSw4QkFBMkQ7SUFDM0QsMEJBQTBCO0FBQzlCOztBQUVBO0lBQ0ksOEJBQTJEO0lBQzNELDBCQUEwQjtBQUM5Qjs7QUFFQTtJQUNJLDhCQUEyRDtJQUMzRCwwQkFBMEI7QUFDOUI7O0FBRUE7SUFDSSw4QkFBMkQ7SUFDM0QsMEJBQTBCO0FBQzlCOztBQUVBO0lBQ0ksOEJBQTJEO0lBQzNELDBCQUEwQjtBQUM5Qjs7QUFFQTtJQUNJLDhCQUEyRDtJQUMzRCwwQkFBMEI7QUFDOUI7O0FBRUE7SUFDSSw4QkFBMkQ7SUFDM0QsMEJBQTBCO0FBQzlCOztBQUVBO0lBQ0ksOEJBQTJEO0lBQzNELDBCQUEwQjtBQUM5Qjs7QUFFQTtJQUNJLDhCQUEyRDtJQUMzRCwwQkFBMEI7QUFDOUI7O0FBRUE7SUFDSSw4QkFBMkQ7SUFDM0QsMEJBQTBCO0FBQzlCOztBQUVBO0lBQ0ksOEJBQTJEO0lBQzNELDBCQUEwQjtBQUM5Qjs7QUFFQTtJQUNJLG1CQUFtQjtBQUN2Qjs7QUFFQTtJQUNJLG1CQUFtQjtBQUN2Qjs7QUFFQTtJQUNJLG1CQUFtQjtBQUN2Qjs7QUFFQTtJQUNJLG1CQUFtQjtBQUN2Qjs7QUFFQTtJQUNJLG1CQUFtQjtBQUN2Qjs7QUFFQTtJQUNJLFlBQVk7QUFDaEI7O0FBRUE7SUFDSSxZQUFZO0FBQ2hCOztBQUVBO0lBQ0kseUdBQWlHO1lBQWpHLGlHQUFpRztBQUNyRzs7QUFFQTtJQUNJLHdHQUFnRztZQUFoRyxnR0FBZ0c7QUFDcEc7O0FBRUE7SUFDSSx3R0FBZ0c7WUFBaEcsZ0dBQWdHO0FBQ3BHOztBQUVBO0lBQ0ksdUdBQStGO1lBQS9GLCtGQUErRjtBQUNuRzs7QUFFQTtJQUNJLHNHQUE4RjtZQUE5Riw4RkFBOEY7QUFDbEc7O0FBRUE7SUFDSSx3R0FBZ0c7WUFBaEcsZ0dBQWdHO0FBQ3BHOztBQUVBO0lBQ0kseUdBQWlHO1lBQWpHLGlHQUFpRztBQUNyRzs7QUFFQTtJQUNJLHVHQUErRjtZQUEvRiwrRkFBK0Y7QUFDbkc7O0FBRUE7SUFDSSxtR0FBMkY7WUFBM0YsMkZBQTJGO0FBQy9GOztBQUVBO0lBQ0kscUdBQTZGO1lBQTdGLDZGQUE2RjtBQUNqRzs7QUFFQSw4QkFBOEI7O0FBQzlCO0lBQ0ksa0JBQWtCO0lBQ2xCLGNBQWM7QUFDbEI7O0FBRUE7SUFDSSx3QkFBd0I7SUFDeEIsV0FBVztBQUNmOztBQUVBO0lBQ0ksV0FBVztJQUNYLFlBQVk7SUFDWixZQUFZO0FBQ2hCOztBQUVBO0lBQ0ksMkNBQWlFO0lBQ2pFLDBCQUEwQjtJQUMxQixxQkFBcUI7SUFDckIsV0FBVztJQUNYLFlBQVk7SUFDWixVQUFVO0NBQ2I7O0FBRUQ7SUFDSSxzQ0FBNEQ7SUFDNUQsMEJBQTBCO0lBQzFCLHFCQUFxQjtJQUNyQixXQUFXO0lBQ1gsWUFBWTtJQUNaLFVBQVU7Q0FDYjs7QUFFQTtJQUNHLHNDQUE0RDtJQUM1RCwwQkFBMEI7SUFDMUIsVUFBVTtJQUNWLFdBQVc7SUFDWCxZQUFZO0lBQ1osWUFBWTtJQUNaLGlCQUFpQjtDQUNwQjs7QUFFRDtJQUNJLFdBQVc7QUFDZjs7QUFFQTtJQUNJLG1CQUFtQjtJQUNuQixnQkFBZ0I7QUFDcEI7O0FBRUE7SUFDSTtRQUNJLGtCQUFrQjtRQUNsQixnQkFBZ0I7UUFDaEIsV0FBVztJQUNmO0FBQ0o7O0FBRUE7SUFDSTtRQUNJLGtCQUFrQjtRQUNsQixnQkFBZ0I7SUFDcEI7O0lBRUE7O1FBRUksZ0JBQWdCO0lBQ3BCOztJQUVBO1FBQ0ksWUFBWTtRQUNaLGdCQUFnQjtJQUNwQjs7SUFFQTtRQUNJLFFBQVE7SUFDWjs7SUFFQTtRQUNJLFNBQVM7SUFDYjs7SUFFQTtRQUNJLFVBQVU7SUFDZDtBQUNKIiwiZmlsZSI6InNyYy9hcHAvY29tcG9uZW50cy93YXBwZW4vd2FwcGVuLmNvbXBvbmVudC5jc3MiLCJzb3VyY2VzQ29udGVudCI6WyJAZm9udC1mYWNlIHtcbiAgICBmb250LWZhbWlseTogJ1ZvbGxrb3JuJztcbiAgICBzcmM6IHVybChcIi4uLy4uLy4uL2Fzc2V0cy9mb250cy9Wb2xsa29ybi9Wb2xsa29ybi1Cb2xkLnR0ZlwiKTtcbn1cblxuQGZvbnQtZmFjZSB7XG4gICAgZm9udC1mYW1pbHk6ICdPcGVuU2Fucyc7XG4gICAgc3JjOiB1cmwoXCIuLi8uLi8uLi9hc3NldHMvZm9udHMvT3Blbl9TYW5zL09wZW5TYW5zLVJlZ3VsYXIudHRmXCIpO1xuICAgIC8qZm9udC13ZWlnaHQ6IGJvbGQ7Ki9cbn1cblxuaDEsIGgyLCBoMywgaDQsIGg1LCBoNntcbiAgICBmb250LWZhbWlseTogJ1ZvbGxrb3JuJywgVGltZXMsIHNlcmlmO1xufVxuXG4ud2FwcGVuSGVscCBwLFxuLndhcHBlblNldHRpbmdzIHB7XG4gICAgZm9udC1mYW1pbHk6ICdPcGVuU2FucycsIEhlbHZldGljYSwgQXJpYWwsIFNhbnMtU2VyaWY7XG4gICAgbWFyZ2luOiAwO1xufVxuXG4udG9vbGJhciBidXR0b257XG4gICAgYm9yZGVyOiBub25lO1xuICAgIG91dGxpbmU6IG5vbmU7XG4gICAgaGVpZ2h0OiA1MHB4O1xuICAgIHdpZHRoOiA1MHB4O1xuICAgIG1hcmdpbjogMjBweCAyMHB4IDBweCAyMHB4OyBcbiAgICBiYWNrZ3JvdW5kOiAjZmZmZmZmO1xufVxuXG4uaGVscGJ1dHRvbiBtYXQtaWNvbntcbiAgICBib3JkZXItcmFkaXVzOiAyNXB4O1xuICAgIGNvbG9yOiM0OTQ5NDk7XG4gICAgZm9udC1zaXplOiA2MHB4O1xuICAgIG1hcmdpbjogLTVweCAwIDAgLTM1cHg7XG59XG5cbi50b29sYmFyIC5jbG9zZWJ1dHRvbntcbiAgICBmbG9hdDogcmlnaHQ7IFxuICAgIGJhY2tncm91bmQ6ICM0OTQ5NDk7XG4gICAgY29sb3I6I2ZmZmZmZjtcbn1cblxuLnRvb2xiYXIgLmNsb3NlYnV0dG9uIG1hdC1pY29ue1xuICAgIG1hcmdpbjogNHB4IDAgMCAtMTVweDtcbiAgICBmb250LXNpemU6IDQwcHg7XG59XG5cbmgxe1xuICAgIHRleHQtYWxpZ246IGNlbnRlcjtcbiAgICBmb250LXNpemU6IDEuNWVtO1xuICAgIG1hcmdpbi10b3A6IDA7IFxufVxuXG4ud2FwcGVuU2V0dGluZ3NOYXZ7XG4gICAgcG9zaXRpb246IGZpeGVkO1xuICAgIGJvdHRvbTogMDtcbiAgICB6LWluZGV4OiA1O1xuICAgIHdpZHRoOiAxMDAlO1xufVxuXG4ud2FwcGVuU2V0dGluZ3NOYXYgdWx7XG4gICAgbGlzdC1zdHlsZS10eXBlOiBub25lO1xuICAgIG1hcmdpbjogMDtcbiAgICBwYWRkaW5nOiAwO1xuICAgIGhlaWdodDogODBweDtcbiAgICBib3JkZXItdG9wOiAxNXB4IHNvbGlkICM0OTQ5NDk7XG4gICAgYmFja2dyb3VuZDogIzQ5NDk0OTtcbn1cblxuLndhcHBlblNldHRpbmdzTmF2IHVsIGxpe1xuICAgIGJhY2tncm91bmQ6ICNmZmY7XG4gICAgZmxvYXQ6IGxlZnQ7XG4gICAgd2lkdGg6IDE5LjM2JTsgXG4gICAgaGVpZ2h0OiAxMDAlO1xufVxuXG4ud2FwcGVuU2V0dGluZ3NOYXYgdWwgbGkuc2VsZWN0ZWR7XG4gICAgYmFja2dyb3VuZDogIzQ5NDk0OTtcbn1cblxuLndhcHBlblNldHRpbmdzTmF2X3dlYXBvbixcbi53YXBwZW5TZXR0aW5nc05hdl9lbWJsZW0sXG4ud2FwcGVuU2V0dGluZ3NOYXZfaGVsbWV0LFxuLndhcHBlblNldHRpbmdzTmF2X2NvbG9yIHtcbiAgICBtYXJnaW4tbGVmdDogMC44JTtcbn1cblxuLndhcHBlblNldHRpbmdzTmF2IHVsIGxpIGJ1dHRvbntcbiAgICBkaXNwbGF5OiBibG9jaztcbiAgICBtYXJnaW46IDVweCBhdXRvO1xuICAgIHdpZHRoOiA3MHB4OyBcbiAgICBoZWlnaHQ6IDcwcHg7XG4gICAgYm9yZGVyOiBub25lO1xuICAgIG91dGxpbmU6IG5vbmU7XG4gICAgYmFja2dyb3VuZC1zaXplOiA2MjBweCAxMzZweDtcbn1cblxuLndhcHBlblNldHRpbmdzTmF2X3NoaWVsZCBidXR0b257IFxuICAgIGJhY2tncm91bmQ6IHVybChcIi4uLy4uLy4uL2Fzc2V0cy9pY29ucy9XYXBwZW5JY29ucy5wbmdcIikgLTkycHggMHB4O1xufVxuXG4ud2FwcGVuU2V0dGluZ3NOYXZfZW1ibGVtIGJ1dHRvbnsgXG4gICAgYmFja2dyb3VuZDogdXJsKFwiLi4vLi4vLi4vYXNzZXRzL2ljb25zL1dhcHBlbkljb25zLnBuZ1wiKSAtMTg1cHggMHB4O1xufVxuXG4ud2FwcGVuU2V0dGluZ3NOYXZfaGVsbWV0IGJ1dHRvbnsgXG4gICAgYmFja2dyb3VuZDogdXJsKFwiLi4vLi4vLi4vYXNzZXRzL2ljb25zL1dhcHBlbkljb25zLnBuZ1wiKSAtMjc1cHggMHB4O1xufVxuXG4ud2FwcGVuU2V0dGluZ3NOYXZfd2VhcG9uIGJ1dHRvbnsgXG4gICAgYmFja2dyb3VuZDogdXJsKFwiLi4vLi4vLi4vYXNzZXRzL2ljb25zL1dhcHBlbkljb25zLnBuZ1wiKSAtMzY1cHggMHB4O1xufVxuXG4ud2FwcGVuU2V0dGluZ3NOYXZfY29sb3IgYnV0dG9ueyBcbiAgICBiYWNrZ3JvdW5kOiB1cmwoXCIuLi8uLi8uLi9hc3NldHMvaWNvbnMvV2FwcGVuSWNvbnMucG5nXCIpIC00NjBweCAwcHg7XG59XG5cbi53YXBwZW5TZXR0aW5nc05hdiB1bCBsaS5zZWxlY3RlZCBidXR0b257IFxuICAgIGJhY2tncm91bmQtcG9zaXRpb24teTogLTcwcHg7XG59XG5cbi53YXBwZW5IZWxwT3V0LFxuLndhcHBlblNldHRpbmdzTmF2T3V0eyBcbiAgICBoZWlnaHQ6IDEwMCU7XG4gICAgd2lkdGg6IDEwMCU7XG4gICAgcG9zaXRpb246IGFic29sdXRlO1xuICAgIHRvcDogMDtcbiAgICB6LWluZGV4OiA0O1xufVxuXG4ud2FwcGVuSGVscE91dHtcbiAgICB6LWluZGV4OiA2O1xufVxuXG4ud2FwcGVue1xuICAgIHBvc2l0aW9uOiByZWxhdGl2ZTtcbiAgICB3aWR0aDogMzIwcHg7XG4gICAgbWFyZ2luOiAxMiUgYXV0bztcbn1cblxuLndhcHBlbiBpbWd7XG4gICAgcG9zaXRpb246IGFic29sdXRlO1xuICAgIGxlZnQ6IDUwJTtcbiAgICBoZWlnaHQ6IGF1dG87XG4gICAgXG59XG5cbi53YXBwZW5fd2VhcG9uIGltZ3tcbiAgICB6LWluZGV4OiAxO1xuICAgIHRvcDogLTEwcHg7IFxuICAgIHdpZHRoOiAxMTYlO1xuICAgIG1hcmdpbi1sZWZ0OiAtNTglOyBcbn1cblxuLndhcHBlbl9oZWxtZXQgaW1ne1xuICAgIHotaW5kZXg6IDI7XG4gICAgdG9wOiAtNTBweDtcbiAgICB3aWR0aDogNzIlO1xuICAgIG1hcmdpbi1sZWZ0OiAtMzYlOyBcbn1cblxuLndhcHBlbl9zaGllbGQgaW1ne1xuICAgIHotaW5kZXg6IDM7XG4gICAgdG9wOiAxMDBweDtcbiAgICB3aWR0aDogODYlO1xuICAgIG1hcmdpbi1sZWZ0OiAtNDMlOyBcbn1cbi53YXBwZW5fZW1ibGVtIGltZ3tcbiAgICB6LWluZGV4OiA0O1xuICAgIHRvcDogMTQwcHg7XG4gICAgd2lkdGg6IDYwJTtcbiAgICBtYXJnaW4tbGVmdDogLTMwJTsgXG59XG5cbi53YXBwZW5TZXR0aW5nc19zaGllbGQgLmRvbmUgcDphZnRlciB7XG4gICAgY29udGVudDogXCIgVW5sb2NrZWQgZnJvbSBiZWdpbm5pbmcuXCI7XG4gICAgY29sb3I6ICMwNDdmMGQ7XG4gfVxuXG4ud2FwcGVuU2V0dGluZ3NfZW1ibGVtIC5kb25lIHA6YWZ0ZXIsXG4ud2FwcGVuU2V0dGluZ3NfaGVsbWV0IC5kb25lIHA6YWZ0ZXIsXG4ud2FwcGVuU2V0dGluZ3Nfd2VhcG9uIC5kb25lIHA6YWZ0ZXIge1xuICAgIGNvbnRlbnQ6IFwiIERvbmUhXCI7XG4gICAgY29sb3I6ICMwNDdmMGQ7XG4gfVxuXG4uaGlkZGVue1xuICAgIGRpc3BsYXk6IG5vbmU7XG59XG5cbi53YXBwZW5TZXR0aW5nc3tcbiAgICBib3JkZXI6IDNweCBzb2xpZCAjNDk0OTQ5O1xuICAgIGJhY2tncm91bmQ6ICNmZmZmZmY7XG4gICAgcG9zaXRpb246IGZpeGVkO1xuICAgIGJvdHRvbTogMTA1cHg7XG4gICAgei1pbmRleDogNTtcbiAgICB3aWR0aDogOTAlO1xuICAgIG1hcmdpbjogMCA0JTtcbn1cblxuLndhcHBlbkhlbHB7XG4gICAgYm9yZGVyOiAzcHggc29saWQgIzQ5NDk0OTtcbiAgICBiYWNrZ3JvdW5kOiAjZmZmZmZmO1xuICAgIHBvc2l0aW9uOiBmaXhlZDtcbiAgICB6LWluZGV4OiA3O1xuICAgIHdpZHRoOiA5MCU7XG4gICAgbWFyZ2luOiAwIDQlO1xufVxuXG4ud2FwcGVuSGVscCBoMixcbi53YXBwZW5TZXR0aW5nc19jb2xvciBwLFxuLndhcHBlblNldHRpbmdzIGgye1xuICAgIG1hcmdpbjogMjBweCAwcHggMHB4IDIwcHg7XG59XG5cbi53YXBwZW5IZWxwIG1hdC1pY29uLFxuLndhcHBlblNldHRpbmdzIG1hdC1pY29ue1xuICAgIG1hcmdpbjogMjBweCAyMHB4IDBweCAwcHg7XG59XG5cbi53YXBwZW5IZWxwIHB7XG4gICAgbWFyZ2luOiAyMHB4O1xufVxuXG4ud2FwcGVuSGVscCBoMixcbi53YXBwZW5TZXR0aW5ncyBoMntcbiAgICBkaXNwbGF5OiBpbmxpbmUtYmxvY2s7XG59XG5cbi53YXBwZW5IZWxwIG1hdC1pY29uLFxuLndhcHBlblNldHRpbmdzIG1hdC1pY29ue1xuICAgIGZsb2F0OiByaWdodDtcbiAgICBjdXJzb3I6IHBvaW50ZXI7XG4gICAgZm9udC1zaXplOiAzNXB4O1xuICAgIG1hcmdpbi10b3A6IDE1cHg7IFxufVxuXG4ud2FwcGVuU2V0dGluZ3MgdWx7XG4gICAgbGlzdC1zdHlsZS10eXBlOiBub25lO1xuICAgIG1hcmdpbjogMjBweDtcbiAgICBwYWRkaW5nOiAwO1xufVxuXG4ud2FwcGVuU2V0dGluZ3NfY29sb3IgdWx7XG4gICAgbGlzdC1zdHlsZS10eXBlOiBub25lO1xuICAgIG1hcmdpbjogMTBweCAyMHB4O1xuICAgIHBhZGRpbmc6IDA7XG59XG5cbi53YXBwZW5TZXR0aW5ncyAub3B0aW9uc3sgXG4gICAgaGVpZ2h0OiA4NXB4O1xufVxuXG4ud2FwcGVuU2V0dGluZ3MgLnRhc2tzeyBcbiAgICBoZWlnaHQ6IDJlbTtcbn1cblxuLndhcHBlblNldHRpbmdzIC5wcmltYXJ5LFxuLndhcHBlblNldHRpbmdzIC5zZWNvbmRhcnl7IFxuICAgIGhlaWdodDogNjBweDtcbn1cblxuLndhcHBlblNldHRpbmdzIC5vcHRpb25zIGxpe1xuICAgIGZsb2F0OiBsZWZ0O1xuICAgIHdpZHRoOiAyNSU7IFxuICAgIGhlaWdodDogMTAwJTtcbn1cblxuLndhcHBlblNldHRpbmdzIC5wcmltYXJ5IGxpLFxuLndhcHBlblNldHRpbmdzIC5zZWNvbmRhcnkgbGl7XG4gICAgZmxvYXQ6IGxlZnQ7XG4gICAgd2lkdGg6IDIwJTsgXG4gICAgaGVpZ2h0OiAxMDAlO1xuICAgIGJvcmRlci1ib3R0b206IDNweCBzb2xpZCAjZmZmZmZmO1xufVxuXG4ud2FwcGVuU2V0dGluZ3MgLm9wdGlvbnMgLnVzZWR7XG4gICAgYm9yZGVyLWJvdHRvbTogM3B4IHNvbGlkICNkZGRkZGQ7XG59XG5cbi53YXBwZW5TZXR0aW5ncyAucHJpbWFyeSAuc2VsZWN0ZWQsXG4ud2FwcGVuU2V0dGluZ3MgLnNlY29uZGFyeSAuc2VsZWN0ZWQsXG4ud2FwcGVuU2V0dGluZ3MgLm9wdGlvbnMgLnNlbGVjdGVke1xuICAgIGJvcmRlci1ib3R0b206IDNweCBzb2xpZCAjNDk0OTQ5O1xufVxuXG4ud2FwcGVuU2V0dGluZ3MgdWwgbGkgYnV0dG9ue1xuICAgIGRpc3BsYXk6IGJsb2NrO1xuICAgIG1hcmdpbjogNXB4IGF1dG87XG4gICAgd2lkdGg6IDcwcHg7IFxuICAgIGhlaWdodDogNzBweDtcbiAgICBib3JkZXI6IG5vbmU7XG4gICAgb3V0bGluZTogbm9uZTsgICBcbn1cblxuLndhcHBlblNldHRpbmdzX2NvbG9yIHVsIGxpIGJ1dHRvbntcbiAgICBib3JkZXItcmFkaXVzOiA1MHB4O1xuICAgIHdpZHRoOiA0NXB4OyBcbiAgICBoZWlnaHQ6IDQ1cHg7XG59XG5cbi53YXBwZW5TZXR0aW5nc19zaGllbGQgLm9wdGlvbnMgLlNoaWVsZDEgYnV0dG9ueyBcbiAgICBiYWNrZ3JvdW5kOiB1cmwoXCIuLi8uLi8uLi9hc3NldHMvaWNvbnMvV2FwcGVuL1NoaWVsZDEucG5nXCIpO1xuICAgIGJhY2tncm91bmQtc2l6ZTogNzBweCA3MHB4O1xufVxuXG4ud2FwcGVuU2V0dGluZ3Nfc2hpZWxkIC5vcHRpb25zIC5TaGllbGQyIGJ1dHRvbnsgXG4gICAgYmFja2dyb3VuZDogdXJsKFwiLi4vLi4vLi4vYXNzZXRzL2ljb25zL1dhcHBlbi9TaGllbGQyLnBuZ1wiKTtcbiAgICBiYWNrZ3JvdW5kLXNpemU6IDcwcHggNzBweDtcbn1cblxuLndhcHBlblNldHRpbmdzX3NoaWVsZCAub3B0aW9ucyAuU2hpZWxkMyBidXR0b24geyBcbiAgICBiYWNrZ3JvdW5kOiB1cmwoXCIuLi8uLi8uLi9hc3NldHMvaWNvbnMvV2FwcGVuL1NoaWVsZDMucG5nXCIpO1xuICAgIGJhY2tncm91bmQtc2l6ZTogNzBweCA3MHB4O1xufVxuXG4ud2FwcGVuU2V0dGluZ3Nfc2hpZWxkIC5vcHRpb25zIC5TaGllbGQ0IGJ1dHRvbnsgXG4gICAgYmFja2dyb3VuZDogdXJsKFwiLi4vLi4vLi4vYXNzZXRzL2ljb25zL1dhcHBlbi9TaGllbGQ0LnBuZ1wiKTtcbiAgICBiYWNrZ3JvdW5kLXNpemU6IDcwcHggNzBweDtcbn1cblxuLndhcHBlblNldHRpbmdzX2VtYmxlbSAub3B0aW9ucyAuRW1ibGVtMSBidXR0b257IFxuICAgIGJhY2tncm91bmQ6IHVybChcIn4uLy4uLy4uLy4uL2Fzc2V0cy9pY29ucy9XYXBwZW4vRW1ibGVtMS5wbmdcIik7XG4gICAgYmFja2dyb3VuZC1zaXplOiA3MHB4IDcwcHg7XG59XG5cbi53YXBwZW5TZXR0aW5nc19lbWJsZW0gLm9wdGlvbnMgLkVtYmxlbTIgYnV0dG9ueyBcbiAgICBiYWNrZ3JvdW5kOiB1cmwoXCIuLi8uLi8uLi9hc3NldHMvaWNvbnMvV2FwcGVuL0VtYmxlbTIucG5nXCIpO1xuICAgIGJhY2tncm91bmQtc2l6ZTogNzBweCA3MHB4O1xufVxuXG4ud2FwcGVuU2V0dGluZ3NfZW1ibGVtIC5vcHRpb25zIC5FbWJsZW0zIGJ1dHRvbiB7IFxuICAgIGJhY2tncm91bmQ6IHVybChcIi4uLy4uLy4uL2Fzc2V0cy9pY29ucy9XYXBwZW4vRW1ibGVtMy5wbmdcIik7XG4gICAgYmFja2dyb3VuZC1zaXplOiA3MHB4IDcwcHg7XG59XG5cbi53YXBwZW5TZXR0aW5nc19lbWJsZW0gLm9wdGlvbnMgLkVtYmxlbTQgYnV0dG9ueyBcbiAgICBiYWNrZ3JvdW5kOiB1cmwoXCIuLi8uLi8uLi9hc3NldHMvaWNvbnMvV2FwcGVuL0VtYmxlbTQucG5nXCIpO1xuICAgIGJhY2tncm91bmQtc2l6ZTogNzBweCA3MHB4O1xufVxuXG4ud2FwcGVuU2V0dGluZ3NfZW1ibGVtIC5vcHRpb25zIC5FbWJsZW01IGJ1dHRvbiB7IFxuICAgIGJhY2tncm91bmQ6IHVybChcIi4uLy4uLy4uL2Fzc2V0cy9pY29ucy9XYXBwZW4vRW1ibGVtNS5wbmdcIik7XG4gICAgYmFja2dyb3VuZC1zaXplOiA3MHB4IDcwcHg7XG59XG5cbi53YXBwZW5TZXR0aW5nc19lbWJsZW0gLm9wdGlvbnMgLkVtYmxlbTYgYnV0dG9ueyBcbiAgICBiYWNrZ3JvdW5kOiB1cmwoXCIuLi8uLi8uLi9hc3NldHMvaWNvbnMvV2FwcGVuL0VtYmxlbTYucG5nXCIpO1xuICAgIGJhY2tncm91bmQtc2l6ZTogNzBweCA3MHB4O1xufVxuXG4ud2FwcGVuU2V0dGluZ3NfaGVsbWV0IC5vcHRpb25zIC5IZWxtZXQxIGJ1dHRvbnsgXG4gICAgYmFja2dyb3VuZDogdXJsKFwiLi4vLi4vLi4vYXNzZXRzL2ljb25zL1dhcHBlbi9IZWxtZXQxLnBuZ1wiKTtcbiAgICBiYWNrZ3JvdW5kLXNpemU6IDcwcHggNzBweDtcbn1cblxuLndhcHBlblNldHRpbmdzX2hlbG1ldCAub3B0aW9ucyAuSGVsbWV0MiBidXR0b257IFxuICAgIGJhY2tncm91bmQ6IHVybChcIi4uLy4uLy4uL2Fzc2V0cy9pY29ucy9XYXBwZW4vSGVsbWV0Mi5wbmdcIik7XG4gICAgYmFja2dyb3VuZC1zaXplOiA3MHB4IDcwcHg7XG59XG5cbi53YXBwZW5TZXR0aW5nc19oZWxtZXQgLm9wdGlvbnMgLkhlbG1ldDMgYnV0dG9uIHsgXG4gICAgYmFja2dyb3VuZDogdXJsKFwiLi4vLi4vLi4vYXNzZXRzL2ljb25zL1dhcHBlbi9IZWxtZXQzLnBuZ1wiKTtcbiAgICBiYWNrZ3JvdW5kLXNpemU6IDcwcHggNzBweDtcbn1cblxuLndhcHBlblNldHRpbmdzX2hlbG1ldCAub3B0aW9ucyAuSGVsbWV0NCBidXR0b257IFxuICAgIGJhY2tncm91bmQ6IHVybChcIi4uLy4uLy4uL2Fzc2V0cy9pY29ucy9XYXBwZW4vSGVsbWV0NC5wbmdcIik7XG4gICAgYmFja2dyb3VuZC1zaXplOiA3MHB4IDcwcHg7XG59XG5cbi53YXBwZW5TZXR0aW5nc193ZWFwb24gLm9wdGlvbnMgLk1hbnRsZTEgYnV0dG9ueyBcbiAgICBiYWNrZ3JvdW5kOiB1cmwoXCIuLi8uLi8uLi9hc3NldHMvaWNvbnMvV2FwcGVuL01hbnRsZTEucG5nXCIpO1xuICAgIGJhY2tncm91bmQtc2l6ZTogNzBweCA3MHB4O1xufVxuXG4ud2FwcGVuU2V0dGluZ3Nfd2VhcG9uIC5vcHRpb25zIC5NYW50bGUyIGJ1dHRvbnsgXG4gICAgYmFja2dyb3VuZDogdXJsKFwiLi4vLi4vLi4vYXNzZXRzL2ljb25zL1dhcHBlbi9NYW50bGUyLnBuZ1wiKTtcbiAgICBiYWNrZ3JvdW5kLXNpemU6IDcwcHggNzBweDtcbn1cblxuLndhcHBlblNldHRpbmdzX3dlYXBvbiAub3B0aW9ucyAuTWFudGxlMyBidXR0b24geyBcbiAgICBiYWNrZ3JvdW5kOiB1cmwoXCIuLi8uLi8uLi9hc3NldHMvaWNvbnMvV2FwcGVuL01hbnRsZTMucG5nXCIpO1xuICAgIGJhY2tncm91bmQtc2l6ZTogNzBweCA3MHB4O1xufVxuXG4ud2FwcGVuU2V0dGluZ3Nfd2VhcG9uIC5vcHRpb25zIC5NYW50bGU0IGJ1dHRvbnsgXG4gICAgYmFja2dyb3VuZDogdXJsKFwiLi4vLi4vLi4vYXNzZXRzL2ljb25zL1dhcHBlbi9NYW50bGU0LnBuZ1wiKTtcbiAgICBiYWNrZ3JvdW5kLXNpemU6IDcwcHggNzBweDtcbn1cblxuLndhcHBlblNldHRpbmdzX2NvbG9yIC5Db2xvcjEgYnV0dG9ue1xuICAgIGJhY2tncm91bmQ6ICNjZTI4Mjg7XG59XG5cbi53YXBwZW5TZXR0aW5nc19jb2xvciAuQ29sb3IyIGJ1dHRvbntcbiAgICBiYWNrZ3JvdW5kOiAjNTI2YmEwO1xufVxuXG4ud2FwcGVuU2V0dGluZ3NfY29sb3IgLkNvbG9yMyBidXR0b257XG4gICAgYmFja2dyb3VuZDogIzA0N2YwZDtcbn1cblxuLndhcHBlblNldHRpbmdzX2NvbG9yIC5Db2xvcjQgYnV0dG9ue1xuICAgIGJhY2tncm91bmQ6ICNjMzg5MTg7XG59XG5cbi53YXBwZW5TZXR0aW5nc19jb2xvciAuQ29sb3I1IGJ1dHRvbntcbiAgICBiYWNrZ3JvdW5kOiAjYTJhMmEyO1xufVxuXG4ud2FwcGVuU2V0dGluZ3MgLm9wdGlvbnMgLmxvY2tlZHsgXG4gICAgb3BhY2l0eTogMC4zO1xufVxuXG4ud2FwcGVuU2V0dGluZ3MgLm9wdGlvbnMgLnVubG9ja2VkeyBcbiAgICBvcGFjaXR5OiAwLjY7XG59XG5cbi53YXBwZW4gLkNvbG9yMXtcbiAgICBmaWx0ZXI6IGludmVydCg4OCUpIHNlcGlhKDg4JSkgc2F0dXJhdGUoNjU4NiUpIGh1ZS1yb3RhdGUoMjkwZGVnKSBicmlnaHRuZXNzKDEwMSUpIGNvbnRyYXN0KDEwMCUpO1xufVxuXG4ud2FwcGVuIC5Db2xvcjFkYXJre1xuICAgIGZpbHRlcjogaW52ZXJ0KDEzJSkgc2VwaWEoNDUlKSBzYXR1cmF0ZSg0NTIzJSkgaHVlLXJvdGF0ZSgzNDlkZWcpIGJyaWdodG5lc3MoOTMlKSBjb250cmFzdCgxMTklKTtcbn1cblxuLndhcHBlbiAuQ29sb3Iye1xuICAgIGZpbHRlcjogaW52ZXJ0KDc2JSkgc2VwaWEoNDMlKSBzYXR1cmF0ZSg1NzEyJSkgaHVlLXJvdGF0ZSgxOTVkZWcpIGJyaWdodG5lc3MoMTAzJSkgY29udHJhc3QoODYlKTtcbn1cblxuLndhcHBlbiAuQ29sb3IyZGFya3tcbiAgICBmaWx0ZXI6IGludmVydCgxNSUpIHNlcGlhKDExJSkgc2F0dXJhdGUoMTkyMyUpIGh1ZS1yb3RhdGUoMTgyZGVnKSBicmlnaHRuZXNzKDkxJSkgY29udHJhc3QoOTQlKTtcbn1cblxuLndhcHBlbiAuQ29sb3Ize1xuICAgIGZpbHRlcjogaW52ZXJ0KDkyJSkgc2VwaWEoMTIlKSBzYXR1cmF0ZSgxNDMyJSkgaHVlLXJvdGF0ZSg2MGRlZykgYnJpZ2h0bmVzcyg5MyUpIGNvbnRyYXN0KDkzJSk7XG59XG5cbi53YXBwZW4gLkNvbG9yM2Rhcmt7XG4gICAgZmlsdGVyOiBpbnZlcnQoMTIlKSBzZXBpYSgzMCUpIHNhdHVyYXRlKDI0NjElKSBodWUtcm90YXRlKDkyZGVnKSBicmlnaHRuZXNzKDEwMyUpIGNvbnRyYXN0KDEwNCUpO1xufVxuXG4ud2FwcGVuIC5Db2xvcjR7XG4gICAgZmlsdGVyOiBpbnZlcnQoNzglKSBzZXBpYSg5NSUpIHNhdHVyYXRlKDIzNTYlKSBodWUtcm90YXRlKDMxN2RlZykgYnJpZ2h0bmVzcygxMDMlKSBjb250cmFzdCgxMDclKTtcbn1cblxuLndhcHBlbiAuQ29sb3I0ZGFya3tcbiAgICBmaWx0ZXI6IGludmVydCgzNCUpIHNlcGlhKDE0JSkgc2F0dXJhdGUoNzEzMCUpIGh1ZS1yb3RhdGUoMjhkZWcpIGJyaWdodG5lc3MoOTMlKSBjb250cmFzdCgxMDIlKTtcbn1cblxuLndhcHBlbiAuQ29sb3I1e1xuICAgIGZpbHRlcjogaW52ZXJ0KDc1JSkgc2VwaWEoMCUpIHNhdHVyYXRlKDAlKSBodWUtcm90YXRlKDE2MWRlZykgYnJpZ2h0bmVzcyg4OCUpIGNvbnRyYXN0KDg2JSk7XG59XG5cbi53YXBwZW4gLkNvbG9yNWRhcmt7XG4gICAgZmlsdGVyOiBpbnZlcnQoMjAlKSBzZXBpYSgwJSkgc2F0dXJhdGUoNTUlKSBodWUtcm90YXRlKDIzOWRlZykgYnJpZ2h0bmVzcygxMDQlKSBjb250cmFzdCg5MSUpO1xufVxuXG4vKiBTY3JvbGwgZm9yIGVtYmxlbSBidXR0b25zICovXG4ud2FwcGVuU2V0dGluZ3NfZW1ibGVtIC5vdmVyZmxvd1dyYXBwZXJ7XG4gICAgb3ZlcmZsb3cteDogc2Nyb2xsO1xuICAgIG1hcmdpbjogMCAyMHB4O1xufVxuXG4ud2FwcGVuU2V0dGluZ3NfZW1ibGVtIC5vcHRpb25ze1xuICAgIG1hcmdpbjogMTBweCAwcHggOHB4IDBweDtcbiAgICB3aWR0aDogMTQwJTtcbn1cblxuLndhcHBlblNldHRpbmdzX2VtYmxlbSAub3B0aW9ucyBsaXtcbiAgICBmbG9hdDogbGVmdDtcbiAgICB3aWR0aDogMTYuNiU7IFxuICAgIGhlaWdodDogMTAwJTtcbn1cblxuLnRhc2tzIC5kb25lIHA6YmVmb3JlIHtcbiAgICBiYWNrZ3JvdW5kLWltYWdlOiB1cmwoXCIuLi8uLi8uLi9hc3NldHMvaWNvbnMvbG9ja19vcGVuLTI0cHguc3ZnXCIpO1xuICAgIGJhY2tncm91bmQtc2l6ZTogMTZweCAxNnB4O1xuICAgIGRpc3BsYXk6IGlubGluZS1ibG9jaztcbiAgICB3aWR0aDogMThweDsgXG4gICAgaGVpZ2h0OiAxNXB4O1xuICAgIGNvbnRlbnQ6XCJcIjtcbiB9XG5cbi50YXNrcyAubG9ja2VkIHA6YmVmb3JlIHtcbiAgICBiYWNrZ3JvdW5kLWltYWdlOiB1cmwoXCIuLi8uLi8uLi9hc3NldHMvaWNvbnMvbG9jay0yNHB4LnN2Z1wiKTtcbiAgICBiYWNrZ3JvdW5kLXNpemU6IDE2cHggMTZweDtcbiAgICBkaXNwbGF5OiBpbmxpbmUtYmxvY2s7XG4gICAgd2lkdGg6IDE4cHg7IFxuICAgIGhlaWdodDogMTVweDtcbiAgICBjb250ZW50OlwiXCI7XG4gfVxuXG4gLm9wdGlvbnMgLmxvY2tlZCArIC5sb2NrZXJ7XG4gICAgYmFja2dyb3VuZC1pbWFnZTogdXJsKFwiLi4vLi4vLi4vYXNzZXRzL2ljb25zL2xvY2stMjRweC5zdmdcIik7XG4gICAgYmFja2dyb3VuZC1zaXplOiAyMHB4IDIwcHg7XG4gICAgb3BhY2l0eTogMTtcbiAgICB3aWR0aDogMjBweDsgXG4gICAgaGVpZ2h0OiAyMHB4O1xuICAgIGZsb2F0OiByaWdodDtcbiAgICBtYXJnaW4tdG9wOiAtMjVweDtcbiB9XG5cbmRpdjo6LXdlYmtpdC1zY3JvbGxiYXIge1xuICAgIGhlaWdodDogMnB4O1xufVxuXG5kaXY6Oi13ZWJraXQtc2Nyb2xsYmFyLXRodW1iIHtcbiAgICBib3JkZXItcmFkaXVzOiAyNXB4O1xuICAgIGJhY2tncm91bmQ6ICNDQ0M7XG59XG5cbkBtZWRpYSAobWluLWhlaWdodDogNzUwcHgpIHtcbiAgICBoMXtcbiAgICAgICAgdGV4dC1hbGlnbjogY2VudGVyO1xuICAgICAgICBmb250LXNpemU6IDEuOGVtO1xuICAgICAgICBtYXJnaW46IDEwJTtcbiAgICB9XG59XG5cbkBtZWRpYSAobWF4LWhlaWdodDogNjUwcHgpIHtcbiAgICBoMXtcbiAgICAgICAgdGV4dC1hbGlnbjogY2VudGVyO1xuICAgICAgICBmb250LXNpemU6IDEuMmVtO1xuICAgIH1cblxuICAgIC53YXBwZW5IZWxwIHAsXG4gICAgLndhcHBlblNldHRpbmdzIHB7XG4gICAgICAgIGZvbnQtc2l6ZTogMC45ZW07XG4gICAgfVxuXG4gICAgLndhcHBlbntcbiAgICAgICAgd2lkdGg6IDI0MHB4OyAgXG4gICAgICAgIG1hcmdpbjogMTUlIGF1dG87XG4gICAgfVxuXG4gICAgLndhcHBlbl9lbWJsZW0gaW1ne1xuICAgICAgICB0b3A6OTJweDtcbiAgICB9XG5cbiAgICAud2FwcGVuX3NoaWVsZCBpbWd7XG4gICAgICAgIHRvcDogNjJweDtcbiAgICB9XG5cbiAgICAud2FwcGVuX3dlYXBvbiBpbWd7XG4gICAgICAgIHRvcDogLTIycHg7XG4gICAgfVxufSJdfQ== */"

/***/ }),

/***/ "./src/app/components/wappen/wappen.component.html":
/*!*********************************************************!*\
  !*** ./src/app/components/wappen/wappen.component.html ***!
  \*********************************************************/
/*! no static exports found */
/***/ (function(module, exports) {

module.exports = "<div class=\"wrapper background\">\n  <div class=\"toolbar\">\n      <button class=\"helpbutton\" (click)=\"displayHelp()\"><mat-icon>help</mat-icon></button>\n      <button class=\"closebutton\" (click)=\"closeWindow()\"><mat-icon>close</mat-icon></button>\n  </div> \n\n  <div class=\"wappenHelp\" *ngIf=\"showHelp\">\n      <mat-icon (click)=\"closeHelp()\">close</mat-icon>\n      <h2>{{ 'coa.helpTitle' | translate }}</h2>\n      <p>{{ 'coa.helpText' | translate }}</p>\n  </div> \n  <div  *ngIf=\"showHelp\" (click)=\"closeHelp()\" class=\"wappenHelpOut\"></div> \n      \n  <h1>{{ 'coa.title' | translate }}<br/>{{user.name}}</h1>\n\n  <div class=\"wappen\">\n      <div class=\"wappen_weapon\">\n          <img class=\"{{setColorPrimary}}dark\" src=\"./assets/icons/Wappen/{{setWeapon}}.png\" />\n      </div>\n      <div class=\"wappen_helmet\">\n          <img class=\"{{setColorSecondary}}\" src=\"./assets/icons/Wappen/{{setHelmet}}.png\" />\n          <img class=\"{{setColorPrimary}}dark\" src=\"./assets/icons/Wappen/{{setHelmet}}_outline.png\" />\n      </div> \n      <div class=\"wappen_shield\">\n          <img class=\"{{setColorPrimary}}\" src=\"./assets/icons/Wappen/{{setShield}}.png\" />\n          <img class=\"{{setColorPrimary}}dark\" src=\"./assets/icons/Wappen/{{setShield}}_outline.png\" />\n      </div> \n      <div class=\"wappen_emblem\">\n          <img class=\"{{setColorSecondary}}\" src=\"./assets/icons/Wappen/{{setEmblem}}.png\" />\n          <img class=\"{{setColorPrimary}}dark\" src=\"./assets/icons/Wappen/{{setEmblem}}_outline.png\" />\n      </div>\n  </div>\n\n  <div class=\"wappenSettings\" *ngIf=\"showSettings\">\n\n      <div class=\"wappenSettings_shield\" *ngIf=\"settingsContent == 'shield'\">\n          <mat-icon (click)=\"closeWappenSettings()\">close</mat-icon>\n          <h2>{{ 'coa.shield' | translate }}</h2>\n          <ul class=\"options\">\n              <ng-container *ngFor=\"let item of itemsList\">\n                  <li *ngIf=\"item.type == 'shield'\" [className]=\"selectedShield == item.name ? setShield == item.name ? 'selected used ' + item.name : 'selected ' + item.name : setShield == item.name ? 'used ' + item.name : item.name\">\n                      <button [className]=\"isUnlocked(item.name) ? 'unlocked': 'locked'\" (click)=\"selectShield(item.name)\"></button>\n                      <div class=\"locker\"></div>\n                  </li>\n              </ng-container>\n          </ul>\n          <ul class=\"tasks\">\n              <ng-container *ngFor=\"let item of itemsList\">\n                  <li *ngIf=\"item.type == 'shield' && selectedShield == item.name\" [className]=\"isUnlocked(item.name) ? 'item.name done' : 'item.name locked'\"><p>{{item.task}}</p></li>\n              </ng-container>\n          </ul>\n      </div>\n\n      <div class=\"wappenSettings_emblem\" *ngIf=\"settingsContent == 'emblem'\">\n          <mat-icon (click)=\"closeWappenSettings()\">close</mat-icon>\n          <h2>{{ 'coa.charge' | translate }}</h2>\n          <div class=\"overflowWrapper\">\n              <ul class=\"options\">\n                  <ng-container *ngFor=\"let item of itemsList\">\n                      <li *ngIf=\"item.type == 'symbol'\" [className]=\"selectedEmblem == item.name ? setEmblem == item.name ? 'selected used ' + item.name : 'selected ' + item.name : setEmblem == item.name ? 'used ' + item.name : item.name\">\n                          <button [className]=\"isUnlocked(item.name) ? 'unlocked' : 'locked'\" (click)=\"selectEmblem(item.name)\"></button>\n                          <div class=\"locker\"></div>\n                      </li>\n                  </ng-container> \n              </ul>\n          </div>\n          <ul class=\"tasks\">\n              <ng-container *ngFor=\"let item of itemsList\">\n                  <li *ngIf=\"item.type == 'symbol' && selectedEmblem == item.name\" [className]=\"isUnlocked(item.name) ? 'item.name done' : 'item.name locked'\"><p>{{item.task}}</p></li>\n              </ng-container>\n          </ul>\n      </div>\n      <div class=\"wappenSettings_helmet\" *ngIf=\"settingsContent == 'helmet'\">\n          <mat-icon (click)=\"closeWappenSettings()\">close</mat-icon>\n          <h2>{{ 'coa.helmet' | translate }}</h2>\n          <ul class=\"options\">\n              <ng-container *ngFor=\"let item of itemsList\">\n                  <li *ngIf=\"item.type == 'helmet'\" [className]=\"selectedHelmet == item.name ? setHelmet == item.name ? 'selected used ' + item.name : 'selected ' + item.name : setHelmet == item.name ? 'used ' + item.name : item.name\">\n                      <button [className]=\"isUnlocked(item.name) ? 'unlocked' : 'locked'\" (click)=\"selectHelmet(item.name)\"></button>\n                      <div class=\"locker\"></div>\n                  </li>\n              </ng-container> \n          </ul>\n          <ul class=\"tasks\">\n              <ng-container *ngFor=\"let item of itemsList\">\n                  <li *ngIf=\"item.type == 'helmet' && selectedHelmet == item.name\" [className]=\"isUnlocked(item.name) ? 'item.name done' : 'item.name locked'\"><p>{{item.task}}</p></li>\n              </ng-container>\n          </ul>\n      </div>\n      <div class=\"wappenSettings_weapon\" *ngIf=\"settingsContent == 'weapon'\">\n          <mat-icon (click)=\"closeWappenSettings()\">close</mat-icon>\n          <h2>{{ 'coa.mantle' | translate }}</h2>\n          <ul class=\"options\">\n              <ng-container *ngFor=\"let item of itemsList\">\n                  <li *ngIf=\"item.type == 'mantling'\" [className]=\"selectedWeapon == item.name ? setWeapon == item.name ? 'selected used ' + item.name : 'selected ' + item.name : setWeapon == item.name ? 'used ' + item.name : item.name\">\n                      <button [className]=\"isUnlocked(item.name) ? 'unlocked' : 'locked'\" (click)=\"selectWeapon(item.name)\"></button>\n                      <div class=\"locker\"></div>\n                  </li>\n              </ng-container> \n          </ul>\n          <ul class=\"tasks\">\n              <ng-container *ngFor=\"let item of itemsList\">\n                  <li *ngIf=\"item.type == 'mantling' && selectedWeapon == item.name\" [className]=\"isUnlocked(item.name) ? 'item.name done' : 'item.name locked'\"><p>{{item.task}}</p></li>\n              </ng-container>\n          </ul>\n      </div>\n      <div class=\"wappenSettings_color\" *ngIf=\"settingsContent == 'color'\">\n          <mat-icon (click)=\"closeWappenSettings()\">close</mat-icon>\n          <h2>{{ 'coa.colors' | translate }}</h2>\n          <p>{{ 'coa.primColor' | translate }}</p>\n          <ul class=\"primary\">\n              <li [className]=\"setColorPrimary == 'Color1' ? 'selected Color1' : 'Color1'\"><button (click)=\"selectPrimaryColor('Color1')\"></button></li>\n              <li [className]=\"setColorPrimary == 'Color2' ? 'selected Color2' : 'Color2'\"><button (click)=\"selectPrimaryColor('Color2')\"></button></li>\n              <li [className]=\"setColorPrimary == 'Color3' ? 'selected Color3' : 'Color3'\"><button (click)=\"selectPrimaryColor('Color3')\"></button></li>\n              <li [className]=\"setColorPrimary == 'Color4' ? 'selected Color4' : 'Color4'\"><button (click)=\"selectPrimaryColor('Color4')\"></button></li>\n              <li [className]=\"setColorPrimary == 'Color5' ? 'selected Color5' : 'Color5'\"><button (click)=\"selectPrimaryColor('Color5')\"></button></li>\n          </ul>\n          <p>{{ 'coa.secColor' | translate }}</p>\n          <ul class=\"secondary\">\n              <li [className]=\"setColorSecondary == 'Color1' ? 'selected Color1' : 'Color1'\"><button (click)=\"selectSecondaryColor('Color1')\"></button></li>\n              <li [className]=\"setColorSecondary == 'Color2' ? 'selected Color2' : 'Color2'\"><button (click)=\"selectSecondaryColor('Color2')\"></button></li>\n              <li [className]=\"setColorSecondary == 'Color3' ? 'selected Color3' : 'Color3'\"><button (click)=\"selectSecondaryColor('Color3')\"></button></li>\n              <li [className]=\"setColorSecondary == 'Color4' ? 'selected Color4' : 'Color4'\"><button (click)=\"selectSecondaryColor('Color4')\"></button></li>\n              <li [className]=\"setColorSecondary == 'Color5' ? 'selected Color5' : 'Color5'\"><button (click)=\"selectSecondaryColor('Color5')\"></button></li>\n          </ul></div>\n  </div>\n\n  <div class=\"wappenSettingsNav\">\n      <ul>\n          <li [className]=\"showSettings && settingsContent == 'shield' ? 'selected wappenSettingsNav_shield' : 'wappenSettingsNav_shield'\"><button (click)=\"displaySettings('shield')\"></button></li>\n          <li [className]=\"showSettings && settingsContent == 'emblem' ? 'selected wappenSettingsNav_emblem' : 'wappenSettingsNav_emblem'\"><button (click)=\"displaySettings('emblem')\"></button></li>\n          <li [className]=\"showSettings && settingsContent == 'helmet' ? 'selected wappenSettingsNav_helmet' : 'wappenSettingsNav_helmet'\"><button (click)=\"displaySettings('helmet')\"></button></li>\n          <li [className]=\"showSettings && settingsContent == 'weapon' ? 'selected wappenSettingsNav_weapon' : 'wappenSettingsNav_weapon'\"><button (click)=\"displaySettings('weapon')\"></button></li>\n          <li [className]=\"showSettings && settingsContent == 'color' ? 'selected wappenSettingsNav_color' : 'wappenSettingsNav_color'\"><button (click)=\"displaySettings('color')\"></button></li>\n      </ul>\n  </div>\n  <div  *ngIf=\"showSettings\" (click)=\"closeWappenSettings()\" class=\"wappenSettingsNavOut\"></div> \n</div>\n"

/***/ }),

/***/ "./src/app/components/wappen/wappen.component.ts":
/*!*******************************************************!*\
  !*** ./src/app/components/wappen/wappen.component.ts ***!
  \*******************************************************/
/*! exports provided: WappenComponent */
/***/ (function(module, __webpack_exports__, __webpack_require__) {

"use strict";
__webpack_require__.r(__webpack_exports__);
/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, "WappenComponent", function() { return WappenComponent; });
/* harmony import */ var _angular_core__WEBPACK_IMPORTED_MODULE_0__ = __webpack_require__(/*! @angular/core */ "./node_modules/@angular/core/fesm5/core.js");
/* harmony import */ var _services_native_native_response_service__WEBPACK_IMPORTED_MODULE_1__ = __webpack_require__(/*! ../../services/native/native-response.service */ "./src/app/services/native/native-response.service.ts");
/* harmony import */ var _services_location_service__WEBPACK_IMPORTED_MODULE_2__ = __webpack_require__(/*! ../../services/location.service */ "./src/app/services/location.service.ts");
/* harmony import */ var _store_actions_UserActions__WEBPACK_IMPORTED_MODULE_3__ = __webpack_require__(/*! ../../store/actions/UserActions */ "./src/app/store/actions/UserActions.ts");
/* harmony import */ var _store_actions_LocationActions__WEBPACK_IMPORTED_MODULE_4__ = __webpack_require__(/*! ../../store/actions/LocationActions */ "./src/app/store/actions/LocationActions.ts");
/* harmony import */ var _services_native_native_communication_service__WEBPACK_IMPORTED_MODULE_5__ = __webpack_require__(/*! ../../services/native/native-communication.service */ "./src/app/services/native/native-communication.service.ts");
/* harmony import */ var _angular_material__WEBPACK_IMPORTED_MODULE_6__ = __webpack_require__(/*! @angular/material */ "./node_modules/@angular/material/esm5/material.es5.js");
/* harmony import */ var _services_alert_service__WEBPACK_IMPORTED_MODULE_7__ = __webpack_require__(/*! ../../services/alert.service */ "./src/app/services/alert.service.ts");
/* harmony import */ var _angular_router__WEBPACK_IMPORTED_MODULE_8__ = __webpack_require__(/*! @angular/router */ "./node_modules/@angular/router/fesm5/router.js");
/* harmony import */ var _services_transmission_service__WEBPACK_IMPORTED_MODULE_9__ = __webpack_require__(/*! ../../services/transmission.service */ "./src/app/services/transmission.service.ts");
var __decorate = (undefined && undefined.__decorate) || function (decorators, target, key, desc) {
    var c = arguments.length, r = c < 3 ? target : desc === null ? desc = Object.getOwnPropertyDescriptor(target, key) : desc, d;
    if (typeof Reflect === "object" && typeof Reflect.decorate === "function") r = Reflect.decorate(decorators, target, key, desc);
    else for (var i = decorators.length - 1; i >= 0; i--) if (d = decorators[i]) r = (c < 3 ? d(r) : c > 3 ? d(target, key, r) : d(target, key)) || r;
    return c > 3 && r && Object.defineProperty(target, key, r), r;
};
var __metadata = (undefined && undefined.__metadata) || function (k, v) {
    if (typeof Reflect === "object" && typeof Reflect.metadata === "function") return Reflect.metadata(k, v);
};
var __param = (undefined && undefined.__param) || function (paramIndex, decorator) {
    return function (target, key) { decorator(target, key, paramIndex); }
};










var WappenComponent = /** @class */ (function () {
    function WappenComponent(transmissionService, locationService, appStore, userActions, locationActions, nativeCommunicationService, nativeResponseService, dialog, router, alertService) {
        var _this = this;
        this.transmissionService = transmissionService;
        this.locationService = locationService;
        this.appStore = appStore;
        this.userActions = userActions;
        this.locationActions = locationActions;
        this.nativeCommunicationService = nativeCommunicationService;
        this.nativeResponseService = nativeResponseService;
        this.dialog = dialog;
        this.router = router;
        this.alertService = alertService;
        this.showSettings = false;
        this.showHelp = false;
        this.settingsContent = 'shield';
        this.setShield = 'Shield1';
        this.setEmblem = 'Emblem2';
        this.setHelmet = 'Helmet2';
        this.setWeapon = 'Mantle1';
        this.setColorPrimary = 'Color2';
        this.setColorSecondary = 'Color4';
        this.selectedShield = 'Shield1';
        this.selectedEmblem = 'Emblem2';
        this.selectedHelmet = 'Helmet2';
        this.selectedWeapon = 'Mantle1';
        this.unlockedItems = ['Shield1', 'Shield2', 'Shield3', 'Shield4', 'Emblem2', 'Emblem3', 'Emblem4', 'Emblem5',
            'Emblem6', 'Helmet1', 'Helmet2', 'Helmet3', 'Mantle1', 'Mantle3'];
        this._unsubscribe = this.appStore.subscribe(function () {
            var state = _this.appStore.getState();
            console.log(state.user);
            _this.closestExhibit = state.closestExhibit;
            _this.timelineLocations = _this.locationService.getTimelineLocations();
        });
        this.subscriptionCoaParts = this.alertService.getMessageCoaParts().subscribe(function (message) {
            _this.allCoaParts = message;
            console.log(_this.allCoaParts);
        });
        this.subscriptionUserCoaParts = this.alertService.getMessageUserCoaParts().subscribe(function (message) {
            _this.userCoaParts = message;
        });
        this.subscriptionCoaColors = this.alertService.getMessageCoaColors().subscribe(function (message) {
            _this.allCoaColors = message;
        });
        this.subscriptionUserCoaColors = this.alertService.getMessageUserCoaColors().subscribe(function (message) {
            _this.userCoaColors = message;
        });
        this.subscriptionLocationid = this.alertService.getMessageLocationid().subscribe(function (message) {
            _this.registerLocationmessage = message;
        });
    }
    WappenComponent.prototype.ngOnInit = function () {
        var state = this.appStore.getState();
        this.user = state.user;
        console.log(this.user);
        this.locationService.lookuptable = state.lookupTable;
        this.timelineLocations = this.locationService.getTimelineLocations();
        this.closestExhibit = state.closestExhibit;
        console.log('ClosestExhibit: ' + this.closestExhibit);
        this.isWeb = this.nativeCommunicationService.isWeb;
        // get parts
        this.transmissionService.getCoaParts();
        // if first time: unlock some. if not, get userCoaParts
        this.transmissionService.getUserCoaParts();
        this.getItemsWappen();
    };
    WappenComponent.prototype.getItemsWappen = function () {
        this.itemsList = [];
        // Escutcheon 
        this.itemsList.push({ id: 1, type: 'shield', name: 'Shield1', task: '' });
        this.itemsList.push({ id: 2, type: 'shield', name: 'Shield2', task: '' });
        this.itemsList.push({ id: 3, type: 'shield', name: 'Shield3', task: '' });
        this.itemsList.push({ id: 4, type: 'shield', name: 'Shield4', task: '' });
        // Charge
        this.itemsList.push({ id: 5, type: 'symbol', name: 'Emblem2', task: 'Switch to Sunthaym’s perspective on any exhibit.' });
        this.itemsList.push({ id: 6, type: 'symbol', name: 'Emblem5', task: 'Have 5 questions right in the Weißkunig game.' });
        this.itemsList.push({ id: 7, type: 'symbol', name: 'Emblem6', task: 'Participate in the Legend Game.' });
        this.itemsList.push({ id: 8, type: 'symbol', name: 'Emblem1', task: 'Create the legend of Klosterneuburg in the Legend Game.' });
        this.itemsList.push({ id: 9, type: 'symbol', name: 'Emblem3', task: 'Attend the audience (unlock all exhibits until throne).' });
        this.itemsList.push({ id: 10, type: 'symbol', name: 'Emblem4', task: 'Participate in the GenVis' });
        // Helmet 
        this.itemsList.push({ id: 11, type: 'helmet', name: 'Helmet1', task: 'Explore the Sunthaym Panels with AR.' });
        this.itemsList.push({ id: 12, type: 'helmet', name: 'Helmet2', task: 'Create any legend in the Legend Game.' });
        this.itemsList.push({ id: 13, type: 'helmet', name: 'Helmet3', task: 'Have 10 questions right in the Weißkunig game.' });
        this.itemsList.push({ id: 14, type: 'helmet', name: 'Helmet4', task: 'Learn more about Maximilian’s death on the upper floor.' });
        // Mantling 
        this.itemsList.push({ id: 15, type: 'mantling', name: 'Mantle1', task: 'Explore the shrine with AR.' });
        this.itemsList.push({ id: 16, type: 'mantling', name: 'Mantle2', task: 'Switch to Till’s perspective on any exhibit.' });
        this.itemsList.push({ id: 15, type: 'mantling', name: 'Mantle3', task: 'Participating in the Weißkunig game.' });
        this.itemsList.push({ id: 16, type: 'mantling', name: 'Mantle4', task: 'Find one special person in the GenVis.' });
    };
    // Check if item is unlocked
    WappenComponent.prototype.isUnlocked = function (item) {
        if (this.unlockedItems.indexOf(item) !== -1) {
            return true;
        }
        return false;
    };
    WappenComponent.prototype.selectShield = function (id) {
        this.selectedShield = id.toString();
        if (this.isUnlocked(this.selectedShield)) {
            this.setShield = id.toString();
        }
    };
    WappenComponent.prototype.selectEmblem = function (id) {
        this.selectedEmblem = id.toString();
        if (this.isUnlocked(this.selectedEmblem)) {
            this.setEmblem = id.toString();
        }
    };
    WappenComponent.prototype.selectHelmet = function (id) {
        this.selectedHelmet = id.toString();
        if (this.isUnlocked(this.selectedHelmet)) {
            this.setHelmet = id.toString();
        }
    };
    WappenComponent.prototype.selectWeapon = function (id) {
        this.selectedWeapon = id.toString();
        if (this.isUnlocked(this.selectedWeapon)) {
            this.setWeapon = id.toString();
        }
    };
    WappenComponent.prototype.selectPrimaryColor = function (color) {
        this.setColorPrimary = color.toString();
    };
    WappenComponent.prototype.selectSecondaryColor = function (color) {
        this.setColorSecondary = color.toString();
    };
    WappenComponent.prototype.displaySettings = function (id) {
        this.selectedShield = this.setShield;
        this.selectedEmblem = this.setEmblem;
        this.selectedHelmet = this.setHelmet;
        this.selectedWeapon = this.setWeapon;
        if (this.settingsContent === id.toString()) {
            if (this.showSettings) {
                this.showSettings = false;
            }
            else {
                this.showSettings = true;
            }
        }
        else {
            this.settingsContent = id.toString();
            this.showSettings = true;
        }
    };
    WappenComponent.prototype.closeWappenSettings = function () {
        this.showSettings = false;
    };
    WappenComponent.prototype.displayHelp = function () {
        this.showHelp = true;
    };
    WappenComponent.prototype.closeHelp = function () {
        this.showHelp = false;
    };
    WappenComponent.prototype.closeWindow = function () {
        var _this = this;
        this.router.navigate(['mainview']).then(function () {
            _this.nativeCommunicationService.sendToNative('Main View', 'print');
        });
    };
    WappenComponent = __decorate([
        Object(_angular_core__WEBPACK_IMPORTED_MODULE_0__["Component"])({
            selector: 'app-wappen',
            template: __webpack_require__(/*! ./wappen.component.html */ "./src/app/components/wappen/wappen.component.html"),
            styles: [__webpack_require__(/*! ./wappen.component.css */ "./src/app/components/wappen/wappen.component.css")]
        }),
        __param(2, Object(_angular_core__WEBPACK_IMPORTED_MODULE_0__["Inject"])('AppStore')),
        __metadata("design:paramtypes", [_services_transmission_service__WEBPACK_IMPORTED_MODULE_9__["TransmissionService"],
            _services_location_service__WEBPACK_IMPORTED_MODULE_2__["LocationService"], Object, _store_actions_UserActions__WEBPACK_IMPORTED_MODULE_3__["UserActions"],
            _store_actions_LocationActions__WEBPACK_IMPORTED_MODULE_4__["LocationActions"],
            _services_native_native_communication_service__WEBPACK_IMPORTED_MODULE_5__["NativeCommunicationService"],
            _services_native_native_response_service__WEBPACK_IMPORTED_MODULE_1__["NativeResponseService"],
            _angular_material__WEBPACK_IMPORTED_MODULE_6__["MatDialog"],
            _angular_router__WEBPACK_IMPORTED_MODULE_8__["Router"],
            _services_alert_service__WEBPACK_IMPORTED_MODULE_7__["AlertService"]])
    ], WappenComponent);
    return WappenComponent;
}());



/***/ }),

/***/ "./src/app/config/ContentTypes.ts":
/*!****************************************!*\
  !*** ./src/app/config/ContentTypes.ts ***!
  \****************************************/
/*! exports provided: TEXT, IMAGE, EVENT */
/***/ (function(module, __webpack_exports__, __webpack_require__) {

"use strict";
__webpack_require__.r(__webpack_exports__);
/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, "TEXT", function() { return TEXT; });
/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, "IMAGE", function() { return IMAGE; });
/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, "EVENT", function() { return EVENT; });
var TEXT = 1;
var IMAGE = 2;
var EVENT = 3;


/***/ }),

/***/ "./src/app/config/ErrorMessageTypes.ts":
/*!*********************************************!*\
  !*** ./src/app/config/ErrorMessageTypes.ts ***!
  \*********************************************/
/*! exports provided: LOST_CONNECTION_TO_GOD, LOST_CONNECTION_TO_EXHIBIT, LOCATION_NOT_FOUND, LOCATION_NOT_CREATED, LOCATION_NOT_UPDATED, OD_NOT_FOUND, OD_NOT_CREATED, OD_NOT_UPDATED, INVALID_TOKEN, LOGIN_FAILED */
/***/ (function(module, __webpack_exports__, __webpack_require__) {

"use strict";
__webpack_require__.r(__webpack_exports__);
/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, "LOST_CONNECTION_TO_GOD", function() { return LOST_CONNECTION_TO_GOD; });
/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, "LOST_CONNECTION_TO_EXHIBIT", function() { return LOST_CONNECTION_TO_EXHIBIT; });
/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, "LOCATION_NOT_FOUND", function() { return LOCATION_NOT_FOUND; });
/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, "LOCATION_NOT_CREATED", function() { return LOCATION_NOT_CREATED; });
/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, "LOCATION_NOT_UPDATED", function() { return LOCATION_NOT_UPDATED; });
/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, "OD_NOT_FOUND", function() { return OD_NOT_FOUND; });
/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, "OD_NOT_CREATED", function() { return OD_NOT_CREATED; });
/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, "OD_NOT_UPDATED", function() { return OD_NOT_UPDATED; });
/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, "INVALID_TOKEN", function() { return INVALID_TOKEN; });
/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, "LOGIN_FAILED", function() { return LOGIN_FAILED; });
var LOST_CONNECTION_TO_GOD = 100;
var LOST_CONNECTION_TO_EXHIBIT = 101;
var LOCATION_NOT_FOUND = 300;
var LOCATION_NOT_CREATED = 301;
var LOCATION_NOT_UPDATED = 302;
var OD_NOT_FOUND = 400;
var OD_NOT_CREATED = 401;
var OD_NOT_UPDATED = 402;
var INVALID_TOKEN = 500;
var LOGIN_FAILED = 501;


/***/ }),

/***/ "./src/app/config/LanguageTypes.ts":
/*!*****************************************!*\
  !*** ./src/app/config/LanguageTypes.ts ***!
  \*****************************************/
/*! exports provided: ENG, DE */
/***/ (function(module, __webpack_exports__, __webpack_require__) {

"use strict";
__webpack_require__.r(__webpack_exports__);
/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, "ENG", function() { return ENG; });
/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, "DE", function() { return DE; });
var ENG = 1;
var DE = 2;


/***/ }),

/***/ "./src/app/config/LocationTypes.ts":
/*!*****************************************!*\
  !*** ./src/app/config/LocationTypes.ts ***!
  \*****************************************/
/*! exports provided: ROOM, ACTIVE_EXHIBIT_ON, ACTIVE_EXHIBBIT_AT, PASSIVE_EXHIBIT, DOOR, ACTIVE_EXHIBIT_BEHAVIOR_AT, ACTIVE_EXHIBIT_BEHAVIOR_ON, INTERACTIVE_EXHIBIT, NOTIFY_EXHIBIT_AT, NOTIFY_EXHIBIT_ON */
/***/ (function(module, __webpack_exports__, __webpack_require__) {

"use strict";
__webpack_require__.r(__webpack_exports__);
/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, "ROOM", function() { return ROOM; });
/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, "ACTIVE_EXHIBIT_ON", function() { return ACTIVE_EXHIBIT_ON; });
/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, "ACTIVE_EXHIBBIT_AT", function() { return ACTIVE_EXHIBBIT_AT; });
/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, "PASSIVE_EXHIBIT", function() { return PASSIVE_EXHIBIT; });
/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, "DOOR", function() { return DOOR; });
/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, "ACTIVE_EXHIBIT_BEHAVIOR_AT", function() { return ACTIVE_EXHIBIT_BEHAVIOR_AT; });
/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, "ACTIVE_EXHIBIT_BEHAVIOR_ON", function() { return ACTIVE_EXHIBIT_BEHAVIOR_ON; });
/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, "INTERACTIVE_EXHIBIT", function() { return INTERACTIVE_EXHIBIT; });
/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, "NOTIFY_EXHIBIT_AT", function() { return NOTIFY_EXHIBIT_AT; });
/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, "NOTIFY_EXHIBIT_ON", function() { return NOTIFY_EXHIBIT_ON; });
var ROOM = 1;
var ACTIVE_EXHIBIT_ON = 2;
var ACTIVE_EXHIBBIT_AT = 3;
var PASSIVE_EXHIBIT = 4;
var DOOR = 5;
var ACTIVE_EXHIBIT_BEHAVIOR_AT = 6;
var ACTIVE_EXHIBIT_BEHAVIOR_ON = 7;
var INTERACTIVE_EXHIBIT = 8;
var NOTIFY_EXHIBIT_AT = 9;
var NOTIFY_EXHIBIT_ON = 10;


/***/ }),

/***/ "./src/app/config/SuccessMessageTypes.ts":
/*!***********************************************!*\
  !*** ./src/app/config/SuccessMessageTypes.ts ***!
  \***********************************************/
/*! exports provided: SUCCESS_OK, SUCCESS_CREATED, SUCCESS_LOGGED_IN, SUCCESS_RECONNECTED_TO_GOD, SUCCESS_RECONNECTED_TO_EXHIBIT, SUCCESS_DISCONNECTED_FROM_EXHIBIT */
/***/ (function(module, __webpack_exports__, __webpack_require__) {

"use strict";
__webpack_require__.r(__webpack_exports__);
/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, "SUCCESS_OK", function() { return SUCCESS_OK; });
/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, "SUCCESS_CREATED", function() { return SUCCESS_CREATED; });
/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, "SUCCESS_LOGGED_IN", function() { return SUCCESS_LOGGED_IN; });
/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, "SUCCESS_RECONNECTED_TO_GOD", function() { return SUCCESS_RECONNECTED_TO_GOD; });
/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, "SUCCESS_RECONNECTED_TO_EXHIBIT", function() { return SUCCESS_RECONNECTED_TO_EXHIBIT; });
/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, "SUCCESS_DISCONNECTED_FROM_EXHIBIT", function() { return SUCCESS_DISCONNECTED_FROM_EXHIBIT; });
var SUCCESS_OK = 200;
var SUCCESS_CREATED = 201;
var SUCCESS_LOGGED_IN = 202;
var SUCCESS_RECONNECTED_TO_GOD = 299;
var SUCCESS_RECONNECTED_TO_EXHIBIT = 298;
var SUCCESS_DISCONNECTED_FROM_EXHIBIT = 297;


/***/ }),

/***/ "./src/app/helper/exhibit-socket-helper.ts":
/*!*************************************************!*\
  !*** ./src/app/helper/exhibit-socket-helper.ts ***!
  \*************************************************/
/*! exports provided: ExhibitSocketHelper */
/***/ (function(module, __webpack_exports__, __webpack_require__) {

"use strict";
__webpack_require__.r(__webpack_exports__);
/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, "ExhibitSocketHelper", function() { return ExhibitSocketHelper; });
/* harmony import */ var ngx_socket_io__WEBPACK_IMPORTED_MODULE_0__ = __webpack_require__(/*! ngx-socket-io */ "./node_modules/ngx-socket-io/index.js");
var __extends = (undefined && undefined.__extends) || (function () {
    var extendStatics = function (d, b) {
        extendStatics = Object.setPrototypeOf ||
            ({ __proto__: [] } instanceof Array && function (d, b) { d.__proto__ = b; }) ||
            function (d, b) { for (var p in b) if (b.hasOwnProperty(p)) d[p] = b[p]; };
        return extendStatics(d, b);
    };
    return function (d, b) {
        extendStatics(d, b);
        function __() { this.constructor = d; }
        d.prototype = b === null ? Object.create(b) : (__.prototype = b.prototype, new __());
    };
})();

var ExhibitSocketHelper = /** @class */ (function (_super) {
    __extends(ExhibitSocketHelper, _super);
    function ExhibitSocketHelper(exhibitURL) {
        return _super.call(this, { url: exhibitURL, options: {} }) || this;
    }
    return ExhibitSocketHelper;
}(ngx_socket_io__WEBPACK_IMPORTED_MODULE_0__["Socket"]));



/***/ }),

/***/ "./src/app/services/alert.service.ts":
/*!*******************************************!*\
  !*** ./src/app/services/alert.service.ts ***!
  \*******************************************/
/*! exports provided: AlertService */
/***/ (function(module, __webpack_exports__, __webpack_require__) {

"use strict";
__webpack_require__.r(__webpack_exports__);
/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, "AlertService", function() { return AlertService; });
/* harmony import */ var _angular_core__WEBPACK_IMPORTED_MODULE_0__ = __webpack_require__(/*! @angular/core */ "./node_modules/@angular/core/fesm5/core.js");
/* harmony import */ var rxjs__WEBPACK_IMPORTED_MODULE_1__ = __webpack_require__(/*! rxjs */ "./node_modules/rxjs/_esm5/index.js");
var __decorate = (undefined && undefined.__decorate) || function (decorators, target, key, desc) {
    var c = arguments.length, r = c < 3 ? target : desc === null ? desc = Object.getOwnPropertyDescriptor(target, key) : desc, d;
    if (typeof Reflect === "object" && typeof Reflect.decorate === "function") r = Reflect.decorate(decorators, target, key, desc);
    else for (var i = decorators.length - 1; i >= 0; i--) if (d = decorators[i]) r = (c < 3 ? d(r) : c > 3 ? d(target, key, r) : d(target, key)) || r;
    return c > 3 && r && Object.defineProperty(target, key, r), r;
};


var AlertService = /** @class */ (function () {
    function AlertService() {
        this.subjectAlert = new rxjs__WEBPACK_IMPORTED_MODULE_1__["Subject"]();
        this.subjectResponse = new rxjs__WEBPACK_IMPORTED_MODULE_1__["Subject"]();
        this.subjectLocationId = new rxjs__WEBPACK_IMPORTED_MODULE_1__["Subject"]();
        this.subjectNativeSettingCheck = new rxjs__WEBPACK_IMPORTED_MODULE_1__["Subject"]();
        this.subjectNativeWifiSettingCheckResult = new rxjs__WEBPACK_IMPORTED_MODULE_1__["Subject"]();
        this.subjectNativeBluetoothSettingCheckResult = new rxjs__WEBPACK_IMPORTED_MODULE_1__["Subject"]();
        this.subjectNativeBackbuttonTimeline = new rxjs__WEBPACK_IMPORTED_MODULE_1__["Subject"]();
        this.subjectNativeBackbuttonStart = new rxjs__WEBPACK_IMPORTED_MODULE_1__["Subject"]();
        this.subjectWrongLoginCheck = new rxjs__WEBPACK_IMPORTED_MODULE_1__["Subject"]();
        this.subjectLocationBackId = new rxjs__WEBPACK_IMPORTED_MODULE_1__["Subject"]();
        this.subjectExistingCredentials = new rxjs__WEBPACK_IMPORTED_MODULE_1__["Subject"]();
        this.subjectUsernameRegisterCheckResult = new rxjs__WEBPACK_IMPORTED_MODULE_1__["Subject"]();
        this.subjectEmailRegisterCheckResult = new rxjs__WEBPACK_IMPORTED_MODULE_1__["Subject"]();
        this.subjectExistingCredentialsRealUser = new rxjs__WEBPACK_IMPORTED_MODULE_1__["Subject"]();
        this.subjectChangedCred = new rxjs__WEBPACK_IMPORTED_MODULE_1__["Subject"]();
        this.subjectExistingCredentialsOnChange = new rxjs__WEBPACK_IMPORTED_MODULE_1__["Subject"]();
        this.subjectUserOrEmailRegisterCheck = new rxjs__WEBPACK_IMPORTED_MODULE_1__["Subject"]();
        this.subjectCoaParts = new rxjs__WEBPACK_IMPORTED_MODULE_1__["Subject"]();
        this.subjectUserCoaParts = new rxjs__WEBPACK_IMPORTED_MODULE_1__["Subject"]();
        this.subjectCoaColors = new rxjs__WEBPACK_IMPORTED_MODULE_1__["Subject"]();
        this.subjectUserCoaColors = new rxjs__WEBPACK_IMPORTED_MODULE_1__["Subject"]();
    }
    AlertService.prototype.sendMessage = function (message) {
        this.subjectAlert.next(message);
    };
    AlertService.prototype.getMessage = function () {
        return this.subjectAlert.asObservable();
    };
    AlertService.prototype.sendMessageResponse = function (message) {
        this.subjectResponse.next(message);
    };
    AlertService.prototype.getMessageResponse = function () {
        return this.subjectResponse.asObservable();
    };
    AlertService.prototype.sendMessageLocationid = function (message) {
        this.subjectLocationId.next(message);
    };
    AlertService.prototype.getMessageLocationid = function () {
        return this.subjectLocationId.asObservable();
    };
    AlertService.prototype.sendMessageNativeSettingCheck = function (message) {
        this.subjectNativeSettingCheck.next(message);
    };
    AlertService.prototype.getMessageNativeSettingCheck = function () {
        return this.subjectNativeSettingCheck.asObservable();
    };
    AlertService.prototype.sendMessageNativeBluetoothSettingCheckResult = function (message) {
        this.subjectNativeBluetoothSettingCheckResult.next(message);
    };
    AlertService.prototype.getMessageNativeBluetoothSettingCheckResult = function () {
        return this.subjectNativeBluetoothSettingCheckResult.asObservable();
    };
    AlertService.prototype.sendMessageNativeWifiSettingCheckResult = function (message) {
        this.subjectNativeWifiSettingCheckResult.next(message);
    };
    AlertService.prototype.getMessageNativeWifiSettingCheckResult = function () {
        return this.subjectNativeWifiSettingCheckResult.asObservable();
    };
    AlertService.prototype.sendMessageNativeBackbuttonTimeline = function () {
        this.subjectNativeBackbuttonTimeline.next();
    };
    AlertService.prototype.getMessageNativeBackbuttonTimeline = function () {
        return this.subjectNativeBackbuttonTimeline.asObservable();
    };
    AlertService.prototype.sendMessageNativeBackbuttonStart = function () {
        this.subjectNativeBackbuttonStart.next();
    };
    AlertService.prototype.getMessageNativeBackbuttonStart = function () {
        return this.subjectNativeBackbuttonStart.asObservable();
    };
    AlertService.prototype.setMessageWrongLoginCheck = function (message) {
        this.subjectWrongLoginCheck.next(message);
    };
    AlertService.prototype.getMessageWrongLoginCheck = function () {
        return this.subjectWrongLoginCheck.asObservable();
    };
    AlertService.prototype.sendMessageExistingCredentials = function (message) {
        this.subjectExistingCredentials.next(message);
    };
    AlertService.prototype.getMessageExistingCredentials = function () {
        return this.subjectExistingCredentials.asObservable();
    };
    AlertService.prototype.sendUsernameRegisterCheckResult = function (message) {
        this.subjectUsernameRegisterCheckResult.next(message);
    };
    AlertService.prototype.getUsernameRegisterCheckResult = function () {
        return this.subjectUsernameRegisterCheckResult.asObservable();
    };
    AlertService.prototype.sendEmailRegisterCheckResult = function (message) {
        this.subjectEmailRegisterCheckResult.next(message);
    };
    AlertService.prototype.getEmailRegisterCheckResult = function () {
        return this.subjectEmailRegisterCheckResult.asObservable();
    };
    AlertService.prototype.sendMessageExistingCredentialsRealUser = function (message) {
        this.subjectExistingCredentialsRealUser.next(message);
    };
    AlertService.prototype.getMessageExistingCredentialsRealUser = function () {
        return this.subjectExistingCredentialsRealUser.asObservable();
    };
    AlertService.prototype.sendMessageChangedCred = function (message) {
        this.subjectChangedCred.next(message);
    };
    AlertService.prototype.getMessageChangedCred = function () {
        return this.subjectChangedCred.asObservable();
    };
    AlertService.prototype.sendMessageExistingCredentialsOnChange = function (message) {
        this.subjectExistingCredentialsOnChange.next(message);
    };
    AlertService.prototype.getMessageExistingCredentialsOnChange = function () {
        return this.subjectExistingCredentialsOnChange.asObservable();
    };
    AlertService.prototype.sendMessageUserOrEmailRegisterCheck = function (message) {
        this.subjectUserOrEmailRegisterCheck.next(message);
    };
    AlertService.prototype.getMessageUserOrEmailRegisterCheck = function () {
        return this.subjectUserOrEmailRegisterCheck.asObservable();
    };
    AlertService.prototype.sendMessageCoaParts = function (message) {
        this.subjectCoaParts.next(message);
    };
    AlertService.prototype.getMessageCoaParts = function () {
        return this.subjectCoaParts.asObservable();
    };
    AlertService.prototype.sendMessageUserCoaParts = function (message) {
        this.subjectUserCoaParts.next(message);
    };
    AlertService.prototype.getMessageUserCoaParts = function () {
        return this.subjectUserCoaParts.asObservable();
    };
    AlertService.prototype.sendMessageCoaColors = function (message) {
        this.subjectCoaColors.next(message);
    };
    AlertService.prototype.getMessageCoaColors = function () {
        return this.subjectCoaColors.asObservable();
    };
    AlertService.prototype.sendMessageUserCoaColors = function (message) {
        this.subjectUserCoaColors.next(message);
    };
    AlertService.prototype.getMessageUserCoaColors = function () {
        return this.subjectUserCoaColors.asObservable();
    };
    AlertService = __decorate([
        Object(_angular_core__WEBPACK_IMPORTED_MODULE_0__["Injectable"])()
    ], AlertService);
    return AlertService;
}());



/***/ }),

/***/ "./src/app/services/exhibit/exhibit-socket.service.ts":
/*!************************************************************!*\
  !*** ./src/app/services/exhibit/exhibit-socket.service.ts ***!
  \************************************************************/
/*! exports provided: ExhibitSocketService */
/***/ (function(module, __webpack_exports__, __webpack_require__) {

"use strict";
__webpack_require__.r(__webpack_exports__);
/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, "ExhibitSocketService", function() { return ExhibitSocketService; });
/* harmony import */ var _angular_core__WEBPACK_IMPORTED_MODULE_0__ = __webpack_require__(/*! @angular/core */ "./node_modules/@angular/core/fesm5/core.js");
/* harmony import */ var _helper_exhibit_socket_helper__WEBPACK_IMPORTED_MODULE_1__ = __webpack_require__(/*! ../../helper/exhibit-socket-helper */ "./src/app/helper/exhibit-socket-helper.ts");
var __decorate = (undefined && undefined.__decorate) || function (decorators, target, key, desc) {
    var c = arguments.length, r = c < 3 ? target : desc === null ? desc = Object.getOwnPropertyDescriptor(target, key) : desc, d;
    if (typeof Reflect === "object" && typeof Reflect.decorate === "function") r = Reflect.decorate(decorators, target, key, desc);
    else for (var i = decorators.length - 1; i >= 0; i--) if (d = decorators[i]) r = (c < 3 ? d(r) : c > 3 ? d(target, key, r) : d(target, key)) || r;
    return c > 3 && r && Object.defineProperty(target, key, r), r;
};


var ExhibitSocketService = /** @class */ (function () {
    function ExhibitSocketService() {
    }
    ExhibitSocketService.prototype.openNewExhibitConnection = function (url) {
        if (this._connection) {
            this._connection.disconnect();
        }
        this._connection = new _helper_exhibit_socket_helper__WEBPACK_IMPORTED_MODULE_1__["ExhibitSocketHelper"](url);
    };
    Object.defineProperty(ExhibitSocketService.prototype, "connection", {
        get: function () {
            return this._connection;
        },
        enumerable: true,
        configurable: true
    });
    ExhibitSocketService = __decorate([
        Object(_angular_core__WEBPACK_IMPORTED_MODULE_0__["Injectable"])()
    ], ExhibitSocketService);
    return ExhibitSocketService;
}());



/***/ }),

/***/ "./src/app/services/exhibit/exhibit.service.ts":
/*!*****************************************************!*\
  !*** ./src/app/services/exhibit/exhibit.service.ts ***!
  \*****************************************************/
/*! exports provided: ExhibitService */
/***/ (function(module, __webpack_exports__, __webpack_require__) {

"use strict";
__webpack_require__.r(__webpack_exports__);
/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, "ExhibitService", function() { return ExhibitService; });
/* harmony import */ var _angular_core__WEBPACK_IMPORTED_MODULE_0__ = __webpack_require__(/*! @angular/core */ "./node_modules/@angular/core/fesm5/core.js");
/* harmony import */ var _angular_router__WEBPACK_IMPORTED_MODULE_1__ = __webpack_require__(/*! @angular/router */ "./node_modules/@angular/router/fesm5/router.js");
/* harmony import */ var _WindowRef__WEBPACK_IMPORTED_MODULE_2__ = __webpack_require__(/*! ../../WindowRef */ "./src/app/WindowRef.ts");
/* harmony import */ var _location_service__WEBPACK_IMPORTED_MODULE_3__ = __webpack_require__(/*! ../location.service */ "./src/app/services/location.service.ts");
/* harmony import */ var _exhibit_socket_service__WEBPACK_IMPORTED_MODULE_4__ = __webpack_require__(/*! ./exhibit-socket.service */ "./src/app/services/exhibit/exhibit-socket.service.ts");
/* harmony import */ var _god_god_service__WEBPACK_IMPORTED_MODULE_5__ = __webpack_require__(/*! ../god/god.service */ "./src/app/services/god/god.service.ts");
/* harmony import */ var _store_actions_LocationActions__WEBPACK_IMPORTED_MODULE_6__ = __webpack_require__(/*! ../../store/actions/LocationActions */ "./src/app/store/actions/LocationActions.ts");
/* harmony import */ var _store_actions_UserActions__WEBPACK_IMPORTED_MODULE_7__ = __webpack_require__(/*! ../../store/actions/UserActions */ "./src/app/store/actions/UserActions.ts");
/* harmony import */ var _native_native_communication_service__WEBPACK_IMPORTED_MODULE_8__ = __webpack_require__(/*! ../native/native-communication.service */ "./src/app/services/native/native-communication.service.ts");
/* harmony import */ var _store_actions_StatusActions__WEBPACK_IMPORTED_MODULE_9__ = __webpack_require__(/*! ../../store/actions/StatusActions */ "./src/app/store/actions/StatusActions.ts");
/* harmony import */ var _config_SuccessMessageTypes__WEBPACK_IMPORTED_MODULE_10__ = __webpack_require__(/*! ../../config/SuccessMessageTypes */ "./src/app/config/SuccessMessageTypes.ts");
/* harmony import */ var _config_ErrorMessageTypes__WEBPACK_IMPORTED_MODULE_11__ = __webpack_require__(/*! ../../config/ErrorMessageTypes */ "./src/app/config/ErrorMessageTypes.ts");
var __decorate = (undefined && undefined.__decorate) || function (decorators, target, key, desc) {
    var c = arguments.length, r = c < 3 ? target : desc === null ? desc = Object.getOwnPropertyDescriptor(target, key) : desc, d;
    if (typeof Reflect === "object" && typeof Reflect.decorate === "function") r = Reflect.decorate(decorators, target, key, desc);
    else for (var i = decorators.length - 1; i >= 0; i--) if (d = decorators[i]) r = (c < 3 ? d(r) : c > 3 ? d(target, key, r) : d(target, key)) || r;
    return c > 3 && r && Object.defineProperty(target, key, r), r;
};
var __metadata = (undefined && undefined.__metadata) || function (k, v) {
    if (typeof Reflect === "object" && typeof Reflect.metadata === "function") return Reflect.metadata(k, v);
};
var __param = (undefined && undefined.__param) || function (paramIndex, decorator) {
    return function (target, key) { decorator(target, key, paramIndex); }
};












var ExhibitService = /** @class */ (function () {
    function ExhibitService(router, winRef, locationService, socket, socketGod, appStore, locationActions, userActions, statusActions, utilitiesService) {
        this.router = router;
        this.winRef = winRef;
        this.locationService = locationService;
        this.socket = socket;
        this.socketGod = socketGod;
        this.appStore = appStore;
        this.locationActions = locationActions;
        this.userActions = userActions;
        this.statusActions = statusActions;
        this.utilitiesService = utilitiesService;
    }
    ExhibitService.prototype.establishExhibitConnection = function (url) {
        var _this = this;
        // console.log(url);
        // const localURL = 'http://localhost:8100/';
        this.socket.openNewExhibitConnection(url);
        // this.socket.openNewExhibitConnection(url);
        this.socket.connection.on('connected', function () {
            _this.appStore.dispatch(_this.locationActions.changeConnectedExhibit(true));
            var state = _this.appStore.getState();
            if (state.successMessage && state.successMessage.code === _config_SuccessMessageTypes__WEBPACK_IMPORTED_MODULE_10__["SUCCESS_DISCONNECTED_FROM_EXHIBIT"]) {
                _this.appStore.dispatch(_this.statusActions.changeSuccessMessage(undefined));
            }
        });
        this.socket.connection.on('reconnect', function () {
            _this.connectOD();
        });
        this.socket.connection.on('disconnect', function () {
            // const error: Message = {code: ErrorTypes.LOST_CONNECTION_TO_EXHIBIT, message: 'Lost connection to Exhibit'};
            // this.appStore.dispatch(this.statusActions.changeErrorMessage(error));
            var currLoc = _this.locationService.currentLocation.value;
            var state = _this.appStore.getState();
            if ((!state.successMessage) || (state.successMessage && state.successMessage.code !==
                _config_SuccessMessageTypes__WEBPACK_IMPORTED_MODULE_10__["SUCCESS_DISCONNECTED_FROM_EXHIBIT"])) {
                var errorMessage = { message: 'You were disconnected from the Exhibit', code: _config_ErrorMessageTypes__WEBPACK_IMPORTED_MODULE_11__["LOST_CONNECTION_TO_EXHIBIT"] };
                _this.appStore.dispatch(_this.statusActions.changeErrorMessage(errorMessage));
            }
            if (currLoc) {
                _this.transmitGodDisconnect(currLoc);
            }
        });
    };
    ExhibitService.prototype.transmitGodDisconnect = function (location) {
        this.socketGod.disconnectedFromExhibit(location.parentId, location.id);
        this.appStore.dispatch(this.locationActions.changeConnectedExhibit(false));
        this.appStore.dispatch(this.locationActions.changeAtExhibitParentId(0));
        this.appStore.dispatch(this.locationActions.changeOnExhibit(false));
        this.appStore.dispatch(this.locationActions.changeClosestExhibit(location.parentId));
    };
    ExhibitService.prototype.connectOD = function () {
        var _this = this;
        var state = this.appStore.getState();
        var user = state.user;
        var location = this.locationService.currentLocation.value;
        if (!user) {
            return;
        }
        this.socket.connection.emit('connectOD', { user: user, location: location });
        this.socket.connection.on('connectODResult', function (result) {
            _this.utilitiesService.sendToNative(result, 'print');
            if (result === 'SUCCESS') {
                _this.socket.connection.removeAllListeners('connectODResult');
                _this.startAutoResponder();
            }
            else {
                _this.socket.connection.disconnect();
            }
        });
    };
    ExhibitService.prototype.startAutoResponder = function () {
        var _this = this;
        this.socket.connection.on('exhibitStatusCheck', function () {
            console.log('AutoResponderCheck');
            _this.utilitiesService.sendToNative('AutoResponderCheck', 'print');
            var user = _this.appStore.getState().user;
            _this.socket.connection.emit('exhibitStatusCheckResult', user);
        });
    };
    ExhibitService.prototype.sendMessage = function () {
        var user = this.appStore.getState().user;
        this.socket.connection.emit('sendMessage', { user: user, message: 'Na' });
    };
    ExhibitService.prototype.disconnect = function () {
        var _this = this;
        var state = this.appStore.getState();
        var user = state.user;
        this.socket.connection.emit('closeConnection', user);
        this.socket.connection.on('closeConnectionResult', function (result) {
            if (result === 'SUCCESS') {
                _this.appStore.dispatch(_this.statusActions.changeSuccessMessage({ message: 'You decided to quit',
                    code: _config_SuccessMessageTypes__WEBPACK_IMPORTED_MODULE_10__["SUCCESS_DISCONNECTED_FROM_EXHIBIT"] }));
                _this.socket.connection.disconnect();
                _this.appStore.dispatch(_this.locationActions.changeConnectedExhibit(false));
                // const currLoc = this.locationService.currentLocation.value;
                // this.socketGod.disconnectedFromExhibit(currLoc.parentId, currLoc.id);
            }
            _this.socket.connection.removeAllListeners('closeConnectionResult');
            _this.socket.connection.removeAllListeners('exhibitStatusCheck');
        });
    };
    ExhibitService = __decorate([
        Object(_angular_core__WEBPACK_IMPORTED_MODULE_0__["Injectable"])(),
        __param(5, Object(_angular_core__WEBPACK_IMPORTED_MODULE_0__["Inject"])('AppStore')),
        __metadata("design:paramtypes", [_angular_router__WEBPACK_IMPORTED_MODULE_1__["Router"],
            _WindowRef__WEBPACK_IMPORTED_MODULE_2__["WindowRef"],
            _location_service__WEBPACK_IMPORTED_MODULE_3__["LocationService"],
            _exhibit_socket_service__WEBPACK_IMPORTED_MODULE_4__["ExhibitSocketService"],
            _god_god_service__WEBPACK_IMPORTED_MODULE_5__["GodService"], Object, _store_actions_LocationActions__WEBPACK_IMPORTED_MODULE_6__["LocationActions"],
            _store_actions_UserActions__WEBPACK_IMPORTED_MODULE_7__["UserActions"],
            _store_actions_StatusActions__WEBPACK_IMPORTED_MODULE_9__["StatusActions"],
            _native_native_communication_service__WEBPACK_IMPORTED_MODULE_8__["NativeCommunicationService"]])
    ], ExhibitService);
    return ExhibitService;
}());



/***/ }),

/***/ "./src/app/services/god/god-socket.service.ts":
/*!****************************************************!*\
  !*** ./src/app/services/god/god-socket.service.ts ***!
  \****************************************************/
/*! exports provided: GodSocketService */
/***/ (function(module, __webpack_exports__, __webpack_require__) {

"use strict";
__webpack_require__.r(__webpack_exports__);
/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, "GodSocketService", function() { return GodSocketService; });
/* harmony import */ var _angular_core__WEBPACK_IMPORTED_MODULE_0__ = __webpack_require__(/*! @angular/core */ "./node_modules/@angular/core/fesm5/core.js");
/* harmony import */ var ngx_socket_io__WEBPACK_IMPORTED_MODULE_1__ = __webpack_require__(/*! ngx-socket-io */ "./node_modules/ngx-socket-io/index.js");
/* harmony import */ var _environments_environment__WEBPACK_IMPORTED_MODULE_2__ = __webpack_require__(/*! ../../../environments/environment */ "./src/environments/environment.ts");
var __extends = (undefined && undefined.__extends) || (function () {
    var extendStatics = function (d, b) {
        extendStatics = Object.setPrototypeOf ||
            ({ __proto__: [] } instanceof Array && function (d, b) { d.__proto__ = b; }) ||
            function (d, b) { for (var p in b) if (b.hasOwnProperty(p)) d[p] = b[p]; };
        return extendStatics(d, b);
    };
    return function (d, b) {
        extendStatics(d, b);
        function __() { this.constructor = d; }
        d.prototype = b === null ? Object.create(b) : (__.prototype = b.prototype, new __());
    };
})();
var __decorate = (undefined && undefined.__decorate) || function (decorators, target, key, desc) {
    var c = arguments.length, r = c < 3 ? target : desc === null ? desc = Object.getOwnPropertyDescriptor(target, key) : desc, d;
    if (typeof Reflect === "object" && typeof Reflect.decorate === "function") r = Reflect.decorate(decorators, target, key, desc);
    else for (var i = decorators.length - 1; i >= 0; i--) if (d = decorators[i]) r = (c < 3 ? d(r) : c > 3 ? d(target, key, r) : d(target, key)) || r;
    return c > 3 && r && Object.defineProperty(target, key, r), r;
};
var __metadata = (undefined && undefined.__metadata) || function (k, v) {
    if (typeof Reflect === "object" && typeof Reflect.metadata === "function") return Reflect.metadata(k, v);
};



var GodSocketService = /** @class */ (function (_super) {
    __extends(GodSocketService, _super);
    function GodSocketService() {
        return _super.call(this, { url: _environments_environment__WEBPACK_IMPORTED_MODULE_2__["environment"].godURL }) || this;
    }
    GodSocketService = __decorate([
        Object(_angular_core__WEBPACK_IMPORTED_MODULE_0__["Injectable"])(),
        __metadata("design:paramtypes", [])
    ], GodSocketService);
    return GodSocketService;
}(ngx_socket_io__WEBPACK_IMPORTED_MODULE_1__["Socket"]));



/***/ }),

/***/ "./src/app/services/god/god.service.ts":
/*!*********************************************!*\
  !*** ./src/app/services/god/god.service.ts ***!
  \*********************************************/
/*! exports provided: GodService */
/***/ (function(module, __webpack_exports__, __webpack_require__) {

"use strict";
__webpack_require__.r(__webpack_exports__);
/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, "GodService", function() { return GodService; });
/* harmony import */ var _angular_core__WEBPACK_IMPORTED_MODULE_0__ = __webpack_require__(/*! @angular/core */ "./node_modules/@angular/core/fesm5/core.js");
/* harmony import */ var _angular_router__WEBPACK_IMPORTED_MODULE_1__ = __webpack_require__(/*! @angular/router */ "./node_modules/@angular/router/fesm5/router.js");
/* harmony import */ var _WindowRef__WEBPACK_IMPORTED_MODULE_2__ = __webpack_require__(/*! ../../WindowRef */ "./src/app/WindowRef.ts");
/* harmony import */ var _location_service__WEBPACK_IMPORTED_MODULE_3__ = __webpack_require__(/*! ../location.service */ "./src/app/services/location.service.ts");
/* harmony import */ var _god_socket_service__WEBPACK_IMPORTED_MODULE_4__ = __webpack_require__(/*! ./god-socket.service */ "./src/app/services/god/god-socket.service.ts");
/* harmony import */ var _store_actions_LocationActions__WEBPACK_IMPORTED_MODULE_5__ = __webpack_require__(/*! ../../store/actions/LocationActions */ "./src/app/store/actions/LocationActions.ts");
/* harmony import */ var _store_actions_UserActions__WEBPACK_IMPORTED_MODULE_6__ = __webpack_require__(/*! ../../store/actions/UserActions */ "./src/app/store/actions/UserActions.ts");
/* harmony import */ var _store_actions_StatusActions__WEBPACK_IMPORTED_MODULE_7__ = __webpack_require__(/*! ../../store/actions/StatusActions */ "./src/app/store/actions/StatusActions.ts");
/* harmony import */ var _native_native_communication_service__WEBPACK_IMPORTED_MODULE_8__ = __webpack_require__(/*! ../native/native-communication.service */ "./src/app/services/native/native-communication.service.ts");
/* harmony import */ var _alert_service__WEBPACK_IMPORTED_MODULE_9__ = __webpack_require__(/*! ../alert.service */ "./src/app/services/alert.service.ts");
/* harmony import */ var _config_ErrorMessageTypes__WEBPACK_IMPORTED_MODULE_10__ = __webpack_require__(/*! ../../config/ErrorMessageTypes */ "./src/app/config/ErrorMessageTypes.ts");
/* harmony import */ var _config_SuccessMessageTypes__WEBPACK_IMPORTED_MODULE_11__ = __webpack_require__(/*! ../../config/SuccessMessageTypes */ "./src/app/config/SuccessMessageTypes.ts");
var __decorate = (undefined && undefined.__decorate) || function (decorators, target, key, desc) {
    var c = arguments.length, r = c < 3 ? target : desc === null ? desc = Object.getOwnPropertyDescriptor(target, key) : desc, d;
    if (typeof Reflect === "object" && typeof Reflect.decorate === "function") r = Reflect.decorate(decorators, target, key, desc);
    else for (var i = decorators.length - 1; i >= 0; i--) if (d = decorators[i]) r = (c < 3 ? d(r) : c > 3 ? d(target, key, r) : d(target, key)) || r;
    return c > 3 && r && Object.defineProperty(target, key, r), r;
};
var __metadata = (undefined && undefined.__metadata) || function (k, v) {
    if (typeof Reflect === "object" && typeof Reflect.metadata === "function") return Reflect.metadata(k, v);
};
var __param = (undefined && undefined.__param) || function (paramIndex, decorator) {
    return function (target, key) { decorator(target, key, paramIndex); }
};












var GodService = /** @class */ (function () {
    function GodService(router, winRef, locationService, socket, store, locationActions, userActions, statusActions, utilitiesService, alertService) {
        var _this = this;
        this.router = router;
        this.winRef = winRef;
        this.locationService = locationService;
        this.socket = socket;
        this.store = store;
        this.locationActions = locationActions;
        this.userActions = userActions;
        this.statusActions = statusActions;
        this.utilitiesService = utilitiesService;
        this.alertService = alertService;
        this.socket.on('news', function (msg) {
            _this.utilitiesService.sendToNative(msg, 'print');
        });
        this.socket.on('disconnect', function () {
            var error = { code: _config_ErrorMessageTypes__WEBPACK_IMPORTED_MODULE_10__["LOST_CONNECTION_TO_GOD"], message: 'Lost connection to Server' };
            _this.store.dispatch(_this.statusActions.changeErrorMessage(error));
        });
        this.socket.on('reconnect', function () {
            var success = { code: _config_SuccessMessageTypes__WEBPACK_IMPORTED_MODULE_11__["SUCCESS_RECONNECTED_TO_GOD"], message: 'Reconnected to Server' };
            _this.store.dispatch(_this.statusActions.changeSuccessMessage(success));
        });
    }
    GodService.prototype.registerOD = function (data) {
        var _this = this;
        this.socket.emit('registerOD', data);
        this.socket.on('registerODResult', function (result) {
            _this.utilitiesService.sendToNative(result, 'print');
            var res = result.data;
            var message = result.message;
            if (message.code > 299) {
                _this.store.dispatch(_this.statusActions.changeErrorMessage(message));
                return;
            }
            _this.store.dispatch(_this.userActions.changeUser(res.user));
            _this.store.dispatch(_this.userActions.changeLookupTable(res.locations));
            _this.store.dispatch(_this.userActions.changeToken(res.token));
            _this.store.dispatch(_this.statusActions.changeLoggedIn(true));
            _this.locationService.setToStartPoint();
            _this.router.navigate(['/mainview']).then(function () {
                // send success to native & start beacon scan
                _this.utilitiesService.sendToNative('success', 'registerOD');
            });
            _this.socket.removeAllListeners('registerODResult');
        });
    };
    GodService.prototype.registerODGuest = function (data) {
        var _this = this;
        this.socket.emit('registerODGuest', data);
        this.socket.on('registerODGuestResult', function (result) {
            var res = result.data;
            var message = result.message;
            if (message.code > 299) {
                _this.store.dispatch(_this.statusActions.changeErrorMessage(message));
                return;
            }
            _this.store.dispatch(_this.userActions.changeUser(res.user));
            _this.store.dispatch(_this.userActions.changeLookupTable(res.locations));
            _this.store.dispatch(_this.userActions.changeToken(res.token));
            _this.store.dispatch(_this.statusActions.changeLoggedIn(true));
            _this.locationService.setToStartPoint();
            _this.router.navigate(['/mainview']).then(function () {
                _this.utilitiesService.sendToNative('success', 'registerOD');
            });
            _this.socket.removeAllListeners('registerODGuestResult');
        });
    };
    GodService.prototype.registerODGuestToReal = function (data) {
        var _this = this;
        console.log('ODGuestToReal before emit');
        this.socket.emit('makeToRealUser', data);
        this.socket.on('makeToRealUserResult', function (result) {
            _this.utilitiesService.sendToNative(result, 'print');
            var res = result.data;
            var message = result.message;
            if (message.code > 299) {
                _this.store.dispatch(_this.statusActions.changeErrorMessage(message));
                return;
            }
            _this.store.dispatch(_this.userActions.changeUser(res.user));
            // this.store.dispatch(this.userActions.changeLookupTable(res.locations));
            _this.store.dispatch(_this.userActions.changeToken(res.token));
            // this.store.dispatch(this.statusActions.changeLoggedIn(true));
            _this.locationService.setToStartPoint();
            _this.router.navigate(['/mainview']).then(function () {
            });
            _this.socket.removeAllListeners('makeToRealUserResult');
        });
    };
    GodService.prototype.registerLocation = function (id, dismissed) {
        var _this = this;
        var state = this.store.getState();
        var user = state.user;
        this.socket.emit('registerLocation', { location: id, user: user.id, dismissed: dismissed });
        this.socket.on('registerLocationResult', function (result) {
            var loc = result.data.location;
            var dis = result.data.dismissed;
            var message = result.message;
            if (message.code > 299) {
                _this.store.dispatch(_this.statusActions.changeErrorMessage(message));
                _this.utilitiesService.sendToNative('RegisterLocation: FAILED', 'print');
                return;
            }
            if (dis === false) {
                _this.locationService.updateCurrentLocation(loc);
                _this.utilitiesService.sendToNative('New Location is ' + _this.locationService.currentLocation, 'print');
                var currLoc = _this.locationService.currentLocation.value;
                _this.router.navigate([currLoc.contentURL]).then(function () { });
            }
            _this.socket.removeAllListeners('registerLocationResult');
        });
    };
    GodService.prototype.registerTimelineUpdate = function (id) {
        var _this = this;
        var state = this.store.getState();
        var user = state.user;
        this.socket.emit('registerTimelineUpdate', { location: id, user: user.id });
        this.socket.on('registerTimelineUpdateResult', function (result) {
            if (result.data) {
                var lookuptable = result.data.locations;
                var message = result.message;
                if (message.code > 299) {
                    _this.store.dispatch(_this.statusActions.changeErrorMessage(message));
                    _this.utilitiesService.sendToNative('RegisterTimelineUpdate: FAILED', 'print');
                    return;
                }
                _this.utilitiesService.sendToNative('success', 'triggerSignal');
                _this.store.dispatch(_this.userActions.changeLookupTable(lookuptable));
                // TODO: TRIGGER SCROLL HERE
                var data = { location: id };
                _this.alertService.sendMessageLocationid(data);
                var elm = document.getElementById('ghostScrollbutton');
                elm.click();
            }
            _this.socket.removeAllListeners('registerTimelineUpdateResult');
        });
    };
    GodService.prototype.registerLocationLike = function (location, like) {
        var _this = this;
        var state = this.store.getState();
        var user = state.user;
        this.socket.emit('registerLocationLike', { location: location.id, like: like, user: user.id });
        this.socket.on('registerLocationLikeResult', function (result) {
            var res = result.data;
            var message = result.message;
            _this.store.dispatch(_this.userActions.changeLookupTable(res.locations));
            var currLoc = _this.locationService.currentLocation.value;
            _this.locationService.updateCurrentLocation(currLoc.id);
            if (message.code > 299) {
                _this.store.dispatch(_this.statusActions.changeErrorMessage(message));
                return;
            }
            _this.socket.removeAllListeners('registerLocationLikeResult');
        });
    };
    GodService.prototype.checkLocationStatus = function (data, callback) {
        var _this = this;
        if (callback === void 0) { callback = null; }
        this.socket.emit('checkLocationStatus', data);
        this.socket.on('checkLocationStatusResult', function (result) {
            var res = result.data;
            var message = result.message;
            if (message.code > 299) {
                _this.store.dispatch(_this.statusActions.changeErrorMessage(message));
                return;
            }
            var location = _this.locationService.findLocation(res.location);
            if (location.locationTypeId !== 2) {
                _this.store.dispatch(_this.locationActions.changeLocationStatus(res.status));
            }
            if (callback != null) {
                callback(res.status);
            }
            _this.socket.removeAllListeners('checkLocationStatusResult');
        });
    };
    GodService.prototype.disconnectedFromExhibit = function (parentLocation, location) {
        var _this = this;
        this.socket.emit('disconnectedFromExhibit', { parentLocation: parentLocation, location: location });
        this.socket.on('disconnectedFromExhibitResult', function (result) {
            var res = result.data;
            var message = result.message;
            _this.utilitiesService.sendToNative('Disconnected from Exhibit-' + parentLocation + ': ' + result, 'print');
            if (message.code > 299) {
                _this.store.dispatch(_this.statusActions.changeErrorMessage(message));
                return;
            }
            if (_this.store.getState().isLoggedIn === true) {
                _this.registerLocation(res.parent, false);
            }
            _this.socket.removeAllListeners('disconnectedFromExhibitResult');
        });
    };
    GodService.prototype.autoLogin = function (token) {
        var _this = this;
        this.socket.emit('autoLoginOD', token);
        this.socket.on('autoLoginODResult', function (result) {
            var data = result.data;
            var message = result.message;
            if (message.code > 299) {
                _this.store.dispatch(_this.statusActions.changeErrorMessage(message));
                return;
            }
            _this.store.dispatch(_this.userActions.changeUser(data.user));
            _this.store.dispatch(_this.userActions.changeLookupTable(data.locations));
            _this.store.dispatch(_this.userActions.changeToken(data.token));
            _this.store.dispatch(_this.statusActions.changeLoggedIn(true));
            _this.store.dispatch(_this.statusActions.changeLanguage(data.user.contentLanguageId));
            _this.locationService.setToStartPoint();
            _this.router.navigate(['/mainview']).then(function () {
                // send success to native & start beacon scan
                _this.utilitiesService.sendToNative('success', 'registerOD');
            });
            _this.socket.removeAllListeners('autoLoginODResult');
        });
    };
    GodService.prototype.loginOD = function (data) {
        var _this = this;
        this.socket.emit('loginOD', data);
        this.socket.on('loginODResult', function (result) {
            var data = result.data;
            var message = result.message;
            if (message.code > 299) {
                _this.store.dispatch(_this.statusActions.changeErrorMessage(message));
                _this.alertService.setMessageWrongLoginCheck(true);
                return;
            }
            _this.alertService.setMessageWrongLoginCheck(false);
            _this.store.dispatch(_this.userActions.changeUser(data.user));
            _this.store.dispatch(_this.userActions.changeLookupTable(data.locations));
            _this.store.dispatch(_this.userActions.changeToken(data.token));
            _this.store.dispatch(_this.statusActions.changeLoggedIn(true));
            _this.store.dispatch(_this.statusActions.changeLanguage(data.user.contentLanguageId));
            _this.locationService.setToStartPoint();
            _this.router.navigate(['/mainview']).then(function () {
                // send success to native & start beacon scan
                _this.utilitiesService.sendToNative('success', 'loginOD');
            });
            _this.socket.removeAllListeners('loginODResult');
        });
    };
    GodService.prototype.checkUsernameExists = function (username) {
        var _this = this;
        console.log('checkUsername');
        this.socket.emit('checkUsernameExists', username);
        this.socket.on('checkUsernameExistsResult', function (result) {
            // const data = {result: result, bothChecked: bothChecked};
            // this.alertService.sendUsernameRegisterCheckResult(data);
            _this.socket.removeAllListeners('checkUsernameExistsResult');
            return result;
        });
    };
    GodService.prototype.checkEmailExists = function (email) {
        var _this = this;
        console.log('checkEmail');
        this.socket.emit('checkEmailExists', email);
        this.socket.on('checkEmailExistsResult', function (result) {
            // this.alertService.sendEmailRegisterCheckResult(result);
            _this.socket.removeAllListeners('checkEmailExistsResult');
            return result;
        });
    };
    GodService.prototype.checkUserOrEmailExists = function (data) {
        var _this = this;
        this.socket.emit('checkNameOrEmailExists', data);
        this.socket.on('checkNameOrEmailExistsResult', function (result) {
            _this.alertService.sendMessageUserOrEmailRegisterCheck(result);
            _this.socket.removeAllListeners('checkNameOrEmailExistsResult');
            return result;
        });
    };
    GodService.prototype.checkWifi = function (wifiSSID) {
        var _this = this;
        this.socket.emit('checkWifiSSID', wifiSSID);
        this.socket.on('checkWifiSSIDResult', function (result) {
            var isCorrect = result.data.check;
            if (isCorrect) {
                _this.utilitiesService.sendToNative('correctWifi', 'getWifiStatusResult');
                _this.utilitiesService.sendToNative('bluetoothCheck', 'activateBluetoothCheck');
            }
            else {
                _this.utilitiesService.sendToNative('openWifiDialogNative', 'openWifiDialogNative');
            }
            _this.socket.removeAllListeners('checkWifiSSIDResult');
        });
    };
    GodService.prototype.updateUserCredentials = function (data) {
        var _this = this;
        this.socket.emit('changeODCredentials', data);
        this.socket.on('changeODCredentialsResult', function (result) {
            var res = result.data;
            var message = result.message;
            console.log(message);
            if (message.code > 299) {
                _this.store.dispatch(_this.statusActions.changeErrorMessage(message));
                _this.alertService.sendMessageChangedCred(false);
                return;
            }
            _this.alertService.sendMessageChangedCred(true);
            _this.alertService.sendMessageExistingCredentialsOnChange(false);
            _this.store.dispatch(_this.userActions.changeUser(res.user));
            _this.store.dispatch(_this.userActions.changeToken(res.token));
            return result;
        });
    };
    GodService.prototype.deleteUserAccount = function (data) {
        this.socket.emit('deleteOD', data);
    };
    GodService.prototype.updateUserLanguage = function (lang) {
        var _this = this;
        var state = this.store.getState();
        var user = state.user;
        this.socket.emit('updateUserLanguage', { language: lang, user: user.id });
        this.socket.on('updateUserLanguageResult', function (result) {
            var lookuptable = result.data.locations;
            var language = result.data.language;
            var message = result.message;
            if (message.code > 299) {
                _this.store.dispatch(_this.statusActions.changeErrorMessage(message));
                _this.utilitiesService.sendToNative('RegisterTimelineUpdate: FAILED', 'print');
                return;
            }
            _this.store.dispatch(_this.statusActions.changeLanguage(language));
            _this.store.dispatch(_this.userActions.changeLookupTable(lookuptable));
            _this.socket.removeAllListeners('updateUserLanguageResult');
        });
    };
    GodService.prototype.getCoaColors = function () {
        var _this = this;
        this.socket.emit('getCoaColors');
        this.socket.on('getCoaColorsResult', function (result) {
            _this.alertService.sendMessageCoaColors(result);
            _this.socket.removeAllListeners('getCoaColorsResult');
            return result;
        });
    };
    GodService.prototype.getUserCoaColors = function (data) {
        var _this = this;
        this.socket.emit('getUserCoaColors', data);
        this.socket.on('getUserCoaColorsResult', function (result) {
            _this.alertService.sendMessageUserCoaColors(result);
            _this.socket.removeAllListeners('getUserCoaColorsResult');
            return;
        });
    };
    GodService.prototype.changeUserCoaColors = function (data) {
        var _this = this;
        this.socket.emit('changeUserCoaColors', data);
        this.socket.on('changeUserCoaColorsResult', function (result) {
            _this.socket.removeAllListeners('changeUserCoaColorsResult');
            return;
        });
    };
    GodService.prototype.unlockCoaPart = function (data) {
        var _this = this;
        this.socket.emit('unlockCoaPart', data);
        this.socket.on('unlockCoaPartResult', function (result) {
            _this.socket.removeAllListeners('unlockCoaPartResult');
            return;
        });
    };
    GodService.prototype.getUserCoaParts = function (data) {
        var _this = this;
        this.socket.emit('getUserCoaParts', data);
        this.socket.on('getUserCoaPartsResult', function (result) {
            _this.alertService.sendMessageUserCoaParts(result);
            _this.socket.removeAllListeners('getUserCoaPartsResult');
            return result;
        });
    };
    GodService.prototype.getCoaParts = function () {
        var _this = this;
        this.socket.emit('getCoaParts');
        this.socket.on('getCoaPartsResult', function (result) {
            _this.alertService.sendMessageCoaParts(result);
            _this.socket.removeAllListeners('getCoaPartsResult');
            return;
        });
    };
    GodService = __decorate([
        Object(_angular_core__WEBPACK_IMPORTED_MODULE_0__["Injectable"])(),
        __param(4, Object(_angular_core__WEBPACK_IMPORTED_MODULE_0__["Inject"])('AppStore')),
        __metadata("design:paramtypes", [_angular_router__WEBPACK_IMPORTED_MODULE_1__["Router"],
            _WindowRef__WEBPACK_IMPORTED_MODULE_2__["WindowRef"],
            _location_service__WEBPACK_IMPORTED_MODULE_3__["LocationService"],
            _god_socket_service__WEBPACK_IMPORTED_MODULE_4__["GodSocketService"], Object, _store_actions_LocationActions__WEBPACK_IMPORTED_MODULE_5__["LocationActions"],
            _store_actions_UserActions__WEBPACK_IMPORTED_MODULE_6__["UserActions"],
            _store_actions_StatusActions__WEBPACK_IMPORTED_MODULE_7__["StatusActions"],
            _native_native_communication_service__WEBPACK_IMPORTED_MODULE_8__["NativeCommunicationService"],
            _alert_service__WEBPACK_IMPORTED_MODULE_9__["AlertService"]])
    ], GodService);
    return GodService;
}());



/***/ }),

/***/ "./src/app/services/language.service.ts":
/*!**********************************************!*\
  !*** ./src/app/services/language.service.ts ***!
  \**********************************************/
/*! exports provided: LanguageService */
/***/ (function(module, __webpack_exports__, __webpack_require__) {

"use strict";
__webpack_require__.r(__webpack_exports__);
/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, "LanguageService", function() { return LanguageService; });
/* harmony import */ var _angular_core__WEBPACK_IMPORTED_MODULE_0__ = __webpack_require__(/*! @angular/core */ "./node_modules/@angular/core/fesm5/core.js");
/* harmony import */ var _god_god_service__WEBPACK_IMPORTED_MODULE_1__ = __webpack_require__(/*! ./god/god.service */ "./src/app/services/god/god.service.ts");
/* harmony import */ var _ngx_translate_core__WEBPACK_IMPORTED_MODULE_2__ = __webpack_require__(/*! @ngx-translate/core */ "./node_modules/@ngx-translate/core/fesm5/ngx-translate-core.js");
/* harmony import */ var _config_LanguageTypes__WEBPACK_IMPORTED_MODULE_3__ = __webpack_require__(/*! ../config/LanguageTypes */ "./src/app/config/LanguageTypes.ts");
var __decorate = (undefined && undefined.__decorate) || function (decorators, target, key, desc) {
    var c = arguments.length, r = c < 3 ? target : desc === null ? desc = Object.getOwnPropertyDescriptor(target, key) : desc, d;
    if (typeof Reflect === "object" && typeof Reflect.decorate === "function") r = Reflect.decorate(decorators, target, key, desc);
    else for (var i = decorators.length - 1; i >= 0; i--) if (d = decorators[i]) r = (c < 3 ? d(r) : c > 3 ? d(target, key, r) : d(target, key)) || r;
    return c > 3 && r && Object.defineProperty(target, key, r), r;
};
var __metadata = (undefined && undefined.__metadata) || function (k, v) {
    if (typeof Reflect === "object" && typeof Reflect.metadata === "function") return Reflect.metadata(k, v);
};
var __param = (undefined && undefined.__param) || function (paramIndex, decorator) {
    return function (target, key) { decorator(target, key, paramIndex); }
};




var LanguageService = /** @class */ (function () {
    function LanguageService(godService, translateService, appStore) {
        var _this = this;
        this.godService = godService;
        this.translateService = translateService;
        this.appStore = appStore;
        this._currentLanguage = _config_LanguageTypes__WEBPACK_IMPORTED_MODULE_3__["ENG"];
        this._unsubscribe = this.appStore.subscribe(function () {
            var state = _this.appStore.getState();
            if (state.isLoggedIn && state.language !== _this._currentLanguage) {
                _this.updateTranslateService(state.language);
                _this._currentLanguage = state.language;
            }
        });
    }
    /**
     * Method changes the language of the app and stores it for the user
     * Should be called if the user is already logged in
     * @param lang
     */
    LanguageService.prototype.transmitChangeUserLanguage = function (lang) {
        this.updateTranslateService(lang);
        this.godService.updateUserLanguage(lang);
    };
    /**
     * Method changes the language of the app
     * Should be called if the user is NOT logged in
     * @param lang
     */
    LanguageService.prototype.transmitChangeAppLanguage = function (lang) {
        this.updateTranslateService(lang);
        this._currentLanguage = lang;
    };
    LanguageService.prototype.getCurrentLanguageAsString = function () {
        switch (this._currentLanguage) {
            case _config_LanguageTypes__WEBPACK_IMPORTED_MODULE_3__["DE"]: return 'de';
            default: return 'en';
        }
    };
    LanguageService.prototype.updateTranslateService = function (lang) {
        if (lang === _config_LanguageTypes__WEBPACK_IMPORTED_MODULE_3__["DE"]) {
            this.translateService.use('de');
        }
        else {
            this.translateService.use('en');
        }
    };
    LanguageService = __decorate([
        Object(_angular_core__WEBPACK_IMPORTED_MODULE_0__["Injectable"])({
            providedIn: 'root'
        }),
        __param(2, Object(_angular_core__WEBPACK_IMPORTED_MODULE_0__["Inject"])('AppStore')),
        __metadata("design:paramtypes", [_god_god_service__WEBPACK_IMPORTED_MODULE_1__["GodService"],
            _ngx_translate_core__WEBPACK_IMPORTED_MODULE_2__["TranslateService"], Object])
    ], LanguageService);
    return LanguageService;
}());



/***/ }),

/***/ "./src/app/services/location.service.ts":
/*!**********************************************!*\
  !*** ./src/app/services/location.service.ts ***!
  \**********************************************/
/*! exports provided: LocationService */
/***/ (function(module, __webpack_exports__, __webpack_require__) {

"use strict";
__webpack_require__.r(__webpack_exports__);
/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, "LocationService", function() { return LocationService; });
/* harmony import */ var _angular_core__WEBPACK_IMPORTED_MODULE_0__ = __webpack_require__(/*! @angular/core */ "./node_modules/@angular/core/fesm5/core.js");
/* harmony import */ var rxjs__WEBPACK_IMPORTED_MODULE_1__ = __webpack_require__(/*! rxjs */ "./node_modules/rxjs/_esm5/index.js");
/* harmony import */ var _store_actions_LocationActions__WEBPACK_IMPORTED_MODULE_2__ = __webpack_require__(/*! ../store/actions/LocationActions */ "./src/app/store/actions/LocationActions.ts");
var __decorate = (undefined && undefined.__decorate) || function (decorators, target, key, desc) {
    var c = arguments.length, r = c < 3 ? target : desc === null ? desc = Object.getOwnPropertyDescriptor(target, key) : desc, d;
    if (typeof Reflect === "object" && typeof Reflect.decorate === "function") r = Reflect.decorate(decorators, target, key, desc);
    else for (var i = decorators.length - 1; i >= 0; i--) if (d = decorators[i]) r = (c < 3 ? d(r) : c > 3 ? d(target, key, r) : d(target, key)) || r;
    return c > 3 && r && Object.defineProperty(target, key, r), r;
};
var __metadata = (undefined && undefined.__metadata) || function (k, v) {
    if (typeof Reflect === "object" && typeof Reflect.metadata === "function") return Reflect.metadata(k, v);
};
var __param = (undefined && undefined.__param) || function (paramIndex, decorator) {
    return function (target, key) { decorator(target, key, paramIndex); }
};



var LocationService = /** @class */ (function () {
    function LocationService(appStore, locationActions) {
        var _this = this;
        this.appStore = appStore;
        this.locationActions = locationActions;
        this.appStore.subscribe(function () {
            var state = _this.appStore.getState();
            _this._currentLocation.next(state.currentLocation);
            _this._lookuptable = state.lookupTable;
        });
        this._currentLocation = new rxjs__WEBPACK_IMPORTED_MODULE_1__["BehaviorSubject"](undefined);
    }
    LocationService.prototype.isActiveLocationInRange = function (locationId) {
        var nearestLoc = this.findLocation(locationId);
        return nearestLoc.id === this._currentLocation || nearestLoc.parentId === this._currentLocation;
    };
    LocationService.prototype.getTimelineLocations = function () {
        var timelineLocations = [];
        for (var i = 0; i < this._lookuptable.length; i++) {
            var location_1 = this._lookuptable[i];
            if (location_1.showInTimeline) {
                timelineLocations.push(location_1);
            }
        }
        return timelineLocations;
    };
    LocationService.prototype.findLocation = function (id) {
        var toFind;
        if (!this._lookuptable) {
            return;
        }
        for (var i = 0; i < this._lookuptable.length; i++) {
            var location_2 = this._lookuptable[i];
            if (location_2.id === id) {
                toFind = location_2;
            }
        }
        return toFind;
    };
    LocationService.prototype.findBehaviorChildLocation = function () {
        var toFind;
        var currLoc = this._currentLocation.value;
        if (!this._lookuptable) {
            return;
        }
        for (var i = 0; i < this._lookuptable.length; i++) {
            var location_3 = this._lookuptable[i];
            if (location_3.parentId === currLoc.id) {
                toFind = location_3;
            }
        }
        return toFind;
    };
    LocationService.prototype.findStartLocation = function () {
        var toFind;
        if (!this._lookuptable) {
            return;
        }
        for (var i = 0; i < this._lookuptable.length; i++) {
            var location_4 = this._lookuptable[i];
            if (location_4.isStartPoint) {
                toFind = location_4;
            }
        }
        return toFind;
    };
    LocationService.prototype.setToStartPoint = function () {
        var startPoint = this.findStartLocation();
        this.appStore.dispatch(this.locationActions.changeCurrentLocation(startPoint));
    };
    LocationService.prototype.updateCurrentLocation = function (locationId) {
        var loc = this.findLocation(locationId);
        this.appStore.dispatch(this.locationActions.changeCurrentLocation(loc));
    };
    LocationService.prototype.sameAsCurrentLocation = function (id) {
        var isSame = false;
        var currLoc = this._currentLocation.value;
        if (currLoc) {
            if (id === currLoc.id) {
                isSame = true;
            }
        }
        return isSame;
    };
    LocationService.prototype.stopLocationScanning = function () {
        this.appStore.dispatch(this.locationActions.changeLocationScanning(false));
    };
    LocationService.prototype.startLocationScanning = function () {
        this.appStore.dispatch(this.locationActions.changeLocationScanning(true));
    };
    Object.defineProperty(LocationService.prototype, "lookuptable", {
        get: function () {
            return this._lookuptable;
        },
        set: function (locations) {
            this._lookuptable = locations;
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(LocationService.prototype, "currentLocation", {
        get: function () {
            return this._currentLocation;
        },
        enumerable: true,
        configurable: true
    });
    LocationService = __decorate([
        Object(_angular_core__WEBPACK_IMPORTED_MODULE_0__["Injectable"])(),
        __param(0, Object(_angular_core__WEBPACK_IMPORTED_MODULE_0__["Inject"])('AppStore')),
        __metadata("design:paramtypes", [Object, _store_actions_LocationActions__WEBPACK_IMPORTED_MODULE_2__["LocationActions"]])
    ], LocationService);
    return LocationService;
}());



/***/ }),

/***/ "./src/app/services/native/native-communication.service.ts":
/*!*****************************************************************!*\
  !*** ./src/app/services/native/native-communication.service.ts ***!
  \*****************************************************************/
/*! exports provided: NativeCommunicationService */
/***/ (function(module, __webpack_exports__, __webpack_require__) {

"use strict";
__webpack_require__.r(__webpack_exports__);
/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, "NativeCommunicationService", function() { return NativeCommunicationService; });
/* harmony import */ var _angular_core__WEBPACK_IMPORTED_MODULE_0__ = __webpack_require__(/*! @angular/core */ "./node_modules/@angular/core/fesm5/core.js");
/* harmony import */ var _WindowRef__WEBPACK_IMPORTED_MODULE_1__ = __webpack_require__(/*! ../../WindowRef */ "./src/app/WindowRef.ts");
var __decorate = (undefined && undefined.__decorate) || function (decorators, target, key, desc) {
    var c = arguments.length, r = c < 3 ? target : desc === null ? desc = Object.getOwnPropertyDescriptor(target, key) : desc, d;
    if (typeof Reflect === "object" && typeof Reflect.decorate === "function") r = Reflect.decorate(decorators, target, key, desc);
    else for (var i = decorators.length - 1; i >= 0; i--) if (d = decorators[i]) r = (c < 3 ? d(r) : c > 3 ? d(target, key, r) : d(target, key)) || r;
    return c > 3 && r && Object.defineProperty(target, key, r), r;
};
var __metadata = (undefined && undefined.__metadata) || function (k, v) {
    if (typeof Reflect === "object" && typeof Reflect.metadata === "function") return Reflect.metadata(k, v);
};


var NativeCommunicationService = /** @class */ (function () {
    function NativeCommunicationService(winRef) {
        this.winRef = winRef;
        this.isIOS = true;
        this.isAndroid = false;
        this.isWeb = false;
    }
    // handels console.log - sends to native console if iOS || Android
    NativeCommunicationService.prototype.sendToNative = function (messageBody, messageName) {
        if (this.isWeb) {
            switch (messageName) {
                case 'saveToken':
                    // console.log(messageBody);
                    localStorage.setItem('token', JSON.stringify({ token: messageBody }));
                    break;
                case 'print':
                    console.log(messageBody);
                    break;
                case 'clearToken':
                    localStorage.removeItem('token');
                    break;
                default:
                    break;
            }
        }
        if (this.isIOS) {
            var message = {
                'name': messageName,
                'data': messageBody
            };
            this.winRef.nativeWindow.webkit.messageHandlers.observe.postMessage(message);
        }
        if (this.isAndroid) {
            switch (messageName) {
                case 'print':
                    this.winRef.nativeWindow.MEETeUXAndroidAppRoot.print(messageBody);
                    break;
                case 'getDeviceInfos':
                    this.winRef.nativeWindow.MEETeUXAndroidAppRoot.getDeviceInfos();
                    break;
                case 'registerOD':
                    this.winRef.nativeWindow.MEETeUXAndroidAppRoot.registerOD();
                    break;
                case 'triggerSignal':
                    this.winRef.nativeWindow.MEETeUXAndroidAppRoot.triggerSignal();
                    break;
                case 'saveToken':
                    this.winRef.nativeWindow.MEETeUXAndroidAppRoot.saveToken(messageBody);
                    break;
                case 'clearToken':
                    this.winRef.nativeWindow.MEETeUXAndroidAppRoot.clearToken();
                    break;
                case 'showUnityView':
                    this.winRef.nativeWindow.MEETeUXAndroidAppRoot.showUnityView();
                    break;
                case 'getToken':
                    this.winRef.nativeWindow.MEETeUXAndroidAppRoot.getToken();
                    break;
                case 'getWifiStatusResult':
                    this.winRef.nativeWindow.MEETeUXAndroidAppRoot.getWifiStatusResult(messageBody);
                    break;
                case 'activateBluetoothCheck':
                    this.winRef.nativeWindow.MEETeUXAndroidAppRoot.activateBluetoothCheck();
                    break;
                case 'activateBluetooth':
                    this.winRef.nativeWindow.MEETeUXAndroidAppRoot.activateBluetooth();
                    break;
                case 'activateWifiSettings':
                    this.winRef.nativeWindow.MEETeUXAndroidAppRoot.activateWifiSettings();
                    break;
                case 'showBackgroundNotification':
                    this.winRef.nativeWindow.MEETeUXAndroidAppRoot.showBackgroundNotification(messageBody);
                    break;
                case 'openWifiDialogNative':
                    this.winRef.nativeWindow.MEETeUXAndroidAppRoot.openWifiDialogNative();
                    break;
                default:
                    break;
            }
        }
    };
    // sets OS platform
    NativeCommunicationService.prototype.checkPlatform = function () {
        var userAgent = window.navigator.userAgent;
        var safariCheck = false;
        var chromeCheck = false;
        var androidCheck = false;
        if (userAgent.indexOf('Safari') !== (-1)) {
            safariCheck = true;
        }
        if (userAgent.indexOf('Chrome') !== (-1)) {
            chromeCheck = true;
        }
        if (userAgent.indexOf('Android') !== (-1)) {
            androidCheck = true;
        }
        if (androidCheck) {
            this.isAndroid = true;
            this.isIOS = false;
            return 'Android';
        }
        else if (safariCheck || chromeCheck) {
            if (!androidCheck) {
                this.isWeb = true;
                this.isIOS = false;
                return 'Web';
            }
        }
        return 'IOS';
    };
    NativeCommunicationService = __decorate([
        Object(_angular_core__WEBPACK_IMPORTED_MODULE_0__["Injectable"])(),
        __metadata("design:paramtypes", [_WindowRef__WEBPACK_IMPORTED_MODULE_1__["WindowRef"]])
    ], NativeCommunicationService);
    return NativeCommunicationService;
}());



/***/ }),

/***/ "./src/app/services/native/native-response.service.ts":
/*!************************************************************!*\
  !*** ./src/app/services/native/native-response.service.ts ***!
  \************************************************************/
/*! exports provided: NativeResponseService */
/***/ (function(module, __webpack_exports__, __webpack_require__) {

"use strict";
__webpack_require__.r(__webpack_exports__);
/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, "NativeResponseService", function() { return NativeResponseService; });
/* harmony import */ var _angular_core__WEBPACK_IMPORTED_MODULE_0__ = __webpack_require__(/*! @angular/core */ "./node_modules/@angular/core/fesm5/core.js");
/* harmony import */ var _god_god_service__WEBPACK_IMPORTED_MODULE_1__ = __webpack_require__(/*! ../god/god.service */ "./src/app/services/god/god.service.ts");
/* harmony import */ var _location_service__WEBPACK_IMPORTED_MODULE_2__ = __webpack_require__(/*! ../location.service */ "./src/app/services/location.service.ts");
/* harmony import */ var _store_actions_LocationActions__WEBPACK_IMPORTED_MODULE_3__ = __webpack_require__(/*! ../../store/actions/LocationActions */ "./src/app/store/actions/LocationActions.ts");
/* harmony import */ var _native_communication_service__WEBPACK_IMPORTED_MODULE_4__ = __webpack_require__(/*! ./native-communication.service */ "./src/app/services/native/native-communication.service.ts");
/* harmony import */ var _angular_router__WEBPACK_IMPORTED_MODULE_5__ = __webpack_require__(/*! @angular/router */ "./node_modules/@angular/router/fesm5/router.js");
/* harmony import */ var _store_actions_UserActions__WEBPACK_IMPORTED_MODULE_6__ = __webpack_require__(/*! ../../store/actions/UserActions */ "./src/app/store/actions/UserActions.ts");
/* harmony import */ var _store_actions_StatusActions__WEBPACK_IMPORTED_MODULE_7__ = __webpack_require__(/*! ../../store/actions/StatusActions */ "./src/app/store/actions/StatusActions.ts");
/* harmony import */ var _angular_material__WEBPACK_IMPORTED_MODULE_8__ = __webpack_require__(/*! @angular/material */ "./node_modules/@angular/material/esm5/material.es5.js");
/* harmony import */ var _alert_service__WEBPACK_IMPORTED_MODULE_9__ = __webpack_require__(/*! ../alert.service */ "./src/app/services/alert.service.ts");
/* harmony import */ var _transmission_service__WEBPACK_IMPORTED_MODULE_10__ = __webpack_require__(/*! ../transmission.service */ "./src/app/services/transmission.service.ts");
/* harmony import */ var _config_LocationTypes__WEBPACK_IMPORTED_MODULE_11__ = __webpack_require__(/*! ../../config/LocationTypes */ "./src/app/config/LocationTypes.ts");
var __decorate = (undefined && undefined.__decorate) || function (decorators, target, key, desc) {
    var c = arguments.length, r = c < 3 ? target : desc === null ? desc = Object.getOwnPropertyDescriptor(target, key) : desc, d;
    if (typeof Reflect === "object" && typeof Reflect.decorate === "function") r = Reflect.decorate(decorators, target, key, desc);
    else for (var i = decorators.length - 1; i >= 0; i--) if (d = decorators[i]) r = (c < 3 ? d(r) : c > 3 ? d(target, key, r) : d(target, key)) || r;
    return c > 3 && r && Object.defineProperty(target, key, r), r;
};
var __metadata = (undefined && undefined.__metadata) || function (k, v) {
    if (typeof Reflect === "object" && typeof Reflect.metadata === "function") return Reflect.metadata(k, v);
};
var __param = (undefined && undefined.__param) || function (paramIndex, decorator) {
    return function (target, key) { decorator(target, key, paramIndex); }
};












var NativeResponseService = /** @class */ (function () {
    function NativeResponseService(router, godService, locationService, appStore, locationActions, nativeCommunicationService, userActions, statusActions, dialog, alertService, transmissionService) {
        this.router = router;
        this.godService = godService;
        this.locationService = locationService;
        this.appStore = appStore;
        this.locationActions = locationActions;
        this.nativeCommunicationService = nativeCommunicationService;
        this.userActions = userActions;
        this.statusActions = statusActions;
        this.dialog = dialog;
        this.alertService = alertService;
        this.transmissionService = transmissionService;
    }
    NativeResponseService.prototype.ngOnInit = function () {
    };
    NativeResponseService.prototype.timelineUpdate = function (result) {
        var state = this.appStore.getState();
        var minor = result.minor;
        var location = this.locationService.findLocation(minor);
        if (!location) {
            this.nativeCommunicationService.sendToNative('this is not a valid location', 'print');
            return;
        }
        var currLoc = this.locationService.currentLocation.value;
        // if the location is not the same as before
        if (!this.locationService.sameAsCurrentLocation(location.id)) {
            // update the closestExhibit if the location is not already the closest one
            if (location.id !== this.appStore.getState().closestExhibit && location.locationTypeId !== _config_LocationTypes__WEBPACK_IMPORTED_MODULE_11__["ACTIVE_EXHIBIT_ON"]) {
                this.appStore.dispatch(this.locationActions.changeClosestExhibit(location.id));
            }
            // If the current location is from type activeExhibitOn the redirection should be disabled
            if (currLoc && currLoc.locationTypeId === _config_LocationTypes__WEBPACK_IMPORTED_MODULE_11__["ACTIVE_EXHIBIT_ON"]) {
                this.nativeCommunicationService.sendToNative('this is not a valid location - type 2', 'print');
                return;
            }
            // If the new location is a tableOn beacon and the user is currently tableat transmit location register directly
            if (currLoc && currLoc.locationTypeId === _config_LocationTypes__WEBPACK_IMPORTED_MODULE_11__["ACTIVE_EXHIBBIT_AT"] &&
                location.locationTypeId === _config_LocationTypes__WEBPACK_IMPORTED_MODULE_11__["ACTIVE_EXHIBIT_ON"] && location.parentId === currLoc.id) {
                this.transmissionService.transmitLocationRegister({ minor: location.id, major: location.parentId });
            }
            // If the new location is a tableOn beacon and the user is currently tableat transmit location register directly
            if (currLoc && currLoc.locationTypeId === _config_LocationTypes__WEBPACK_IMPORTED_MODULE_11__["NOTIFY_EXHIBIT_AT"] &&
                location.locationTypeId === _config_LocationTypes__WEBPACK_IMPORTED_MODULE_11__["NOTIFY_EXHIBIT_ON"] && location.parentId === currLoc.id) {
                this.transmissionService.transmitLocationRegister({ minor: location.id, major: location.parentId });
            }
            // check if the location is still locked. If so unlock it
            if (location.locked && state.locationScanning === true) {
                this.transmissionService.transmitTimelineUpdate(location.id);
                this.nativeCommunicationService.sendToNative(location.id, 'showBackgroundNotification');
            }
        }
    };
    NativeResponseService.prototype.odRegister = function (result) {
        this.transmissionService.transmitODRegister(result);
    };
    NativeResponseService.prototype.autoLogin = function (data) {
        var token = data.token;
        this.nativeCommunicationService.sendToNative('Autologin', 'print');
        if (token !== undefined && token !== null && token !== '') {
            this.godService.autoLogin(token);
        }
    };
    NativeResponseService.prototype.checkWifi = function (data) {
        var wifiSSSID = data.ssid;
        this.nativeCommunicationService.sendToNative('Received SSID: ' + wifiSSSID, 'print');
        if (wifiSSSID !== undefined && wifiSSSID !== null && wifiSSSID !== '') {
            this.godService.checkWifi(wifiSSSID);
        }
    };
    NativeResponseService.prototype.checkBluetooth = function () {
        var nativeSettingType = 'Bluetooth';
        var data = { nativeSettingType: nativeSettingType };
        this.alertService.sendMessageNativeSettingCheck(data);
        var elm = document.getElementById('ghostButtonBluetooth');
        elm.click();
    };
    NativeResponseService.prototype.logoutSuccess = function () {
        this.transmissionService.transmitLogoutCleanup();
    };
    NativeResponseService = __decorate([
        Object(_angular_core__WEBPACK_IMPORTED_MODULE_0__["Injectable"])(),
        __param(3, Object(_angular_core__WEBPACK_IMPORTED_MODULE_0__["Inject"])('AppStore')),
        __metadata("design:paramtypes", [_angular_router__WEBPACK_IMPORTED_MODULE_5__["Router"],
            _god_god_service__WEBPACK_IMPORTED_MODULE_1__["GodService"],
            _location_service__WEBPACK_IMPORTED_MODULE_2__["LocationService"], Object, _store_actions_LocationActions__WEBPACK_IMPORTED_MODULE_3__["LocationActions"],
            _native_communication_service__WEBPACK_IMPORTED_MODULE_4__["NativeCommunicationService"],
            _store_actions_UserActions__WEBPACK_IMPORTED_MODULE_6__["UserActions"],
            _store_actions_StatusActions__WEBPACK_IMPORTED_MODULE_7__["StatusActions"],
            _angular_material__WEBPACK_IMPORTED_MODULE_8__["MatDialog"],
            _alert_service__WEBPACK_IMPORTED_MODULE_9__["AlertService"],
            _transmission_service__WEBPACK_IMPORTED_MODULE_10__["TransmissionService"]])
    ], NativeResponseService);
    return NativeResponseService;
}());



/***/ }),

/***/ "./src/app/services/transmission.service.ts":
/*!**************************************************!*\
  !*** ./src/app/services/transmission.service.ts ***!
  \**************************************************/
/*! exports provided: TransmissionService */
/***/ (function(module, __webpack_exports__, __webpack_require__) {

"use strict";
__webpack_require__.r(__webpack_exports__);
/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, "TransmissionService", function() { return TransmissionService; });
/* harmony import */ var _angular_core__WEBPACK_IMPORTED_MODULE_0__ = __webpack_require__(/*! @angular/core */ "./node_modules/@angular/core/fesm5/core.js");
/* harmony import */ var _angular_router__WEBPACK_IMPORTED_MODULE_1__ = __webpack_require__(/*! @angular/router */ "./node_modules/@angular/router/fesm5/router.js");
/* harmony import */ var _god_god_service__WEBPACK_IMPORTED_MODULE_2__ = __webpack_require__(/*! ./god/god.service */ "./src/app/services/god/god.service.ts");
/* harmony import */ var _location_service__WEBPACK_IMPORTED_MODULE_3__ = __webpack_require__(/*! ./location.service */ "./src/app/services/location.service.ts");
/* harmony import */ var _store_actions_LocationActions__WEBPACK_IMPORTED_MODULE_4__ = __webpack_require__(/*! ../store/actions/LocationActions */ "./src/app/store/actions/LocationActions.ts");
/* harmony import */ var _native_native_communication_service__WEBPACK_IMPORTED_MODULE_5__ = __webpack_require__(/*! ./native/native-communication.service */ "./src/app/services/native/native-communication.service.ts");
/* harmony import */ var _store_actions_UserActions__WEBPACK_IMPORTED_MODULE_6__ = __webpack_require__(/*! ../store/actions/UserActions */ "./src/app/store/actions/UserActions.ts");
/* harmony import */ var _store_actions_StatusActions__WEBPACK_IMPORTED_MODULE_7__ = __webpack_require__(/*! ../store/actions/StatusActions */ "./src/app/store/actions/StatusActions.ts");
/* harmony import */ var _angular_material__WEBPACK_IMPORTED_MODULE_8__ = __webpack_require__(/*! @angular/material */ "./node_modules/@angular/material/esm5/material.es5.js");
/* harmony import */ var _alert_service__WEBPACK_IMPORTED_MODULE_9__ = __webpack_require__(/*! ./alert.service */ "./src/app/services/alert.service.ts");
/* harmony import */ var _utility_service__WEBPACK_IMPORTED_MODULE_10__ = __webpack_require__(/*! ./utility.service */ "./src/app/services/utility.service.ts");
/* harmony import */ var _config_LocationTypes__WEBPACK_IMPORTED_MODULE_11__ = __webpack_require__(/*! ../config/LocationTypes */ "./src/app/config/LocationTypes.ts");
var __decorate = (undefined && undefined.__decorate) || function (decorators, target, key, desc) {
    var c = arguments.length, r = c < 3 ? target : desc === null ? desc = Object.getOwnPropertyDescriptor(target, key) : desc, d;
    if (typeof Reflect === "object" && typeof Reflect.decorate === "function") r = Reflect.decorate(decorators, target, key, desc);
    else for (var i = decorators.length - 1; i >= 0; i--) if (d = decorators[i]) r = (c < 3 ? d(r) : c > 3 ? d(target, key, r) : d(target, key)) || r;
    return c > 3 && r && Object.defineProperty(target, key, r), r;
};
var __metadata = (undefined && undefined.__metadata) || function (k, v) {
    if (typeof Reflect === "object" && typeof Reflect.metadata === "function") return Reflect.metadata(k, v);
};
var __param = (undefined && undefined.__param) || function (paramIndex, decorator) {
    return function (target, key) { decorator(target, key, paramIndex); }
};












var TransmissionService = /** @class */ (function () {
    function TransmissionService(router, godService, locationService, appStore, locationActions, nativeCommunicationService, userActions, statusActions, dialog, alertService, utilityService) {
        var _this = this;
        this.router = router;
        this.godService = godService;
        this.locationService = locationService;
        this.appStore = appStore;
        this.locationActions = locationActions;
        this.nativeCommunicationService = nativeCommunicationService;
        this.userActions = userActions;
        this.statusActions = statusActions;
        this.dialog = dialog;
        this.alertService = alertService;
        this.utilityService = utilityService;
        this.subscription = this.alertService.getMessageResponse().subscribe(function (message) {
            if (message.result === 'confirm') {
                _this.godService.registerLocation(message.location, false);
            }
            else {
                _this.godService.registerLocation(message.location, true);
            }
            _this.locationService.startLocationScanning();
        });
        this.subscriptionBluetooth = this.alertService.getMessageNativeBluetoothSettingCheckResult().subscribe(function (message) {
            if (message.result === 'confirm') {
                _this.nativeCommunicationService.sendToNative('turnOnBluetooth', 'activateBluetooth');
            }
            else if (message.result === 'cancel') {
            }
        });
        this.subscriptionWifi = this.alertService.getMessageNativeWifiSettingCheckResult().subscribe(function (message) {
            if (message.result === 'confirm') {
                _this.nativeCommunicationService.sendToNative('wrongWifi', 'activateWifiSettings');
                _this.nativeCommunicationService.sendToNative('bluetoothCheck', 'activateBluetoothCheck');
            }
            else if (message.result === 'cancel') {
                _this.nativeCommunicationService.sendToNative('bluetoothCheck', 'activateBluetoothCheck');
            }
        });
        this.subscriptionUserEmail = this.alertService.getMessageUserOrEmailRegisterCheck().subscribe(function (message) {
            _this.isEmailExisting = message.email;
            _this.isUsernameExisting = message.name;
            var state = _this.appStore.getState();
            if (_this.credChange) {
                if (!_this.isUsernameExisting && !_this.isEmailExisting && _this.changeName !== undefined && _this.changeEmail !== undefined &&
                    state.user.name !== _this.changeName && state.user.email !== _this.changeEmail) {
                    var data = { id: state.user.id, username: _this.changeName, email: _this.changeEmail, password: _this.changeOldPassword,
                        newPassword: _this.changeNewPassword };
                    _this.godService.updateUserCredentials(data);
                }
                else if (!_this.isUsernameExisting && !_this.isEmailExisting && _this.changeName !== undefined &&
                    state.user.name !== _this.changeName && (state.user.email === _this.changeEmail || _this.changeEmail === undefined)) {
                    var data = { id: state.user.id, username: _this.changeName, email: undefined, password: _this.changeOldPassword,
                        newPassword: _this.changeNewPassword };
                    _this.godService.updateUserCredentials(data);
                }
                else if (!_this.isUsernameExisting && !_this.isEmailExisting && state.user.email !== _this.changeEmail &&
                    _this.changeEmail !== undefined && (state.user.name === _this.changeName || _this.changeName === undefined)) {
                    var data = { id: state.user.id, username: _this.changeName, email: _this.changeEmail, password: _this.changeOldPassword,
                        newPassword: _this.changeNewPassword };
                    _this.godService.updateUserCredentials(data);
                }
                else if ((_this.isUsernameExisting && state.user.name === _this.changeName && !_this.isEmailExisting) ||
                    (_this.isEmailExisting && state.user.email === _this.changeEmail && !_this.isUsernameExisting)) {
                    var data = { id: state.user.id, username: _this.changeName, email: _this.changeEmail, password: _this.changeOldPassword,
                        newPassword: _this.changeNewPassword };
                    _this.godService.updateUserCredentials(data);
                }
                else if (!_this.isUsernameExisting && !_this.isEmailExisting &&
                    (state.user.email === _this.changeEmail || _this.changeEmail === undefined) &&
                    (state.user.name === _this.changeName || _this.changeName === undefined) && _this.changeNewPassword !== undefined &&
                    _this.changeOldPassword !== undefined) {
                    var data = { id: state.user.id, username: undefined, email: undefined, password: _this.changeOldPassword,
                        newPassword: _this.changeNewPassword };
                    _this.godService.updateUserCredentials(data);
                }
                else if (_this.isUsernameExisting && _this.isEmailExisting && state.user.email === _this.changeEmail &&
                    state.user.name === _this.changeName && _this.changeNewPassword !== undefined && _this.changeOldPassword !== undefined) {
                    var data = { id: state.user.id, username: undefined, email: undefined, password: _this.changeOldPassword,
                        newPassword: _this.changeNewPassword };
                    _this.godService.updateUserCredentials(data);
                }
                else {
                    _this.alertService.sendMessageExistingCredentialsOnChange(true);
                }
            }
            else if (_this.registerNew && !_this.credChange) {
                if (!_this.isUsernameExisting && !_this.isEmailExisting) {
                    var data = {
                        identifier: _this.registerName, password: _this.registerPassword, email: _this.registerEmail,
                        deviceAddress: _this.deviceAddress, deviceOS: _this.deviceOS, deviceVersion: _this.deviceVersion,
                        deviceModel: _this.deviceModel, language: _this.language
                    };
                    _this.godService.registerOD(data);
                }
                else {
                    var checks = {
                        user: _this.isUsernameExisting, email: _this.isEmailExisting
                    };
                    _this.alertService.sendMessageExistingCredentials(checks);
                }
            }
            else if (!_this.registerNew && !_this.credChange) {
                var state_1 = _this.appStore.getState();
                var data = {
                    username: _this.registerName, email: _this.registerEmail, password: _this.registerPassword, id: state_1.user.id
                };
                if (!_this.isUsernameExisting && !_this.isEmailExisting) {
                    _this.godService.registerODGuestToReal(data);
                }
                else {
                    var checks = {
                        user: _this.isUsernameExisting, email: _this.isEmailExisting
                    };
                    _this.alertService.sendMessageExistingCredentialsRealUser(checks);
                }
            }
            _this.registerNew = null;
            _this.credChange = null;
        });
    }
    /***************************************************************************
     ****                           OD Methods                              ****
     ***************************************************************************/
    TransmissionService.prototype.transmitODRegister = function (result) {
        this.deviceAddress = result.deviceAddress;
        this.deviceOS = result.deviceOS;
        this.deviceVersion = result.deviceVersion;
        this.deviceModel = result.deviceModel;
        var state = this.appStore.getState();
        this.language = state.language;
        if (this.registerIsGuest) {
            var data = { deviceAddress: this.deviceAddress, deviceOS: this.deviceOS, deviceVersion: this.deviceVersion,
                deviceModel: this.deviceModel, language: this.language };
            this.godService.registerODGuest(data);
        }
        else {
            this.registerNew = true;
            var data = { name: this.registerName, email: this.registerEmail };
            this.godService.checkUserOrEmailExists(data);
        }
    };
    TransmissionService.prototype.transmitODLogin = function () {
        var isEmail = this.utilityService.checkIfEmail(this.loginName);
        console.log('login ' + isEmail);
        if (isEmail) {
            var data = { user: undefined, email: this.loginName, password: this.loginPassword };
            this.godService.loginOD(data);
        }
        else {
            var data = { user: this.loginName, email: undefined, password: this.loginPassword };
            this.godService.loginOD(data);
        }
    };
    TransmissionService.prototype.transmitODGuestToRealRegister = function () {
        this.registerNew = false;
        var data = { name: this.registerName, email: this.registerEmail };
        this.godService.checkUserOrEmailExists(data);
    };
    TransmissionService.prototype.transmitUserCredentialChange = function () {
        this.credChange = true;
        var state = this.appStore.getState();
        var data = { name: this.changeName, email: this.changeEmail };
        this.godService.checkUserOrEmailExists(data);
    };
    TransmissionService.prototype.deleteUserAccount = function () {
        var state = this.appStore.getState();
        this.godService.deleteUserAccount(state.user.id);
        this.logout();
    };
    TransmissionService.prototype.logout = function () {
        this.nativeCommunicationService.sendToNative('clearToken', 'clearToken');
        if (this.nativeCommunicationService.isWeb === true) {
            this.transmitLogoutCleanup();
        }
    };
    TransmissionService.prototype.transmitLogoutCleanup = function () {
        this.appStore.dispatch(this.statusActions.changeLoggedIn(false));
        var elm = document.getElementById('logout');
        elm.click();
        this.appStore.dispatch(this.userActions.changeToken(undefined));
        this.appStore.dispatch(this.locationActions.changeLocationStatus(undefined));
        this.appStore.dispatch(this.locationActions.changeLocationSocketStatus(undefined));
        this.appStore.dispatch(this.locationActions.changeConnectedExhibit(false));
        this.appStore.dispatch(this.locationActions.changeAtExhibitParentId(undefined));
        this.appStore.dispatch(this.locationActions.changeOnExhibit(false));
        this.appStore.dispatch(this.locationActions.changeClosestExhibit(undefined));
    };
    /***************************************************************************
     ****                        Location Methods                           ****
     ***************************************************************************/
    TransmissionService.prototype.transmitLocationRegister = function (result) {
        var _this = this;
        var state = this.appStore.getState();
        var minor = result.minor;
        var location = this.locationService.findLocation(minor);
        if (!location) {
            this.nativeCommunicationService.sendToNative('this is not a valid location', 'print');
            return;
        }
        var exhibitParentId = state.atExhibitParentId;
        var onExhibit = state.onExhibit;
        if (((location.locationTypeId !== _config_LocationTypes__WEBPACK_IMPORTED_MODULE_11__["ACTIVE_EXHIBIT_ON"] ||
            location.locationTypeId !== _config_LocationTypes__WEBPACK_IMPORTED_MODULE_11__["NOTIFY_EXHIBIT_ON"]) && !onExhibit) ||
            ((location.locationTypeId === _config_LocationTypes__WEBPACK_IMPORTED_MODULE_11__["ACTIVE_EXHIBIT_ON"] || location.locationTypeId === _config_LocationTypes__WEBPACK_IMPORTED_MODULE_11__["NOTIFY_EXHIBIT_ON"])
                && exhibitParentId === location.parentId)) {
            if (location.locationTypeId === _config_LocationTypes__WEBPACK_IMPORTED_MODULE_11__["ACTIVE_EXHIBIT_ON"] || location.locationTypeId === _config_LocationTypes__WEBPACK_IMPORTED_MODULE_11__["NOTIFY_EXHIBIT_ON"]) {
                this.godService.checkLocationStatus(location.id, function (res) {
                    if (res === 'FREE') {
                        _this.godService.registerLocation(location.id, false);
                        _this.appStore.dispatch(_this.locationActions.changeLocationSocketStatus(res));
                    }
                    else {
                        _this.appStore.dispatch(_this.locationActions.changeLocationSocketStatus(res));
                    }
                });
            }
            else {
                this.locationService.stopLocationScanning();
                this.godService.registerLocation(location.id, false);
                this.locationService.startLocationScanning();
            }
        }
    };
    TransmissionService.prototype.transmitLocationRegisterTableBehavior = function () {
        var location = this.locationService.findBehaviorChildLocation();
        if (!location) {
            this.nativeCommunicationService.sendToNative('this is not a valid location', 'print');
            return;
        }
        // location is not the same as before
        if (!this.locationService.sameAsCurrentLocation(location.id)) {
            var state = this.appStore.getState();
            var exhibitParentId = state.atExhibitParentId;
            this.nativeCommunicationService.sendToNative('new valid location found - check and registerLocation at GoD', 'print');
            if (location.locationTypeId === _config_LocationTypes__WEBPACK_IMPORTED_MODULE_11__["ACTIVE_EXHIBIT_BEHAVIOR_ON"] && exhibitParentId === location.parentId) {
                this.godService.registerLocation(location.id, false);
            }
        }
    };
    TransmissionService.prototype.transmitTimelineUpdate = function (locationId) {
        this.godService.registerTimelineUpdate(locationId);
    };
    TransmissionService.prototype.transmitLocationLike = function (like) {
        var currLoc = this.locationService.currentLocation.value;
        if (like) {
            this.nativeCommunicationService.sendToNative('Like location ' + currLoc.name, 'print');
        }
        else {
            this.nativeCommunicationService.sendToNative('Unlike location ' + currLoc.name, 'print');
        }
        this.godService.registerLocationLike(currLoc, like);
    };
    /*************************************************************************
     ****                           COA Methods                           ****
     *************************************************************************/
    TransmissionService.prototype.getCoaColors = function () {
        this.godService.getCoaColors();
    };
    TransmissionService.prototype.changeUserCoaColors = function (primColor, secColor) {
        var state = this.appStore.getState();
        var data = { userId: state.user.id, prim: primColor, sec: secColor };
        this.godService.changeUserCoaColors(data);
    };
    TransmissionService.prototype.unlockCoaPart = function (coaPartId) {
        var state = this.appStore.getState();
        var data = { userId: state.user.id, coaId: coaPartId };
        this.godService.unlockCoaPart(data);
    };
    TransmissionService.prototype.getUserCoaParts = function () {
        var state = this.appStore.getState();
        var data = { userId: state.user.id };
        this.godService.getUserCoaParts(data);
    };
    TransmissionService.prototype.getCoaParts = function () {
        this.godService.getCoaParts();
    };
    TransmissionService = __decorate([
        Object(_angular_core__WEBPACK_IMPORTED_MODULE_0__["Injectable"])({
            providedIn: 'root'
        }),
        __param(3, Object(_angular_core__WEBPACK_IMPORTED_MODULE_0__["Inject"])('AppStore')),
        __metadata("design:paramtypes", [_angular_router__WEBPACK_IMPORTED_MODULE_1__["Router"],
            _god_god_service__WEBPACK_IMPORTED_MODULE_2__["GodService"],
            _location_service__WEBPACK_IMPORTED_MODULE_3__["LocationService"], Object, _store_actions_LocationActions__WEBPACK_IMPORTED_MODULE_4__["LocationActions"],
            _native_native_communication_service__WEBPACK_IMPORTED_MODULE_5__["NativeCommunicationService"],
            _store_actions_UserActions__WEBPACK_IMPORTED_MODULE_6__["UserActions"],
            _store_actions_StatusActions__WEBPACK_IMPORTED_MODULE_7__["StatusActions"],
            _angular_material__WEBPACK_IMPORTED_MODULE_8__["MatDialog"],
            _alert_service__WEBPACK_IMPORTED_MODULE_9__["AlertService"],
            _utility_service__WEBPACK_IMPORTED_MODULE_10__["UtilityService"]])
    ], TransmissionService);
    return TransmissionService;
}());



/***/ }),

/***/ "./src/app/services/utility.service.ts":
/*!*********************************************!*\
  !*** ./src/app/services/utility.service.ts ***!
  \*********************************************/
/*! exports provided: UtilityService */
/***/ (function(module, __webpack_exports__, __webpack_require__) {

"use strict";
__webpack_require__.r(__webpack_exports__);
/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, "UtilityService", function() { return UtilityService; });
/* harmony import */ var _angular_core__WEBPACK_IMPORTED_MODULE_0__ = __webpack_require__(/*! @angular/core */ "./node_modules/@angular/core/fesm5/core.js");
/* harmony import */ var _alert_service__WEBPACK_IMPORTED_MODULE_1__ = __webpack_require__(/*! ./alert.service */ "./src/app/services/alert.service.ts");
var __decorate = (undefined && undefined.__decorate) || function (decorators, target, key, desc) {
    var c = arguments.length, r = c < 3 ? target : desc === null ? desc = Object.getOwnPropertyDescriptor(target, key) : desc, d;
    if (typeof Reflect === "object" && typeof Reflect.decorate === "function") r = Reflect.decorate(decorators, target, key, desc);
    else for (var i = decorators.length - 1; i >= 0; i--) if (d = decorators[i]) r = (c < 3 ? d(r) : c > 3 ? d(target, key, r) : d(target, key)) || r;
    return c > 3 && r && Object.defineProperty(target, key, r), r;
};
var __metadata = (undefined && undefined.__metadata) || function (k, v) {
    if (typeof Reflect === "object" && typeof Reflect.metadata === "function") return Reflect.metadata(k, v);
};


var UtilityService = /** @class */ (function () {
    function UtilityService(alertService) {
        this.alertService = alertService;
    }
    UtilityService.prototype.checkIfEmail = function (email) {
        var isEmail;
        var re = new RegExp(/^([\w\-\.]+)@((\[([0-9]{1,3}\.){3}[0-9]{1,3}\])|(([\w\-]+\.)+)([a-zA-Z]{2,4}))$/);
        // const re = new RegExp('^([\w\-\.]+)@((\[([0-9]{1,3}\.){3}[0-9]{1,3}\])|(([\w\-]+\.)+)([a-zA-Z]{2,4}))$');
        isEmail = re.test(email);
        return isEmail;
    };
    UtilityService.prototype.triggerJumpTimeline = function (data) {
        this.alertService.sendMessageLocationid(data);
    };
    UtilityService = __decorate([
        Object(_angular_core__WEBPACK_IMPORTED_MODULE_0__["Injectable"])({
            providedIn: 'root'
        }),
        __metadata("design:paramtypes", [_alert_service__WEBPACK_IMPORTED_MODULE_1__["AlertService"]])
    ], UtilityService);
    return UtilityService;
}());



/***/ }),

/***/ "./src/app/store/actions/LocationActions.ts":
/*!**************************************************!*\
  !*** ./src/app/store/actions/LocationActions.ts ***!
  \**************************************************/
/*! exports provided: CHANGE_CURRENT_LOCATION, CHANGE_CONNECTED_EXHIBIT, CHANGE_LOCATION_STATUS, CHANGE_LOCATION_SOCKET_STATUS, CHANGE_AT_EXHIBIT_PARENT_ID, CHANGE_ON_EXHIBIT, CHANGE_LOCATION_SCANNING, CHANGE_CLOSEST_EXHIBIT, LocationActions */
/***/ (function(module, __webpack_exports__, __webpack_require__) {

"use strict";
__webpack_require__.r(__webpack_exports__);
/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, "CHANGE_CURRENT_LOCATION", function() { return CHANGE_CURRENT_LOCATION; });
/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, "CHANGE_CONNECTED_EXHIBIT", function() { return CHANGE_CONNECTED_EXHIBIT; });
/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, "CHANGE_LOCATION_STATUS", function() { return CHANGE_LOCATION_STATUS; });
/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, "CHANGE_LOCATION_SOCKET_STATUS", function() { return CHANGE_LOCATION_SOCKET_STATUS; });
/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, "CHANGE_AT_EXHIBIT_PARENT_ID", function() { return CHANGE_AT_EXHIBIT_PARENT_ID; });
/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, "CHANGE_ON_EXHIBIT", function() { return CHANGE_ON_EXHIBIT; });
/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, "CHANGE_LOCATION_SCANNING", function() { return CHANGE_LOCATION_SCANNING; });
/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, "CHANGE_CLOSEST_EXHIBIT", function() { return CHANGE_CLOSEST_EXHIBIT; });
/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, "LocationActions", function() { return LocationActions; });
var CHANGE_CURRENT_LOCATION = 'CHANGE_CURRENT_LOCATION';
var CHANGE_CONNECTED_EXHIBIT = 'CHANGE_CONNECTED_EXHIBIT';
var CHANGE_LOCATION_STATUS = 'CHANGE_LOCATION_STATUS';
var CHANGE_LOCATION_SOCKET_STATUS = 'CHANGE_LOCATION_SOCKET_STATUS';
var CHANGE_AT_EXHIBIT_PARENT_ID = 'CHANGE_AT_EXHIBIT_PARENT_ID';
var CHANGE_ON_EXHIBIT = 'CHANGE_ON_EXHIBIT';
var CHANGE_LOCATION_SCANNING = 'CHANGE_LOCATION_SCANNING';
var CHANGE_CLOSEST_EXHIBIT = 'CHANGE_CLOSEST_EXHIBIT';
var LocationActions = /** @class */ (function () {
    function LocationActions() {
    }
    LocationActions.prototype.changeCurrentLocation = function (location) {
        return {
            type: CHANGE_CURRENT_LOCATION,
            location: location
        };
    };
    LocationActions.prototype.changeLocationStatus = function (status) {
        return {
            type: CHANGE_LOCATION_STATUS,
            locationStatus: status
        };
    };
    LocationActions.prototype.changeLocationSocketStatus = function (status) {
        return {
            type: CHANGE_LOCATION_SOCKET_STATUS,
            locationSocketStatus: status
        };
    };
    LocationActions.prototype.changeConnectedExhibit = function (connected) {
        return {
            type: CHANGE_CONNECTED_EXHIBIT,
            connectedToExhibit: connected
        };
    };
    LocationActions.prototype.changeAtExhibitParentId = function (locationId) {
        return {
            type: CHANGE_AT_EXHIBIT_PARENT_ID,
            atExhibitParentId: locationId
        };
    };
    LocationActions.prototype.changeOnExhibit = function (isOnExhibit) {
        return {
            type: CHANGE_ON_EXHIBIT,
            onExhibit: isOnExhibit
        };
    };
    LocationActions.prototype.changeClosestExhibit = function (closestExhibitId) {
        return {
            type: CHANGE_CLOSEST_EXHIBIT,
            closestExhibit: closestExhibitId
        };
    };
    LocationActions.prototype.changeLocationScanning = function (isScanning) {
        return {
            type: CHANGE_LOCATION_SCANNING,
            locationScanning: isScanning
        };
    };
    return LocationActions;
}());



/***/ }),

/***/ "./src/app/store/actions/StatusActions.ts":
/*!************************************************!*\
  !*** ./src/app/store/actions/StatusActions.ts ***!
  \************************************************/
/*! exports provided: CHANGE_ERROR_MESSAGE, CHANGE_SUCCESS_MESSAGE, CHANGE_LOGGED_IN, CHANGE_LANGUAGE, StatusActions */
/***/ (function(module, __webpack_exports__, __webpack_require__) {

"use strict";
__webpack_require__.r(__webpack_exports__);
/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, "CHANGE_ERROR_MESSAGE", function() { return CHANGE_ERROR_MESSAGE; });
/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, "CHANGE_SUCCESS_MESSAGE", function() { return CHANGE_SUCCESS_MESSAGE; });
/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, "CHANGE_LOGGED_IN", function() { return CHANGE_LOGGED_IN; });
/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, "CHANGE_LANGUAGE", function() { return CHANGE_LANGUAGE; });
/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, "StatusActions", function() { return StatusActions; });
var CHANGE_ERROR_MESSAGE = 'CHANGE_ERROR_MESSAGE';
var CHANGE_SUCCESS_MESSAGE = 'CHANGE_SUCCESS_MESSAGE';
var CHANGE_LOGGED_IN = 'CHANGE_LOGGED_IN';
var CHANGE_LANGUAGE = 'CHANGE_LANGUAGE';
var StatusActions = /** @class */ (function () {
    function StatusActions() {
    }
    StatusActions.prototype.changeErrorMessage = function (error) {
        return {
            type: CHANGE_ERROR_MESSAGE,
            error: error
        };
    };
    StatusActions.prototype.changeSuccessMessage = function (success) {
        return {
            type: CHANGE_SUCCESS_MESSAGE,
            success: success
        };
    };
    StatusActions.prototype.changeLoggedIn = function (isLoggedIn) {
        return {
            type: CHANGE_LOGGED_IN,
            isLoggedIn: isLoggedIn
        };
    };
    StatusActions.prototype.changeLanguage = function (language) {
        return {
            type: CHANGE_LANGUAGE,
            language: language
        };
    };
    return StatusActions;
}());



/***/ }),

/***/ "./src/app/store/actions/UserActions.ts":
/*!**********************************************!*\
  !*** ./src/app/store/actions/UserActions.ts ***!
  \**********************************************/
/*! exports provided: CHANGE_USER, CHANGE_PLATFORM, CHANGE_LOOKUPTABLE, CHANGE_TOKEN, UserActions */
/***/ (function(module, __webpack_exports__, __webpack_require__) {

"use strict";
__webpack_require__.r(__webpack_exports__);
/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, "CHANGE_USER", function() { return CHANGE_USER; });
/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, "CHANGE_PLATFORM", function() { return CHANGE_PLATFORM; });
/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, "CHANGE_LOOKUPTABLE", function() { return CHANGE_LOOKUPTABLE; });
/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, "CHANGE_TOKEN", function() { return CHANGE_TOKEN; });
/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, "UserActions", function() { return UserActions; });
var CHANGE_USER = 'CHANGE_USER';
var CHANGE_PLATFORM = 'CHANGE_PLATFORM';
var CHANGE_LOOKUPTABLE = 'CHANGE_LOOKUPTABLE';
var CHANGE_TOKEN = 'CHANGE_TOKEN';
var UserActions = /** @class */ (function () {
    function UserActions() {
    }
    UserActions.prototype.changeUser = function (user) {
        return {
            type: CHANGE_USER,
            user: user
        };
    };
    UserActions.prototype.changePlatform = function (platform) {
        return {
            type: CHANGE_PLATFORM,
            platform: platform
        };
    };
    UserActions.prototype.changeLookupTable = function (lookupTable) {
        return {
            type: CHANGE_LOOKUPTABLE,
            lookupTable: lookupTable
        };
    };
    UserActions.prototype.changeToken = function (token) {
        return {
            type: CHANGE_TOKEN,
            token: token
        };
    };
    return UserActions;
}());



/***/ }),

/***/ "./src/app/store/reducers/rootReducer.ts":
/*!***********************************************!*\
  !*** ./src/app/store/reducers/rootReducer.ts ***!
  \***********************************************/
/*! exports provided: rootReducer */
/***/ (function(module, __webpack_exports__, __webpack_require__) {

"use strict";
__webpack_require__.r(__webpack_exports__);
/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, "rootReducer", function() { return rootReducer; });
/* harmony import */ var _actions_LocationActions__WEBPACK_IMPORTED_MODULE_0__ = __webpack_require__(/*! ../actions/LocationActions */ "./src/app/store/actions/LocationActions.ts");
/* harmony import */ var _actions_UserActions__WEBPACK_IMPORTED_MODULE_1__ = __webpack_require__(/*! ../actions/UserActions */ "./src/app/store/actions/UserActions.ts");
/* harmony import */ var _actions_StatusActions__WEBPACK_IMPORTED_MODULE_2__ = __webpack_require__(/*! ../actions/StatusActions */ "./src/app/store/actions/StatusActions.ts");
var __assign = (undefined && undefined.__assign) || function () {
    __assign = Object.assign || function(t) {
        for (var s, i = 1, n = arguments.length; i < n; i++) {
            s = arguments[i];
            for (var p in s) if (Object.prototype.hasOwnProperty.call(s, p))
                t[p] = s[p];
        }
        return t;
    };
    return __assign.apply(this, arguments);
};



var initialState = {
    token: undefined,
    lookupTable: [],
    user: undefined,
    currentLocation: undefined,
    locationStatus: undefined,
    locationSocketStatus: undefined,
    connectedToExhibit: false,
    platform: undefined,
    atExhibitParentId: undefined,
    onExhibit: undefined,
    errorMessage: undefined,
    successMessage: undefined,
    closestExhibit: undefined,
    locationScanning: true,
    isLoggedIn: false,
    language: 1
};
function rootReducer(state, action) {
    if (state === void 0) { state = initialState; }
    switch (action.type) {
        case _actions_LocationActions__WEBPACK_IMPORTED_MODULE_0__["CHANGE_CURRENT_LOCATION"]:
            return __assign({}, state, { currentLocation: action.location });
        case _actions_LocationActions__WEBPACK_IMPORTED_MODULE_0__["CHANGE_CONNECTED_EXHIBIT"]:
            return __assign({}, state, { connectedToExhibit: action.connectedToExhibit });
        case _actions_LocationActions__WEBPACK_IMPORTED_MODULE_0__["CHANGE_LOCATION_STATUS"]:
            return __assign({}, state, { locationStatus: action.locationStatus });
        case _actions_LocationActions__WEBPACK_IMPORTED_MODULE_0__["CHANGE_LOCATION_SOCKET_STATUS"]:
            return __assign({}, state, { locationSocketStatus: action.locationSocketStatus });
        case _actions_LocationActions__WEBPACK_IMPORTED_MODULE_0__["CHANGE_AT_EXHIBIT_PARENT_ID"]:
            return __assign({}, state, { atExhibitParentId: action.atExhibitParentId });
        case _actions_LocationActions__WEBPACK_IMPORTED_MODULE_0__["CHANGE_ON_EXHIBIT"]:
            return __assign({}, state, { onExhibit: action.onExhibit });
        case _actions_LocationActions__WEBPACK_IMPORTED_MODULE_0__["CHANGE_CLOSEST_EXHIBIT"]:
            return __assign({}, state, { closestExhibit: action.closestExhibit });
        case _actions_LocationActions__WEBPACK_IMPORTED_MODULE_0__["CHANGE_LOCATION_SCANNING"]:
            return __assign({}, state, { locationScanning: action.locationScanning });
        case _actions_UserActions__WEBPACK_IMPORTED_MODULE_1__["CHANGE_USER"]:
            return __assign({}, state, { user: action.user });
        case _actions_UserActions__WEBPACK_IMPORTED_MODULE_1__["CHANGE_TOKEN"]:
            return __assign({}, state, { token: action.token });
        case _actions_UserActions__WEBPACK_IMPORTED_MODULE_1__["CHANGE_PLATFORM"]:
            return __assign({}, state, { platform: action.platform });
        case _actions_UserActions__WEBPACK_IMPORTED_MODULE_1__["CHANGE_LOOKUPTABLE"]:
            return __assign({}, state, { lookupTable: action.lookupTable });
        case _actions_StatusActions__WEBPACK_IMPORTED_MODULE_2__["CHANGE_ERROR_MESSAGE"]:
            return __assign({}, state, { errorMessage: action.error });
        case _actions_StatusActions__WEBPACK_IMPORTED_MODULE_2__["CHANGE_SUCCESS_MESSAGE"]:
            return __assign({}, state, { successMessage: action.success });
        case _actions_StatusActions__WEBPACK_IMPORTED_MODULE_2__["CHANGE_LOGGED_IN"]:
            return __assign({}, state, { isLoggedIn: action.isLoggedIn });
        case _actions_StatusActions__WEBPACK_IMPORTED_MODULE_2__["CHANGE_LANGUAGE"]:
            return __assign({}, state, { language: action.language });
        default:
            return state;
    }
}


/***/ }),

/***/ "./src/environments/environment.ts":
/*!*****************************************!*\
  !*** ./src/environments/environment.ts ***!
  \*****************************************/
/*! exports provided: environment */
/***/ (function(module, __webpack_exports__, __webpack_require__) {

"use strict";
__webpack_require__.r(__webpack_exports__);
/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, "environment", function() { return environment; });
// The file contents for the current environment will overwrite these during build.
// The build system defaults to the dev environment which uses `environment.ts`, but if you do
// `ng build --env=prod` then `environment.prod.ts` will be used instead.
// The list of which env maps to which file can be found in `.angular-cli.json`.
var environment = {
    production: false,
    godURL: 'https://god.meeteux.fhstp.ac.at:3000'
    // godURL: 'http://localhost:3000'
    // godURL: 'https://god.meeteux.fhstp.ac.at'
};


/***/ }),

/***/ "./src/main.ts":
/*!*********************!*\
  !*** ./src/main.ts ***!
  \*********************/
/*! no exports provided */
/***/ (function(module, __webpack_exports__, __webpack_require__) {

"use strict";
__webpack_require__.r(__webpack_exports__);
/* harmony import */ var _angular_core__WEBPACK_IMPORTED_MODULE_0__ = __webpack_require__(/*! @angular/core */ "./node_modules/@angular/core/fesm5/core.js");
/* harmony import */ var _angular_platform_browser_dynamic__WEBPACK_IMPORTED_MODULE_1__ = __webpack_require__(/*! @angular/platform-browser-dynamic */ "./node_modules/@angular/platform-browser-dynamic/fesm5/platform-browser-dynamic.js");
/* harmony import */ var _app_app_module__WEBPACK_IMPORTED_MODULE_2__ = __webpack_require__(/*! ./app/app.module */ "./src/app/app.module.ts");
/* harmony import */ var _environments_environment__WEBPACK_IMPORTED_MODULE_3__ = __webpack_require__(/*! ./environments/environment */ "./src/environments/environment.ts");
/* harmony import */ var hammerjs__WEBPACK_IMPORTED_MODULE_4__ = __webpack_require__(/*! hammerjs */ "./node_modules/hammerjs/hammer.js");
/* harmony import */ var hammerjs__WEBPACK_IMPORTED_MODULE_4___default = /*#__PURE__*/__webpack_require__.n(hammerjs__WEBPACK_IMPORTED_MODULE_4__);





if (_environments_environment__WEBPACK_IMPORTED_MODULE_3__["environment"].production) {
    Object(_angular_core__WEBPACK_IMPORTED_MODULE_0__["enableProdMode"])();
}
Object(_angular_platform_browser_dynamic__WEBPACK_IMPORTED_MODULE_1__["platformBrowserDynamic"])().bootstrapModule(_app_app_module__WEBPACK_IMPORTED_MODULE_2__["AppModule"])
    .catch(function (err) { return console.log(err); });


/***/ }),

/***/ 0:
/*!***************************!*\
  !*** multi ./src/main.ts ***!
  \***************************/
/*! no static exports found */
/***/ (function(module, exports, __webpack_require__) {

module.exports = __webpack_require__(/*! /Users/kblumenstein/Development/meeteux/max-odwww/src/main.ts */"./src/main.ts");


/***/ }),

/***/ 1:
/*!********************!*\
  !*** ws (ignored) ***!
  \********************/
/*! no static exports found */
/***/ (function(module, exports) {

/* (ignored) */

/***/ })

},[[0,"runtime","vendor"]]]);
//# sourceMappingURL=main.js.map