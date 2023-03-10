//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class SSSQLiteDatabase;

@interface PromotedIAPDatabase : NSObject
{
    SSSQLiteDatabase *_database;	// 8 = 0x8
}

+ (_Bool)_setupDatabase:(id)arg1;	// IMP=0x004000000019fb2b
+ (void)_createDatabaseDirectory;	// IMP=0x001000000019fa05
- (void).cxx_destruct;	// IMP=0x002000000019fc4b
- (void)removeOverridesForApp:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000019f536
- (void)setOrderForIAPs:(id)arg1 app:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000019ec15
- (void)getOrderForIAPsInApp:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000019e7da
- (void)setVisibility:(long long)arg1 forIAP:(id)arg2 app:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x001000000019df02
- (void)getVisibilityForAllIAPsInApp:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000019da6e
- (void)getVisibilityForIAPs:(id)arg1 app:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000019d2db
- (void)readUsingTransactionBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000019d1e1
- (void)readAsyncUsingTransactionBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000019d12e
- (void)modifyUsingTransactionBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000019d030
- (id)initWithDatabaseURL:(id)arg1 readOnly:(_Bool)arg2;	// IMP=0x001000000019cf44
- (id)init;	// IMP=0x001000000019ceb2

@end

