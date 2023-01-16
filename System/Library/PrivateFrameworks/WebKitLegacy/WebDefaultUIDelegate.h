//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface WebDefaultUIDelegate : NSObject
{
}

+ (id)sharedUIDelegate;	// IMP=0x00100000000ea7f0
- (void)webViewSupportedOrientationsUpdated:(id)arg1;	// IMP=0x00000000000eab10
- (void)webView:(id)arg1 exceededApplicationCacheOriginQuotaForSecurityOrigin:(id)arg2 totalSpaceNeeded:(unsigned long long)arg3;	// IMP=0x00000000000eab00
- (void)webView:(id)arg1 didScrollDocumentInFrameView:(id)arg2;	// IMP=0x00000000000eaaf0
- (void)webView:(id)arg1 didDrawRect:(struct CGRect)arg2;	// IMP=0x00000000000eaae0
- (void)webView:(id)arg1 printFrameView:(id)arg2;	// IMP=0x00000000000eaad0
- (void)webView:(id)arg1 runOpenPanelForFileButtonWithResultListener:(id)arg2;	// IMP=0x00000000000eaac0
- (id)webView:(id)arg1 runJavaScriptTextInputPanelWithPrompt:(id)arg2 defaultText:(id)arg3 initiatedByFrame:(id)arg4;	// IMP=0x00000000000eaab0
- (_Bool)webView:(id)arg1 runJavaScriptConfirmPanelWithMessage:(id)arg2 initiatedByFrame:(id)arg3;	// IMP=0x00000000000eaaa0
- (void)webView:(id)arg1 runJavaScriptAlertPanelWithMessage:(id)arg2 initiatedByFrame:(id)arg3;	// IMP=0x00000000000eaa90
- (struct CGRect)webViewFrame:(id)arg1;	// IMP=0x00000000000eaa30
- (void)webView:(id)arg1 setFrame:(struct CGRect)arg2;	// IMP=0x00000000000eaa20
- (void)webView:(id)arg1 setResizable:(_Bool)arg2;	// IMP=0x00000000000eaa10
- (_Bool)webViewIsResizable:(id)arg1;	// IMP=0x00000000000eaa00
- (void)webView:(id)arg1 setStatusBarVisible:(_Bool)arg2;	// IMP=0x00000000000ea9f0
- (_Bool)webViewIsStatusBarVisible:(id)arg1;	// IMP=0x00000000000ea9e0
- (void)webView:(id)arg1 setToolbarsVisible:(_Bool)arg2;	// IMP=0x00000000000ea9d0
- (_Bool)webViewAreToolbarsVisible:(id)arg1;	// IMP=0x00000000000ea9c0
- (void)webView:(id)arg1 mouseDidMoveOverElement:(id)arg2 modifierFlags:(unsigned long long)arg3;	// IMP=0x00000000000ea9b0
- (id)webViewStatusText:(id)arg1;	// IMP=0x00000000000ea9a0
- (void)webView:(id)arg1 setStatusText:(id)arg2;	// IMP=0x00000000000ea990
- (void)webView:(id)arg1 makeFirstResponder:(id)arg2;	// IMP=0x00000000000ea950
- (id)webViewFirstResponder:(id)arg1;	// IMP=0x00000000000ea920
- (void)webViewUnfocus:(id)arg1;	// IMP=0x00000000000ea910
- (void)webViewFocus:(id)arg1;	// IMP=0x00000000000ea900
- (void)webViewClose:(id)arg1;	// IMP=0x00000000000ea8f0
- (void)webViewShow:(id)arg1;	// IMP=0x00000000000ea8e0
- (id)webView:(id)arg1 createWebViewWithRequest:(id)arg2 userGesture:(_Bool)arg3;	// IMP=0x00000000000ea8d0
- (id)webView:(id)arg1 createWebViewWithRequest:(id)arg2 windowFeatures:(id)arg3;	// IMP=0x00000000000ea830

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

