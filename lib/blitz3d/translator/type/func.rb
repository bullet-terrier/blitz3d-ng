module Blitz3D
  module AST
    class FuncType < Type
      attr_accessor :cfunc, :params, :return_type, :symbol, :userlib

      def initialize(json)
        puts JSON.pretty_generate(json).red if json['params'].nil?
        @params = json['params'].map { |param| Decl.new(param) }
        @return_type = Type.load(json['return_type'])
        @symbol = json['symbol']
        @cfunc = json['cfunc']
        @userlib = json['userlib']
      end

      def to_c
        return_type.to_c
      end
    end
  end
end
