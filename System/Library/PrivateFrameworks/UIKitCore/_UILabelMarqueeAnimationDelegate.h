//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UILabel;

__attribute__((visibility("hidden")))
@interface _UILabelMarqueeAnimationDelegate : NSObject
{
    _Bool _started;	// 8 = 0x8
    _Bool _updated;	// 9 = 0x9
    _Bool _suppressEnded;	// 10 = 0xa
    UILabel *_label;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000010bf83b
@property(nonatomic) _Bool suppressEnded; // @synthesize suppressEnded=_suppressEnded;
@property(nonatomic) __weak UILabel *label; // @synthesize label=_label;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;	// IMP=0x00000000010bf613
- (void)animationDidStart:(id)arg1;	// IMP=0x00000000010bf338
- (id)initWithLabel:(id)arg1;	// IMP=0x00000000010bf2d4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

