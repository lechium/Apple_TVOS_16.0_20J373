//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UIView;
@protocol _UITextContent;

__attribute__((visibility("hidden")))
@interface _UITextPlainLinkInteractionHandler : NSObject
{
    struct _NSRange _range;	// 8 = 0x8
    UIView<_UITextContent> *_view;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000061673
- (id)_shareLinkAction:(id)arg1;	// IMP=0x00000000000613bd
- (id)_copyLinkAction:(id)arg1;	// IMP=0x0000000000061216
- (id)_openURLAction:(id)arg1;	// IMP=0x0000000000060fb2
- (id)_titleForLink:(id)arg1;	// IMP=0x0000000000060f9d
- (CDUnknownBlockType)_handlerRequiringUnlockedDevice:(CDUnknownBlockType)arg1;	// IMP=0x0000000000060e1c
- (id)link;	// IMP=0x0000000000060ce9
- (id)defaultAction;	// IMP=0x0000000000060c81
- (id)initWithItem:(id)arg1 inTextContentView:(id)arg2;	// IMP=0x0000000000060bba

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
