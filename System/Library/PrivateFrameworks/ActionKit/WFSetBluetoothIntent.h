//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/INIntent.h>

@class NSNumber;

__attribute__((visibility("hidden")))
@interface WFSetBluetoothIntent : INIntent
{
}

- (void)applyWithSettingsClient:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000002f0eb0
@property(readonly, nonatomic) Class settingsClientClass;

// Remaining properties
@property(nonatomic) long long operation; // @dynamic operation;
@property(copy, nonatomic) NSNumber *state; // @dynamic state;

@end

