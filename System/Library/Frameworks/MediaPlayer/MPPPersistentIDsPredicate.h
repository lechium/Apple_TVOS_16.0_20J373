//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

__attribute__((visibility("hidden")))
@interface MPPPersistentIDsPredicate : PBCodable
{
    struct {
        long long *list;
        unsigned long long count;
        unsigned long long size;
    } _persistentIDs;	// 8 = 0x8
    _Bool _shouldContain;	// 32 = 0x20
    struct {
        unsigned int shouldContain:1;
    } _has;	// 36 = 0x24
}

@property(nonatomic) _Bool shouldContain; // @synthesize shouldContain=_shouldContain;
- (unsigned long long)hash;	// IMP=0x00000000002a03a5
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002a0317
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000002a0295
- (void)copyTo:(id)arg1;	// IMP=0x00000000002a01a6
- (void)writeTo:(id)arg1;	// IMP=0x00000000002a0105
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000002a00f8
- (id)dictionaryRepresentation;	// IMP=0x00000000002a0012
- (id)description;	// IMP=0x000000000029ff63
- (void)setPersistentIDs:(long long *)arg1 count:(unsigned long long)arg2;	// IMP=0x000000000029ff4c
- (long long)persistentIDsAtIndex:(unsigned long long)arg1;	// IMP=0x000000000029fe7f
- (void)addPersistentIDs:(long long)arg1;	// IMP=0x000000000029fe6b
- (void)clearPersistentIDs;	// IMP=0x000000000029fe5a
@property(readonly, nonatomic) long long *persistentIDs;
@property(readonly, nonatomic) unsigned long long persistentIDsCount;
@property(nonatomic) _Bool hasShouldContain;
- (void)dealloc;	// IMP=0x000000000029fdb2

@end

