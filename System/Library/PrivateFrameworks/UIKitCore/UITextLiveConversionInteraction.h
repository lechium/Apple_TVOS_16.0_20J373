//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UITextInteraction.h"

@class UIResponder;
@protocol UITextInput;

__attribute__((visibility("hidden")))
@interface UITextLiveConversionInteraction : UITextInteraction
{
    UIResponder<UITextInput> *_textInput;	// 8 = 0x8
    long long _panOffset;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000008c0a72
@property(readonly) double pointSize;
- (void)_pan:(id)arg1;	// IMP=0x00000000008c08e4
- (void)_tap:(id)arg1;	// IMP=0x00000000008c0236
- (id)_liveConversionPanGestureRecognizer;	// IMP=0x00000000008c01f9
- (id)_liveConversionTapGestureRecognizer;	// IMP=0x00000000008c01bc
- (void)willMoveToView:(id)arg1;	// IMP=0x00000000008c00f5
- (id)initWithTextInput:(id)arg1;	// IMP=0x00000000008c0087

@end
