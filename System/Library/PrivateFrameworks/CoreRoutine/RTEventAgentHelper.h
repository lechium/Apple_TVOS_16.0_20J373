//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface RTEventAgentHelper : NSObject
{
    NSString *_restorationIdentifier;	// 8 = 0x8
}

+ (id)signingIdentifierFromSelf;	// IMP=0x00600000000261e3
+ (_Bool)launchdManaged;	// IMP=0x00600000000261ab
- (void).cxx_destruct;	// IMP=0x00000000000265bf
@property(retain, nonatomic) NSString *restorationIdentifier; // @synthesize restorationIdentifier=_restorationIdentifier;
- (id)initWithRestorationIdentifier:(id)arg1;	// IMP=0x000000000002621d

@end

