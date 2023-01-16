//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, _GCDevicePhysicalInputBase;
@protocol GCDevice, NSObject><NSCopying><NSSecureCoding;

__attribute__((visibility("hidden")))
@interface _GCDevicePhysicalInputComponent : NSObject
{
    id _gamepadEventObservation;	// 8 = 0x8
    id <NSObject><NSCopying><NSSecureCoding> _identifier;	// 16 = 0x10
    id <GCDevice> _device;	// 24 = 0x18
    _GCDevicePhysicalInputBase *_physicalInput;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000007d8ee
@property(readonly) id <NSObject><NSCopying><NSSecureCoding> identifier; // @synthesize identifier=_identifier;
- (id)capture;	// IMP=0x000000000007d7cf
- (void)setDispatchQueue:(id)arg1;	// IMP=0x000000000007d778
- (void)setDevice:(id)arg1;	// IMP=0x000000000007d762
- (id)init;	// IMP=0x000000000007d737
- (id)initWithIdentifier:(id)arg1 defaultPhysicalInput:(id)arg2;	// IMP=0x000000000007d5b8
- (void)setGamepadEventSource:(id)arg1;	// IMP=0x000000000007d92a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
