//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface GKDatabaseConnectionFactory : NSObject
{
    NSString *_databasePath;	// 8 = 0x8
}

+ (id)factoryWithDatabaseName:(id)arg1 environment:(long long)arg2;	// IMP=0x0040000000171416
+ (id)pathForDatabaseName:(id)arg1 environment:(long long)arg2;	// IMP=0x0010000000171352
+ (id)directoryForEnvironment:(long long)arg1;	// IMP=0x001000000017132e
- (void).cxx_destruct;	// IMP=0x0020000000171560
@property(copy, nonatomic) NSString *databasePath; // @synthesize databasePath=_databasePath;
- (id)connectionForWriterWithName:(id)arg1;	// IMP=0x001000000017153f
- (id)connectionForReaderWithName:(id)arg1;	// IMP=0x0010000000171537
- (id)initWithPath:(id)arg1;	// IMP=0x00100000001714cf

@end
