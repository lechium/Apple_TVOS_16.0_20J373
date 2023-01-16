//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CloudKit/CKSQLiteCacheTableEntry.h>

@class CKUserIdentity, CKUserIdentityLookupInfo, NSNumber, NSString;

@interface CKDIdentityCacheTableEntry : CKSQLiteCacheTableEntry
{
    NSNumber *_rowid;	// 8 = 0x8
    CKUserIdentityLookupInfo *_lookupInfo;	// 16 = 0x10
    NSString *_containerIdentifier;	// 24 = 0x18
    NSString *_dataSeparationHash;	// 32 = 0x20
    CKUserIdentity *_identity;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000054230
@property(retain, nonatomic) CKUserIdentity *identity; // @synthesize identity=_identity;
@property(retain, nonatomic) NSString *dataSeparationHash; // @synthesize dataSeparationHash=_dataSeparationHash;
@property(retain, nonatomic) NSString *containerIdentifier; // @synthesize containerIdentifier=_containerIdentifier;
@property(retain, nonatomic) CKUserIdentityLookupInfo *lookupInfo; // @synthesize lookupInfo=_lookupInfo;
@property(retain, nonatomic) NSNumber *rowid; // @synthesize rowid=_rowid;

@end
