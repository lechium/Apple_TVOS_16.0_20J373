//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface SHClusterMetadataQuery : NSObject
{
}

+ (_Bool)writeMetadata:(id)arg1 toDatabaseAtLocation:(id)arg2 error:(id *)arg3;	// IMP=0x0080000000006b20
+ (id)metadataFromDatabaseAtLocation:(id)arg1 error:(id *)arg2;	// IMP=0x008000000000662d
+ (id)dateFormatter;	// IMP=0x00800000000065d7
+ (id)stringFromStoreType:(long long)arg1;	// IMP=0x00800000000065bb
+ (long long)dataStoreTypeFromString:(id)arg1;	// IMP=0x008000000000646b

@end

