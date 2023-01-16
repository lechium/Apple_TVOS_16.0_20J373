//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Home/NAEquatable-Protocol.h>
#import <Home/NAHashable-Protocol.h>
#import <Home/NSObject-Protocol.h>

@class NSString;
@protocol HFIconDescriptor;

@protocol HFIconDescriptor <NSObject, NAEquatable, NAHashable>
@property(nonatomic, readonly) _Bool shouldForceLTR;
@property(nonatomic, readonly) NSString *identifier;

@optional
- (long long)compare:(id <HFIconDescriptor>)arg1;
- (id)iconDescriptorByMergingWithIconDescriptor:(id <HFIconDescriptor>)arg1;
@end
