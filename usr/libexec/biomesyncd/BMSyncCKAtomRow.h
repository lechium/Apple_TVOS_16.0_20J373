//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BMStoreBookmark, BMSyncCRDTLocationRow, CKAtomReference, CKDistributedTimestamp, NSData;

@interface BMSyncCKAtomRow : NSObject
{
    BMSyncCRDTLocationRow *_location;	// 8 = 0x8
    CKDistributedTimestamp *_timestamp;	// 16 = 0x10
    BMSyncCRDTLocationRow *_referenceLocation;	// 24 = 0x18
    CKAtomReference *_causalReference;	// 32 = 0x20
    BMStoreBookmark *_bookmark;	// 40 = 0x28
    unsigned long long _type;	// 48 = 0x30
    long long _valueVersion;	// 56 = 0x38
    NSData *_valueData;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x001000000001f58d
@property(readonly, nonatomic) NSData *valueData; // @synthesize valueData=_valueData;
@property(readonly, nonatomic) long long valueVersion; // @synthesize valueVersion=_valueVersion;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
@property(readonly, nonatomic) BMStoreBookmark *bookmark; // @synthesize bookmark=_bookmark;
@property(readonly, nonatomic) CKAtomReference *causalReference; // @synthesize causalReference=_causalReference;
@property(readonly, nonatomic) BMSyncCRDTLocationRow *referenceLocation; // @synthesize referenceLocation=_referenceLocation;
@property(readonly, nonatomic) CKDistributedTimestamp *timestamp; // @synthesize timestamp=_timestamp;
@property(readonly, nonatomic) BMSyncCRDTLocationRow *location; // @synthesize location=_location;
- (id)description;	// IMP=0x001000000001f40b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000001f400
- (unsigned long long)hash;	// IMP=0x001000000001f3c1
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000001f330
- (id)initWithLocation:(id)arg1 timestamp:(id)arg2 referenceLocation:(id)arg3 causalReference:(id)arg4 type:(unsigned long long)arg5 valueVersion:(long long)arg6 valueData:(id)arg7;	// IMP=0x001000000001f129
- (id)initWithLocation:(id)arg1 timestamp:(id)arg2 referenceLocation:(id)arg3 causalReference:(id)arg4 type:(unsigned long long)arg5 bookmark:(id)arg6;	// IMP=0x001000000001ef2a
- (id)initWithFMResultSet:(id)arg1;	// IMP=0x001000000001f5e1

@end

