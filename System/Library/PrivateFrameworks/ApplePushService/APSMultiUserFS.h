//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface APSMultiUserFS : NSObject
{
    NSString *_systemPathCache;	// 8 = 0x8
    _Bool _isMultiUser;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x006000000001fbe1
- (void).cxx_destruct;	// IMP=0x000000000001fd5f
@property(readonly) _Bool isMultiUser; // @synthesize isMultiUser=_isMultiUser;
- (id)systemPath;	// IMP=0x000000000001fccf
- (id)initWithIsMultiUserMode:(_Bool)arg1;	// IMP=0x000000000001fc94

@end

