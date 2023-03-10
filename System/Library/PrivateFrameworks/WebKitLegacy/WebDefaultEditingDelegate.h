//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface WebDefaultEditingDelegate : NSObject
{
}

+ (id)sharedEditingDelegate;	// IMP=0x00800000000ea080
- (id)undoManagerForWebView:(id)arg1;	// IMP=0x00000000000ea1c0
- (void)webViewDidChangeSelection:(id)arg1;	// IMP=0x00000000000ea1b0
- (void)webViewDidChangeTypingStyle:(id)arg1;	// IMP=0x00000000000ea1a0
- (void)webViewDidEndEditing:(id)arg1;	// IMP=0x00000000000ea190
- (void)webViewDidChange:(id)arg1;	// IMP=0x00000000000ea180
- (void)webViewDidBeginEditing:(id)arg1;	// IMP=0x00000000000ea170
- (id)documentFragmentForPasteboardItemAtIndex:(long long)arg1;	// IMP=0x00000000000ea160
- (id)supportedPasteboardTypesForCurrentSelection;	// IMP=0x00000000000ea150
- (_Bool)webView:(id)arg1 doCommandBySelector:(SEL)arg2;	// IMP=0x00000000000ea140
- (_Bool)webView:(id)arg1 shouldChangeTypingStyle:(id)arg2 toStyle:(id)arg3;	// IMP=0x00000000000ea130
- (_Bool)webView:(id)arg1 shouldMoveRangeAfterDelete:(id)arg2 replacingRange:(id)arg3;	// IMP=0x00000000000ea120
- (_Bool)webView:(id)arg1 shouldApplyStyle:(id)arg2 toElementsInDOMRange:(id)arg3;	// IMP=0x00000000000ea110
- (_Bool)webView:(id)arg1 shouldChangeSelectedDOMRange:(id)arg2 toDOMRange:(id)arg3 affinity:(unsigned long long)arg4 stillSelecting:(_Bool)arg5;	// IMP=0x00000000000ea100
- (_Bool)webView:(id)arg1 shouldDeleteDOMRange:(id)arg2;	// IMP=0x00000000000ea0f0
- (_Bool)webView:(id)arg1 shouldInsertText:(id)arg2 replacingDOMRange:(id)arg3 givenAction:(long long)arg4;	// IMP=0x00000000000ea0e0
- (_Bool)webView:(id)arg1 shouldInsertNode:(id)arg2 replacingDOMRange:(id)arg3 givenAction:(long long)arg4;	// IMP=0x00000000000ea0d0
- (_Bool)webView:(id)arg1 shouldEndEditingInDOMRange:(id)arg2;	// IMP=0x00000000000ea0c0
- (_Bool)webView:(id)arg1 shouldBeginEditingInDOMRange:(id)arg2;	// IMP=0x00000000000ea0b0

@end

