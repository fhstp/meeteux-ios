var headline = $("#headline");
var selection = $("#selector");

function set_headline (text) {
    headline.text(text);
}

function call_native () {
    var prop = selection.val();
    set_headline("asked for " + prop + "...");
    window.webkit.messageHandlers.observe.postMessage(prop);
}

setTimeout(call_native, 1000);

selection.on("change", call_native);
