//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MPServerObjectDatabase;

__attribute__((visibility("hidden")))
@interface MusicKit_SoftLinking_MPServerObjectDatabase : NSObject
{
    MPServerObjectDatabase *_underlyingServerObjectDatabase;	// 8 = 0x8
}

+ (id)sharedServerObjectDatabase;	// IMP=0x0040000000006291
- (void).cxx_destruct;	// IMP=0x0000000000006a01
- (id)payloadDataForIdentifier:(id)arg1 catalogTypes:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000064d7
- (id)importObjectsFromRequest:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x0000000000006433
- (id)_initWithUnderlyingServerObjectDatabase:(id)arg1;	// IMP=0x00000000000063c8

@end

