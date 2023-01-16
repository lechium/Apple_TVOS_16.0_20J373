//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CSSpeechController, NSString;

@interface ADAudioPowerCoreSpeechProvider : NSObject
{
    unsigned long long _channel;	// 8 = 0x8
    CSSpeechController *_speechController;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000001393fa
- (void)didEndAccessPower;	// IMP=0x00100000001393f4
- (_Bool)getAveragePower:(float *)arg1 andPeakPower:(float *)arg2;	// IMP=0x001000000013936f
- (void)willBeginAccessPower;	// IMP=0x0010000000139354
- (id)initWithChannel:(unsigned long long)arg1 speechController:(id)arg2;	// IMP=0x00100000001392de

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

