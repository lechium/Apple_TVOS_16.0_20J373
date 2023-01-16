//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class WKContentView;
@protocol WKFormControl;

__attribute__((visibility("hidden")))
@interface WKFormPeripheralBase : NSObject
{
    struct RetainPtr<NSObject<WKFormControl>> _control;	// 8 = 0x8
    _Bool _editing;	// 16 = 0x10
    _Bool _singleTapShouldEndEditing;	// 17 = 0x11
    WKContentView *_view;	// 24 = 0x18
}

- (id).cxx_construct;	// IMP=0x0000000000398985
- (void).cxx_destruct;	// IMP=0x0000000000398965
@property(nonatomic) _Bool singleTapShouldEndEditing; // @synthesize singleTapShouldEndEditing=_singleTapShouldEndEditing;
@property(readonly, nonatomic, getter=isEditing) _Bool editing; // @synthesize editing=_editing;
@property(readonly, nonatomic) WKContentView *view; // @synthesize view=_view;
- (_Bool)handleKeyEvent:(id)arg1;	// IMP=0x0000000000398831
@property(readonly, nonatomic) NSObject<WKFormControl> *control;
- (id)assistantView;	// IMP=0x0000000000398811
- (void)endEditing;	// IMP=0x00000000003987ef
- (void)beginEditing;	// IMP=0x00000000003987cd
- (id)initWithView:(id)arg1 control:(void *)arg2;	// IMP=0x0000000000398763

@end

