//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, VSCredentialEntryViewModel;

__attribute__((visibility("hidden")))
@interface VSCredentialEntryButton : NSObject
{
    VSCredentialEntryViewModel *_owningViewModel;	// 8 = 0x8
    NSString *_title;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000055f34
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) __weak VSCredentialEntryViewModel *owningViewModel; // @synthesize owningViewModel=_owningViewModel;

@end

