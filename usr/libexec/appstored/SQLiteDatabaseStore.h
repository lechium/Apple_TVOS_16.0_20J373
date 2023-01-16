//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class SQLiteDatabase;

@interface SQLiteDatabaseStore : NSObject
{
    SQLiteDatabase *_database;	// 8 = 0x8
}

+ (_Bool)createOrMigrateStoreUsingSchema:(id)arg1;	// IMP=0x00200000001f6914
+ (id)storeDescriptor;	// IMP=0x00100000001f68fb
- (void).cxx_destruct;	// IMP=0x00200000001f6987
@property(readonly) SQLiteDatabase *database; // @synthesize database=_database;
- (void)readUsingSession:(CDUnknownBlockType)arg1;	// IMP=0x00100000001f6957
- (void)modifyUsingTransactionClass:(Class)arg1 withBlock:(CDUnknownBlockType)arg2;	// IMP=0x00100000001f6938
- (void)modifyUsingTransaction:(CDUnknownBlockType)arg1;	// IMP=0x00100000001f691c
- (id)initWithDatabase:(id)arg1;	// IMP=0x00100000001f6890

@end

