//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <iTunesStore/ISOperation.h>

@class NSHTTPURLResponse;

@interface PBMachineDataOperation : ISOperation
{
    NSHTTPURLResponse *_response;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x00200000000fc6e5
@property(retain, nonatomic) NSHTTPURLResponse *response; // @synthesize response=_response;
- (void)run;	// IMP=0x00100000000fc0d5
- (id)initWithURLResponse:(id)arg1;	// IMP=0x00100000000fc06d

@end
