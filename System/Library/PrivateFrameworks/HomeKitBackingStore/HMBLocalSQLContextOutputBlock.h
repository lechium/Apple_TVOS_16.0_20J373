//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMBLocalSQLContext, HMFActivity, NSString;

__attribute__((visibility("hidden")))
@interface HMBLocalSQLContextOutputBlock : HMFObject
{
    NSString *_identifier;	// 8 = 0x8
    unsigned long long _blockRow;	// 16 = 0x10
    HMFActivity *_activity;	// 24 = 0x18
    HMBLocalSQLContext *_owner;	// 32 = 0x20
    unsigned long long _zoneRow;	// 40 = 0x28
}

+ (id)logCategory;	// IMP=0x0010000000071121
- (void).cxx_destruct;	// IMP=0x0000000000070eba
@property(readonly, nonatomic) unsigned long long zoneRow; // @synthesize zoneRow=_zoneRow;
@property(nonatomic) __weak HMBLocalSQLContext *owner; // @synthesize owner=_owner;
@property(readonly, nonatomic) HMFActivity *activity; // @synthesize activity=_activity;
@property(nonatomic) unsigned long long blockRow; // @synthesize blockRow=_blockRow;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)logIdentifier;	// IMP=0x0000000000070df9
- (id)abort;	// IMP=0x0000000000070967
- (id)commit:(id)arg1;	// IMP=0x0000000000070438
- (id)updateModelID:(id)arg1 modelEncoding:(unsigned long long)arg2 modelData:(id)arg3;	// IMP=0x00000000000700e8
- (id)initWithOwner:(id)arg1 identifier:(id)arg2 zoneRow:(unsigned long long)arg3 blockRow:(unsigned long long)arg4;	// IMP=0x000000000006fe62

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

