//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface IDSMultiplexerLocalTransport : NSObject
{
}

- (void)invalidate;	// IMP=0x00400000002411b0
- (void)setFanoutEncryptionManager:(id)arg1;	// IMP=0x0010000000241170
- (id)fanoutEncryptionManager;	// IMP=0x0010000000241160
- (void)setPacketBufferReadHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000241120
- (_Bool)tryConsumePacketBuffer:(CDStruct_dc2926a3 *)arg1;	// IMP=0x0010000000241100
- (id)initWithIdentifier:(id)arg1;	// IMP=0x00100000002410b0

@end

