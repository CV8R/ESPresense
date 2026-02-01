/*
 * Web UI Routes
 *
 * Compressed Size Summary:
 * ui_app_immutable_assets_css: 24,202 bytes
 * ui_html: 3,888 bytes
 * ui_app_immutable_entry_js: 62,546 bytes
 * ui_app_immutable_nodes_js: 590 bytes
 * ui_svg: 456 bytes
 * Total: 91,682 bytes
 */

#pragma once

#include <ESPAsyncWebServer.h>
#include "ui_app_immutable_assets_css.h"
#include "ui_html.h"
#include "ui_app_immutable_entry_js.h"
#include "ui_app_immutable_nodes_js.h"
#include "ui_svg.h"

inline void setupRoutes(AsyncWebServer* server) {
    server->on("/app/immutable/assets/internal.BRhgnC6i.css", HTTP_GET, serveAppImmutableAssetsInternalBRhgnC6iCss);
    server->on("/app/immutable/assets/start.BRhgnC6i.css", HTTP_GET, serveAppImmutableAssetsStartBRhgnC6iCss);
    server->on("/app/immutable/entry/app.Bsfkv7l6.js", HTTP_GET, serveAppImmutableEntryAppBsfkv7l6Js);
    server->on("/app/immutable/entry/start.Bmq4b4lB.js", HTTP_GET, serveAppImmutableEntryStartBmq4b4lBJs);
    server->on("/app/immutable/nodes/0.BWQgvBy3.js", HTTP_GET, serveAppImmutableNodes_0BwQgvBy3Js);
    server->on("/app/immutable/nodes/1.CXJd6AJ4.js", HTTP_GET, serveAppImmutableNodes_1CxJd6Aj4Js);
    server->on("/app/immutable/nodes/2.DxXQwe2n.js", HTTP_GET, serveAppImmutableNodes_2DxXQwe2nJs);
    server->on("/app/immutable/nodes/3.BDAPtEJJ.js", HTTP_GET, serveAppImmutableNodes_3BdaPtEjjJs);
    server->on("/app/immutable/nodes/4.DlcMa6DO.js", HTTP_GET, serveAppImmutableNodes_4DlcMa6DoJs);
    server->on("/app/immutable/nodes/5.R5puLXTn.js", HTTP_GET, serveAppImmutableNodes_5R5puLxTnJs);
    server->on("/app/immutable/nodes/6.NIdsmtL0.js", HTTP_GET, serveAppImmutableNodes_6NIdsmtL0Js);
    server->on("/app/immutable/nodes/7.1P9XvZsL.js", HTTP_GET, serveAppImmutableNodes_7_1P9XvZsLJs);
    server->on("/favicon.svg", HTTP_GET, serveFaviconSvg);
    // HTML routes
    server->on("/devices", HTTP_GET, serveDevicesHtml);
    server->on("/devices.html", HTTP_GET, serveDevicesHtml);
    server->on("/fingerprints", HTTP_GET, serveFingerprintsHtml);
    server->on("/fingerprints.html", HTTP_GET, serveFingerprintsHtml);
    server->on("/hardware", HTTP_GET, serveHardwareHtml);
    server->on("/hardware.html", HTTP_GET, serveHardwareHtml);
    server->on("/", HTTP_GET, serveIndexHtml);
    server->on("/network", HTTP_GET, serveNetworkHtml);
    server->on("/network.html", HTTP_GET, serveNetworkHtml);
    server->on("/settings", HTTP_GET, serveSettingsHtml);
    server->on("/settings.html", HTTP_GET, serveSettingsHtml);
}
