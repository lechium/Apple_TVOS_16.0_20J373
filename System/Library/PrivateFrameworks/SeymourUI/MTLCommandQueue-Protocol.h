//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SeymourUI/NSObject-Protocol.h>

@class MTLCommandBufferDescriptor, NSString;
@protocol MTLCommandBuffer, MTLDevice;

@protocol MTLCommandQueue <NSObject>
- (void)insertDebugCaptureBoundary;
- (id <MTLCommandBuffer>)commandBufferWithUnretainedReferences;
- (id <MTLCommandBuffer>)commandBufferWithDescriptor:(MTLCommandBufferDescriptor *)arg1;
- (id <MTLCommandBuffer>)commandBuffer;
@property(nonatomic, readonly) id <MTLDevice> device;
@property(nonatomic, copy) NSString *label;
@end

