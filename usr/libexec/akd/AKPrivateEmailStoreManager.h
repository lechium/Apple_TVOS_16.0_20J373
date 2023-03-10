//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AKSQLiteExecutor;

@interface AKPrivateEmailStoreManager : NSObject
{
    AKSQLiteExecutor *_executor;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x0040000000005c72
- (void).cxx_destruct;	// IMP=0x00200000000086df
@property(retain, nonatomic) AKSQLiteExecutor *executor; // @synthesize executor=_executor;
- (id)fetchAllPrivateEmailsWithError:(id *)arg1;	// IMP=0x0010000000008322
- (_Bool)setProtocolVersion:(int)arg1 error:(id *)arg2;	// IMP=0x0010000000008016
- (int)currentProtocolVersion;	// IMP=0x0010000000007d06
- (_Bool)commitChangesToCacheWithInformation:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000007430
- (_Bool)setCurrentEmailListVersion:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000070f2
- (id)currentEmailListVersion;	// IMP=0x0010000000006df8
- (id)_hashKeyIfNecessary:(id)arg1;	// IMP=0x0010000000006d51
- (id)emailForContext:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000067c0
- (_Bool)removePrivateEmailForContext:(id)arg1 error:(id *)arg2;	// IMP=0x001000000000641e
- (_Bool)setPrivateEmail:(id)arg1 keyAlreadyHashed:(_Bool)arg2 error:(id *)arg3;	// IMP=0x0010000000005eae
- (void)clearDatabase:(id *)arg1;	// IMP=0x0010000000005e53
- (id)initWithPath:(id)arg1;	// IMP=0x0010000000005d5d
- (id)initWithExecutor:(id)arg1;	// IMP=0x0010000000005cf2
- (id)initWithDatabasePath:(id)arg1;	// IMP=0x0010000000005ce0
- (id)init;	// IMP=0x0010000000005cc7

@end

