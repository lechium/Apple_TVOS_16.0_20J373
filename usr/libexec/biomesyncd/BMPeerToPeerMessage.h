//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BMSyncDevicePeer;

@interface BMPeerToPeerMessage : NSObject
{
    BMSyncDevicePeer *_peer;	// 8 = 0x8
    unsigned long long _protocolVersion;	// 16 = 0x10
    double _walltime;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x002000000001cc16
@property(nonatomic) double walltime; // @synthesize walltime=_walltime;
@property(nonatomic) unsigned long long protocolVersion; // @synthesize protocolVersion=_protocolVersion;
@property(retain, nonatomic) BMSyncDevicePeer *peer; // @synthesize peer=_peer;
- (id)dictionaryRepresentation;	// IMP=0x001000000001ca9f
- (id)initFromDictionary:(id)arg1;	// IMP=0x001000000001c968

@end

