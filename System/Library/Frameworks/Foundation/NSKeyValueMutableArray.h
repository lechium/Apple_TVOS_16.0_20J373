//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSMutableArray.h>

@class NSObject, NSString;

__attribute__((visibility("hidden")))
@interface NSKeyValueMutableArray : NSMutableArray
{
    NSObject *_container;	// 8 = 0x8
    NSString *_key;	// 16 = 0x10
}

+ (id)_proxyShare;	// IMP=0x00100000004d2923
- (void)setArray:(id)arg1;	// IMP=0x00000000004d2ab4
- (void)dealloc;	// IMP=0x00000000004d2a57
- (void)_proxyNonGCFinalize;	// IMP=0x00000000004d2a13
- (id)_proxyInitWithContainer:(id)arg1 getter:(id)arg2;	// IMP=0x00000000004d2966
- (CDStruct_a70f6672)_proxyLocator;	// IMP=0x00000000004d294a

@end

