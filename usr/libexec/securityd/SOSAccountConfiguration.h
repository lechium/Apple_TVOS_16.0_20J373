//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class MISSING_TYPE, NSMutableArray;

@interface SOSAccountConfiguration : PBCodable
{
    NSMutableArray *_pendingBackupPeers;	// 8 = 0x8
    _Bool _ringUpdateFlag;	// 16 = 0x10
    struct {
        unsigned int ringUpdateFlag:1;
    } _has;	// 20 = 0x14
}

+ (Class)pendingBackupPeersType;	// IMP=0x00200000001ea95f
- (void).cxx_destruct;	// IMP=0x00200000001ea94c
@property(nonatomic) _Bool ringUpdateFlag; // @synthesize ringUpdateFlag=_ringUpdateFlag;
@property(retain, nonatomic) NSMutableArray *pendingBackupPeers; // @synthesize pendingBackupPeers=_pendingBackupPeers;
- (void)mergeFrom:(id)arg1;	// IMP=0x00100000001ea7a2
- (unsigned long long)hash;	// IMP=0x00100000001ea74f
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000001ea67e
- (MISSING_TYPE *)copyWithZone: /* Error: Ran out of types for this method. */;	// IMP=0x00100000001ea48c
- (void)copyTo:(id)arg1;	// IMP=0x00100000001ea3a7
- (void)writeTo:(id)arg1;	// IMP=0x00100000001ea23f
- (_Bool)readFrom:(id)arg1;	// IMP=0x00100000001ea02b
- (id)dictionaryRepresentation;	// IMP=0x00100000001e9f6b
- (id)description;	// IMP=0x00100000001e9ebc
@property(nonatomic) _Bool hasRingUpdateFlag;
- (id)pendingBackupPeersAtIndex:(unsigned long long)arg1;	// IMP=0x00100000001e9e5a
- (unsigned long long)pendingBackupPeersCount;	// IMP=0x00100000001e9e3d
- (void)addPendingBackupPeers:(id)arg1;	// IMP=0x00100000001e9dd3
- (void)clearPendingBackupPeers;	// IMP=0x00100000001e9db6

@end

