//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSPersonNameComponents, NSString;

__attribute__((visibility("hidden")))
@interface LPCollaborationHandle : NSObject
{
    NSString *_handle;	// 8 = 0x8
    NSPersonNameComponents *_nameComponents;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000057712
@property(retain, nonatomic) NSPersonNameComponents *nameComponents; // @synthesize nameComponents=_nameComponents;
@property(copy, nonatomic) NSString *handle; // @synthesize handle=_handle;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000057615
- (id)stringValue;	// IMP=0x000000000005755d
- (id)initWithHandle:(id)arg1 nameComponents:(id)arg2;	// IMP=0x0000000000057495

@end

