//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface DMDAirPlayManager : NSObject
{
    _Bool mDeviceIDIsMAC;	// 8 = 0x8
    NSString *_currentlyPickedDestinationName;	// 16 = 0x10
    NSString *_currentlyPickedDestinationDeviceID;	// 24 = 0x18
}

+ (id)shared;	// IMP=0x002000000000f201
- (void).cxx_destruct;	// IMP=0x00200000000107bf
@property(copy, nonatomic) NSString *currentlyPickedDestinationDeviceID; // @synthesize currentlyPickedDestinationDeviceID=_currentlyPickedDestinationDeviceID;
@property(copy, nonatomic) NSString *currentlyPickedDestinationName; // @synthesize currentlyPickedDestinationName=_currentlyPickedDestinationName;
- (id)_discoverDeviceWithDestinationName:(id)arg1 scanWaitTime:(double)arg2 sessionType:(unsigned long long)arg3;	// IMP=0x001000000001030d
- (id)_discoverDeviceWithDestinationDeviceID:(id)arg1 scanWaitTime:(double)arg2 error:(id *)arg3;	// IMP=0x001000000000ff72
- (void)_promptUserToMirrorOnDisplayNamed:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x001000000000fc36
- (_Bool)_setOutputDevices:(id)arg1 forSessionType:(unsigned long long)arg2 password:(id)arg3 error:(id *)arg4;	// IMP=0x001000000000f9c7
- (void *)_outputContextForSessionType:(unsigned long long)arg1;	// IMP=0x001000000000f99b
- (_Bool)stopAirPlaySessionOfType:(unsigned long long)arg1 error:(id *)arg2;	// IMP=0x001000000000f97e
- (_Bool)startAirPlaySessionWithDestinationName:(id)arg1 destinationDeviceID:(id)arg2 password:(id)arg3 scanWaitTime:(double)arg4 sessionType:(unsigned long long)arg5 force:(_Bool)arg6 error:(id *)arg7;	// IMP=0x001000000000f2ca
- (id)initPrivate;	// IMP=0x001000000000f266

@end
