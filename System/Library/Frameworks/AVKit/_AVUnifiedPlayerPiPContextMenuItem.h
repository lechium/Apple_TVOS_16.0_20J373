//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UIImage;

__attribute__((visibility("hidden")))
@interface _AVUnifiedPlayerPiPContextMenuItem : NSObject
{
    NSString *_accessibilityIdentifier;	// 8 = 0x8
    NSString *_title;	// 16 = 0x10
    UIImage *_image;	// 24 = 0x18
}

+ (id)moveItem;	// IMP=0x0010000000105a40
+ (id)swapItem;	// IMP=0x0010000000105969
+ (id)stopItem;	// IMP=0x0010000000105892
- (void).cxx_destruct;	// IMP=0x000000000010585f
@property(readonly, nonatomic) UIImage *image; // @synthesize image=_image;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *accessibilityIdentifier; // @synthesize accessibilityIdentifier=_accessibilityIdentifier;
@property(readonly, nonatomic, getter=isOn) _Bool on;
@property(readonly, nonatomic, getter=isDestructive) _Bool destructive;
@property(readonly, nonatomic, getter=isDisabled) _Bool disabled;
- (id)initWithTitle:(id)arg1 image:(id)arg2;	// IMP=0x0000000000105781
- (_Bool)updateImageToPictureInPictureQuadrant:(long long)arg1;	// IMP=0x00000000001056cf

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

