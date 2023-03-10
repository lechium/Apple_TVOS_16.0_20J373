//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PrototypeTools/PTSettings.h>

@class UIViewSpringAnimationBehavior;

__attribute__((visibility("hidden")))
@interface _UISpringAnimationPrototypeSettings : PTSettings
{
    UIViewSpringAnimationBehavior *_springAnimationBehavior;	// 8 = 0x8
    double _dampingRatio;	// 16 = 0x10
    double _response;	// 24 = 0x18
}

+ (id)settingsControllerModule;	// IMP=0x0060000000d0d64e
- (void).cxx_destruct;	// IMP=0x0000000000d0d900
@property(nonatomic) double response; // @synthesize response=_response;
@property(nonatomic) double dampingRatio; // @synthesize dampingRatio=_dampingRatio;
- (id)springAnimationBehavior;	// IMP=0x0000000000d0d860
- (void)setDefaultValues;	// IMP=0x0000000000d0d5e8

@end

