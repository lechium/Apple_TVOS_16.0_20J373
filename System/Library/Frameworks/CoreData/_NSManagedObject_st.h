//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSManagedObjectContext, NSManagedObjectID;

__attribute__((visibility("hidden")))
@interface _NSManagedObject_st : NSObject
{
    int _cd_rc;	// 8 = 0x8
    unsigned int _cd_lockingInfo;	// 12 = 0xc
    unsigned int _cd_stateFlags;	// 16 = 0x10
    unsigned int _cd_extraFlags;	// 20 = 0x14
    id _cd_rawData;	// 24 = 0x18
    NSManagedObjectContext *_cd_managedObjectContext;	// 32 = 0x20
    NSManagedObjectID *_cd_objectID;	// 40 = 0x28
    void *_cd_extras;	// 48 = 0x30
    id _cd_queueReference;	// 56 = 0x38
}

@end

