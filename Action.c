Action()
{

	web_set_sockets_option("SSL_VERSION", "TLS1.2");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("blazedemo.com", 
		"URL=http://blazedemo.com/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/favicon.ico", ENDITEM, 
		"Url=https://js-agent.newrelic.com/nr-1153.min.js", ENDITEM, 
		"Url=https://bam.nr-data.net/1/338cffe5d3?a=6657625&v=1153.61ee9ba&to=YVxSYxACCxcEVRFfWlgWcVQWCgoKSg%3D%3D&rst=22314&ref=http://blazedemo.com/&ap=10&be=7230&fe=13076&dc=13071&perf=%7B%22timing%22:%7B%22of%22:1575787709500,%22n%22:0,%22f%22:62,%22dn%22:2774,%22dne%22:3449,%22c%22:3449,%22ce%22:3978,%22rq%22:5521,%22rp%22:7091,%22rpe%22:7105,%22dl%22:7183,%22di%22:13070,%22ds%22:13070,%22de%22:13074,%22dc%22:13075,%22l%22:13075,%22le%22:13078%7D,%22navigation%22:%7B%7D%7D&fp=13429&fcp=13429&at="
		"TRtRFVgYGBk%3D&jsonp=NREUM.setToken", ENDITEM, 
		LAST);

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"none");

	web_url("bins.json", 
		"URL=https://www.gstatic.com/autofill/hourly/bins.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		LAST);

	web_revert_auto_header("Sec-Fetch-Mode");

	web_revert_auto_header("Sec-Fetch-Site");

	web_url("merchants.json", 
		"URL=https://www.gstatic.com/autofill/weekly/merchants.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		LAST);

	web_add_cookie("gnar_containerId=Lf8QJrex0aq7; DOMAIN=auth.grammarly.com");

	web_add_cookie("intellimizeEUID=c6f73d60c9.1525689035; DOMAIN=auth.grammarly.com");

	web_add_cookie("_ga=GA1.2.96135390.1527158206; DOMAIN=auth.grammarly.com");

	web_add_cookie("ga_clientId=96135390.1527158206; DOMAIN=auth.grammarly.com");

	web_add_cookie("sid=AABGILfnF7nHj0dIeueSVtVBjSqbAYQMMcQdww; DOMAIN=auth.grammarly.com");

	web_add_cookie("tdi=gflkk2ph4je1r2f4; DOMAIN=auth.grammarly.com");

	web_add_cookie("grauth=AABHO03q3SGHokRBYEdQlaO65FS3dHKIpotcQsiiLoGPv8f5iMhZ4-MRqD_Jg5uRcHBjVc62_87jUKmb; DOMAIN=auth.grammarly.com");

	web_add_cookie("csrf-token=AABHO4C6Rs6QD5jqQiaLBYsyCAmaTI87dEal+w; DOMAIN=auth.grammarly.com");

	web_add_cookie("experiment_groups=denali_link_to_kaza_enabled|denali_rtf_existing_u_enabled|fluid_gdocs_rollout_enabled|safari_migration_backup_notif1_enabled|officeaddin_ue_exp3_enabled|extension_new_rich_text_fields_enabled|safari_migration_inline_disabled_enabled|gdocs_for_chrome_enabled|safari_migration_popup_editor_disabled_enabled|officeaddin_proofit_exp3_enabled|safari_migration_inline_warning_enabled|gb_in_editor_free_Test1|emogenie_beta_enabled|officeaddin_perf_exp3_enabled; DOMAIN="
		"auth.grammarly.com");

	web_add_cookie("fHiVA8qWTy=fHiVA8qWTy; DOMAIN=auth.grammarly.com");

	web_add_auto_header("Origin", 
		"chrome-extension://kbfnbcaeplbcioakkpcpgfkobkghlhen");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	web_add_auto_header("x-client-type", 
		"extension-chrome");

	web_add_auto_header("x-client-version", 
		"14.939.0");

	web_add_auto_header("x-container-id", 
		"Lf8QJrex0aq7");

	web_add_auto_header("x-csrf-token", 
		"AABHO4C6Rs6QD5jqQiaLBYsyCAmaTI87dEal+w");

	web_custom_request("oranonymous", 
		"URL=https://auth.grammarly.com/v3/user/oranonymous?app=chromeExt", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		"EncType=", 
		EXTRARES, 
		"Url=https://d3cv4a9a9wh0bt.cloudfront.net/dynamicConfig.json", "Referer=", ENDITEM, 
		"Url=https://ssl.gstatic.com/safebrowsing/csd/client_model_v5_ext_variation_0.pb", "Referer=", ENDITEM, 
		"Url=https://ssl.gstatic.com/safebrowsing/csd/client_model_v5_variation_0.pb", "Referer=", ENDITEM, 
		LAST);

	web_add_cookie("gnar_containerId=Lf8QJrex0aq7; DOMAIN=data.grammarly.com");

	web_add_cookie("intellimizeEUID=c6f73d60c9.1525689035; DOMAIN=data.grammarly.com");

	web_add_cookie("_ga=GA1.2.96135390.1527158206; DOMAIN=data.grammarly.com");

	web_add_cookie("ga_clientId=96135390.1527158206; DOMAIN=data.grammarly.com");

	web_add_cookie("sid=AABGILfnF7nHj0dIeueSVtVBjSqbAYQMMcQdww; DOMAIN=data.grammarly.com");

	web_add_cookie("tdi=gflkk2ph4je1r2f4; DOMAIN=data.grammarly.com");

	web_add_cookie("grauth=AABHO03q3SGHokRBYEdQlaO65FS3dHKIpotcQsiiLoGPv8f5iMhZ4-MRqD_Jg5uRcHBjVc62_87jUKmb; DOMAIN=data.grammarly.com");

	web_add_cookie("csrf-token=AABHO4C6Rs6QD5jqQiaLBYsyCAmaTI87dEal+w; DOMAIN=data.grammarly.com");

	web_add_cookie("experiment_groups=denali_link_to_kaza_enabled|denali_rtf_existing_u_enabled|fluid_gdocs_rollout_enabled|safari_migration_backup_notif1_enabled|officeaddin_ue_exp3_enabled|extension_new_rich_text_fields_enabled|safari_migration_inline_disabled_enabled|gdocs_for_chrome_enabled|safari_migration_popup_editor_disabled_enabled|officeaddin_proofit_exp3_enabled|safari_migration_inline_warning_enabled|gb_in_editor_free_Test1|emogenie_beta_enabled|officeaddin_perf_exp3_enabled; DOMAIN="
		"data.grammarly.com");

	web_add_cookie("fHiVA8qWTy=fHiVA8qWTy; DOMAIN=data.grammarly.com");

	web_add_cookie("Bhlr25Clfw=Bhlr25Clfw; DOMAIN=data.grammarly.com");

	web_custom_request("mimic", 
		"URL=https://data.grammarly.com/api/mimic", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"originalUri\":\"\",\"newUser\":false}", 
		LAST);

	web_add_cookie("He28nDTbfv=He28nDTbfv; DOMAIN=data.grammarly.com");

	web_custom_request("find", 
		"URL=https://data.grammarly.com/api/props/v2/find", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"regex\":\"STAT:.*\"}", 
		LAST);

	web_revert_auto_header("x-client-type");

	web_revert_auto_header("x-client-version");

	web_revert_auto_header("x-container-id");

	web_revert_auto_header("x-csrf-token");

	web_custom_request("logv2", 
		"URL=https://f-log-extension.grammarly.io/logv2", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"logger\":\"bg.user.mimic.fail\",\"level\":\"WARN\",\"extra\":{\"json\":\"{}\"},\"application\":\"extensionChrome\",\"version\":\"14.939.0\",\"env\":\"prod\"}", 
		LAST);

	web_add_cookie("Xaadvt0G1u=Xaadvt0G1u; DOMAIN=data.grammarly.com");

	web_add_header("x-client-type", 
		"extension-chrome");

	web_add_header("x-client-version", 
		"14.939.0");

	web_add_header("x-container-id", 
		"Lf8QJrex0aq7");

	web_add_header("x-csrf-token", 
		"AABHO4C6Rs6QD5jqQiaLBYsyCAmaTI87dEal+w");

	web_custom_request("dialectStrong", 
		"URL=https://data.grammarly.com/api/props/v2/dialectStrong", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t11.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		LAST);

	web_custom_request("logv2_2", 
		"URL=https://f-log-extension.grammarly.io/logv2", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t12.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"logger\":\"bg.state.dapi.prop.initialize\",\"level\":\"INFO\",\"extra\":{\"json\":\"{\\\"name\\\":\\\"dialectStrong\\\"}\"},\"application\":\"extensionChrome\",\"version\":\"14.939.0\",\"env\":\"prod\",\"userId\":\"719947775\"}", 
		LAST);

	web_add_header("x-client-type", 
		"extension-chrome");

	web_add_header("x-client-version", 
		"14.939.0");

	web_add_header("x-container-id", 
		"Lf8QJrex0aq7");

	web_add_header("x-csrf-token", 
		"AABHO4C6Rs6QD5jqQiaLBYsyCAmaTI87dEal+w");

	web_custom_request("emogenieEmojiState", 
		"URL=https://data.grammarly.com/api/props/v2/emogenieEmojiState", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t13.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		LAST);

	web_custom_request("logv2_3", 
		"URL=https://f-log-extension.grammarly.io/logv2", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t14.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"logger\":\"bg.state.dapi.prop.initialize\",\"level\":\"INFO\",\"extra\":{\"json\":\"{\\\"name\\\":\\\"emogenieEmojiState\\\"}\"},\"application\":\"extensionChrome\",\"version\":\"14.939.0\",\"env\":\"prod\",\"userId\":\"719947775\"}", 
		LAST);

	web_add_auto_header("Origin", 
		"http://blazedemo.com");

	lr_think_time(6);

	web_custom_request("338cffe5d3", 
		"URL=https://bam.nr-data.net/events/1/338cffe5d3?a=6657625&v=1153.61ee9ba&to=YVxSYxACCxcEVRFfWlgWcVQWCgoKSg%3D%3D&rst=32320&ref=http://blazedemo.com/", 
		"Method=POST", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://blazedemo.com/", 
		"Snapshot=t15.inf", 
		"EncType=text/plain", 
		"Body=bel.6;e,'fp,ad1,;e,'fcp,ad1,;e,'fi,j44,2;5,'type,'keydown;6,'fid,26.", 
		LAST);

	web_revert_auto_header("Sec-Fetch-Mode");

	web_revert_auto_header("Sec-Fetch-Site");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	lr_think_time(22);

	web_submit_data("reserve.php", 
		"Action=http://blazedemo.com/reserve.php", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://blazedemo.com/", 
		"Snapshot=t16.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=fromPort", "Value=Boston", ENDITEM, 
		"Name=toPort", "Value=Dublin", ENDITEM, 
		EXTRARES, 
		"Url=https://bam.nr-data.net/1/338cffe5d3?a=6657625&v=1153.61ee9ba&to=YVxSYxACCxcEVRFfWlgWcVQWCgoKSkQARVBET1UZEgsV&rst=591&ref=http://blazedemo.com/reserve.php&ap=12&be=522&fe=585&dc=581&perf=%7B%22timing%22:%7B%22of%22:1575787764309,%22n%22:0,%22u%22:504,%22ue%22:504,%22f%22:10,%22dn%22:10,%22dne%22:10,%22c%22:10,%22ce%22:10,%22rq%22:13,%22rp%22:497,%22rpe%22:550,%22dl%22:510,%22di%22:580,%22ds%22:580,%22de%22:584,%22dc%22:585,%22l%22:585,%22le%22:586%7D,%22navigation%22:%7B%7D%7D&fp=578&fcp=578&"
		"at=TRtRFVgYGBk%3D&jsonp=NREUM.setToken", ENDITEM, 
		LAST);

	web_add_header("Sec-Fetch-Mode", 
		"cors");

	web_add_header("Sec-Fetch-Site", 
		"cross-site");

	lr_think_time(9);

	web_custom_request("338cffe5d3_2", 
		"URL=https://bam.nr-data.net/events/1/338cffe5d3?a=6657625&v=1153.61ee9ba&to=YVxSYxACCxcEVRFfWlgWcVQWCgoKSkQARVBET1UZEgsV&rst=10593&ref=http://blazedemo.com/reserve.php", 
		"Method=POST", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://blazedemo.com/reserve.php", 
		"Snapshot=t17.inf", 
		"EncType=text/plain", 
		"Body=bel.6;e,'fp,g2,;e,'fcp,g2,", 
		LAST);

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_submit_data("purchase.php", 
		"Action=http://blazedemo.com/purchase.php", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://blazedemo.com/reserve.php", 
		"Snapshot=t18.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=flight", "Value=43", ENDITEM, 
		"Name=price", "Value=472.56", ENDITEM, 
		"Name=airline", "Value=Virgin America", ENDITEM, 
		"Name=fromPort", "Value=Boston", ENDITEM, 
		"Name=toPort", "Value=Dublin", ENDITEM, 
		EXTRARES, 
		"Url=https://bam.nr-data.net/1/338cffe5d3?a=6657625&v=1153.61ee9ba&to=YVxSYxACCxcEVRFfWlgWcVQWCgoKSkYQRFZeWENSTBMNFA%3D%3D&rst=952&ref=http://blazedemo.com/purchase.php&ap=12&be=826&fe=937&dc=934&perf=%7B%22timing%22:%7B%22of%22:1575787777804,%22n%22:0,%22u%22:723,%22ue%22:723,%22f%22:11,%22dn%22:11,%22dne%22:11,%22c%22:11,%22ce%22:11,%22rq%22:14,%22rp%22:716,%22rpe%22:928,%22dl%22:728,%22di%22:934,%22ds%22:934,%22de%22:936,%22dc%22:936,%22l%22:936,%22le%22:940%7D,%22navigation%22:%7B%7D%7D&fp=896&"
		"fcp=896&at=TRtRFVgYGBk%3D&jsonp=NREUM.setToken", ENDITEM, 
		"Url=https://easylist-downloads.adblockplus.org/abp-filters-anti-cv.txt?addonName=adblockforchrome&addonVersion=4.0.2&application=chrome&applicationVersion=78.0.3904.108&platform=chromium&platformVersion=78.0.3904.108&lastVersion=201912080440&downloadCount=4%2B", "Referer=", ENDITEM, 
		"Url=https://clients1.google.com/tbproxy/af/query?q=Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRMZfwVxi72XZx8jLR87IvskIy2U1FseJCMtRmcVfSQjLfKo5J0kIy2gOKZlJCMt6vDYJyQjLYbgKPAkIy14tFrJJCMtUk1bISQjLdGFyLgkFA==", "Referer=", ENDITEM, 
		LAST);

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	web_custom_request("338cffe5d3_3", 
		"URL=https://bam.nr-data.net/events/1/338cffe5d3?a=6657625&v=1153.61ee9ba&to=YVxSYxACCxcEVRFfWlgWcVQWCgoKSkQARVBET1UZEgsV&rst=14214&ref=http://blazedemo.com/reserve.php", 
		"Method=POST", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://blazedemo.com/reserve.php", 
		"Snapshot=t19.inf", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=bel.6;e,'fi,ab0,2;5,'type,'pointerdown;6,'fid,14.", 
		LAST);

	web_add_header("Sec-Fetch-Mode", 
		"cors");

	lr_think_time(4);

	web_custom_request("338cffe5d3_4", 
		"URL=https://bam.nr-data.net/events/1/338cffe5d3?a=6657625&v=1153.61ee9ba&to=YVxSYxACCxcEVRFfWlgWcVQWCgoKSkYQRFZeWENSTBMNFA%3D%3D&rst=10964&ref=http://blazedemo.com/purchase.php", 
		"Method=POST", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://blazedemo.com/purchase.php", 
		"Snapshot=t20.inf", 
		"EncType=text/plain", 
		"Body=bel.6;e,'fp,ow,;e,'fcp,ow,;e,'fi,3um,2;5,'type,'pointerdown;6,'fid,1.", 
		LAST);

	return 0;
}