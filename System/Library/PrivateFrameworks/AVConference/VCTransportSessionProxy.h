//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface VCTransportSessionProxy
{
    unsigned int _transportSessionID;	// 168 = 0xa8
}

- (_Bool)isIPv6;	// IMP=0x0000000000327508
- (unsigned int)networkMTU;	// IMP=0x00000000003274fd
- (int)networkInterfaceType;	// IMP=0x00000000003274f2
- (int)createVFD:(int *)arg1 forStreamType:(unsigned int)arg2;	// IMP=0x000000000032737f
- (void)start;	// IMP=0x0000000000327366
- (id)initWithTransportSessionID:(unsigned int)arg1;	// IMP=0x0000000000327297

@end
