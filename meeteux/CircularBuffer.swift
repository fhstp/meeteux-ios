//
//  CircularBuffer.swift
//  MEETeUX
//
//  Created by Niklas Thür on 18.12.18.
//  Copyright © 2018 FH St. Poelten. All rights reserved.
//

import Foundation

class CircularBuffer {
    
    private var values: [Int] = [-100, -100, -100, -100, -100]
    private var index = 0
    
    func add(value: Int)
    {
        self.values[index] = value;
        index += 1;
        
        if(index >= self.values.count)
        {
            index = 0;
        }
    }
    
    func median() -> Float
    {
        let sorted = values.sorted()
        if sorted.count % 2 == 0 {
            return Float((sorted[(sorted.count / 2)] + sorted[(sorted.count / 2) - 1])) / 2
        } else {
            return Float(sorted[(sorted.count - 1) / 2])
        }
    }
}
