//
//  DVVideoH264HardwareDecoder.h
//  DVAVKit
//
//  Created by 施达威 on 2019/3/23.
//  Copyright © 2019 DVKit. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "DVVideoDecoder.h"

NS_ASSUME_NONNULL_BEGIN

@interface DVVideoH264HardwareDecoder : NSObject <DVVideoDecoder>

#pragma mark - <-- Initializer -->
- (nullable instancetype)init UNAVAILABLE_ATTRIBUTE;
+ (nullable instancetype)new UNAVAILABLE_ATTRIBUTE;

- (instancetype)initWithSps:(NSData *)sps
                        pps:(NSData *)pps
                   delegate:(id<DVVideoDecoderDelegate>)delegate;

@end

NS_ASSUME_NONNULL_END
