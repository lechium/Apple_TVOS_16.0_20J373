//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface SQLiteConnectionOptions : NSObject
{
    _Bool _readOnly;	// 8 = 0x8
    long long _cacheSize;	// 16 = 0x10
    NSString *_databasePath;	// 24 = 0x18
    NSString *_encryptionKeyId;	// 32 = 0x20
    NSString *_protectionType;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00200000000a121b
@property(nonatomic, getter=isReadOnly) _Bool readOnly; // @synthesize readOnly=_readOnly;
@property(copy, nonatomic) NSString *protectionType; // @synthesize protectionType=_protectionType;
@property(copy, nonatomic) NSString *encryptionKeyId; // @synthesize encryptionKeyId=_encryptionKeyId;
@property(readonly) NSString *databasePath; // @synthesize databasePath=_databasePath;
@property(nonatomic) long long cacheSize; // @synthesize cacheSize=_cacheSize;
- (int)_encryptDatabase:(struct sqlite3 *)arg1;	// IMP=0x00100000000a0f73
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000a0ece
- (void)setCacheSizeWithNumberOfKilobytes:(long long)arg1;	// IMP=0x00100000000a0eb9
- (void)setCacheSizeWithNumberOfDatabasePages:(long long)arg1;	// IMP=0x00100000000a0ea7
- (int)applyToDatabase:(struct sqlite3 *)arg1;	// IMP=0x00100000000a0dd8
- (id)initWithDatabasePath:(id)arg1;	// IMP=0x00100000000a0d4b

@end
